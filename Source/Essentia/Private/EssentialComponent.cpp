// Fill out your copyright notice in the Description page of Project Settings.


#include "EssentialComponent.h"
#include "EssentialField_Base.h"
#include "EssentiaLogging.h"
#include "EssenceTagContainer_Base.h"
#include "EssenceTagBarComponent_Base.h"
#include "EssentialActor_Base.h"
#include "EssentialCharacter_Base.h"

/**
* -------------------------------------Overview--------------------------------------------------
*
* This is a modular component that can allow an arbitrary actor to hold elemental charge, which is
* the core magic system of my game. Different elemental combinations produce different effects
* when they reach the end of their life cycle and release their energy. The player has abilities 
* that let them apply different elements to an object to create specific effects.
* 
* The elements are linked to int IDs, which I'm preprocessing below for places I need to hard-code
* a specific element.
*/

#define AIR 0
#define LIGHTNING 1
#define STARS 2
#define WATER 3
#define EARTH 4
#define METAL 5
#define WOOD 6
#define FIRE 7

#define BASIC_LIFESPAN 5.0
#define FIELD_LIFESPAN 5.0


UEssentialComponent::UEssentialComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	// Initialize a counter for each element in the counter array
	ChargeCounts.Init(0, NUM_ELEMENTS);

}


void UEssentialComponent::BeginPlay()
{
	Super::BeginPlay();

	// For computational load since I've done limited optimization yet
	SetComponentTickInterval(0.2f);

	// Delay display initialization until the components exist
	GetWorld()->GetTimerManager().SetTimer(DisplayInitTimerHandle, this,
		&UEssentialComponent::InitializeDisplayWidget,
		0.1f, false);
	
}



void UEssentialComponent::TickComponent(float DeltaTime, ELevelTick TickType,
	FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	EssentialTick(DeltaTime);

	// ...
}


/**
* This custom tick function handles the lifetime countdown of each charge stack.
* We always loop through charge backwards so removing a stack doesn't invalidate any indices.
*/
void UEssentialComponent::EssentialTick(float DeltaTime)
{
	FEssenceStack* LoopStack;

	for (int32 index = EssentialCharge.Num(); index-- > 0;)
	{
		if (!EssentialCharge.IsValidIndex(index)) {
			UE_LOG(EssentiaLog, Warning, TEXT("Invalid index %d in EssentialCharge of size %d"), 
				index, EssentialCharge.Num());
			return;
		}
		//EditorDisplayEssentia(EssentialCharge[i]);

		LoopStack = &EssentialCharge[index];

		if (!(LoopStack->bIsStable || LoopStack->bIsPerpetual)) {

			LoopStack->PurgeTimer -= DeltaTime;	
			
			if (LoopStack->PurgeTimer <= 0) {
				index = PurgeStack(*LoopStack, index);
			}
		}
	}
}




/**
* Basic utilities to add and remove charge from this component. Certain properties can prevent
* adding or removing in some circumstances, so we return a bool 
*/
bool UEssentialComponent::AddStack(FEssenceStack NewStack) {

	// A max of -1 means charge is uncapped
	if (EssentialCharge.Num() < MaxCharge || MaxCharge == -1)
	{

		EssentialCharge.Add(NewStack);
		ChargeCounts[NewStack.ElemID]++;
		DisplayAdd(NewStack);

		return true;
	}
	else {
		return false;
	}


}

bool UEssentialComponent::RemoveStack(FEssenceStack Stack, int32 StackIndex, bool bIsPurging)
{
	if (StackIndex > EssentialCharge.Num() || StackIndex < 0) {

		UE_LOG(EssentiaLog, Warning, TEXT("Failure to remove stack due to index %d"), StackIndex);
		return false;
	}

	if (!Stack.bIsPerpetual)
	{

		if (EssentialCharge.IsValidIndex(StackIndex)) {
			ChargeCounts[Stack.ElemID]--;
			EssentialCharge.RemoveAt(StackIndex);
			DisplayRemove(StackIndex);
		}
		
	
		// Delay destroying ephemeral objects if we're mid-purge in case there are unfinished effects
		if (bIsEphemeral && !bIsPurging && EssentialCharge.Num() == 0) {
			DestroyEphemeral();
		}

		return true;
	}
	else
	{
		return false;
	}
}


/**
* Currently not doing anything fancy in the kill function
*/
void UEssentialComponent::DestroyEphemeral() {

	GetOwner()->Destroy();

}


/**
* Utility function that gets a default stack instance of an elemental charge
*/
FEssenceStack UEssentialComponent::GetBasicStack(int32 elem_id, bool stable)
{
	FEssenceStack basic_stack = { elem_id, stable, false, 0, BASIC_LIFESPAN };

	return basic_stack;
}


#pragma region Purge


/**
* Purges are the meat of elemental interactions. The purging stack reacts with elements still
* present in the charge array, producing effects on the main actor. The exact logic is complex, but
* the result is an intuitive simulation of real-world phenomena. E.g., Fire and Lightning both burn
* Wood to create Fire, Air and Water both erode Earth, etc.
* 
* Usually, a purge reaction will remove the reacted stack as well.
* 
* The return tracks the location of StacKIndex in the charge array. Certain reactions will remove
* stacks in unpredictable places, and this keeps the index from being invalidated.
*/

int32 UEssentialComponent::PurgeStack(FEssenceStack Stack, int32 StackIndex)
{
	int32 ElemID = Stack.ElemID;

	FEssenceStack PurgedStack = Stack;

	RemoveStack(Stack, StackIndex, true);

	switch (ElemID)
	{
		case AIR:
			StackIndex = PurgeAir(PurgedStack, StackIndex);
			break;
		case LIGHTNING:
			StackIndex = PurgeLightning(PurgedStack, StackIndex);
			break;
		case STARS:
			StackIndex = PurgeStars(PurgedStack, StackIndex);
			break;
		case WATER:
			StackIndex = PurgeWater(PurgedStack, StackIndex);
			break;
		case EARTH:
			StackIndex = PurgeEarth(PurgedStack, StackIndex);
			break;
		case METAL:
			StackIndex = PurgeMetal(PurgedStack, StackIndex);
			break;
		case WOOD:
			StackIndex = PurgeWood(PurgedStack, StackIndex);
			break;
		case FIRE:
			StackIndex = PurgeFire(PurgedStack, StackIndex);
			break;
	}

	if (bIsEphemeral && EssentialCharge.Num() == 0) {
		DestroyEphemeral();
	}

	return StackIndex;


}


/**
* There are only a few element pairs that result in a cascade, so I've hard-coded the checks for now.
* 
* I initially conceptualized cascades as a mid-purge effect, but that resulted in nasty nested loops.
* While looping for purge, we'd see that a cascade was necessary and go back to loop through the
* array to remove all instances of the cascading element. In edge cases, that's O(n^2). We can do
* this lookahead instead to see if a cascade is called for beofre we start the purge, and pick
* up the charge along the way.
* 
* The return map has keys indicating which elements are cascading, and values containing relevant
* data for the reaction.
*/
TMap<int32, FCascadeParams> UEssentialComponent::CheckCascade(int32 ElemID) {
	TMap<int32, FCascadeParams> CascadeParamMap;

	switch (ElemID) {
		case AIR:
			if (ChargeCounts[STARS] > 0) {
				CascadeParamMap.Add(ElemID, FCascadeParams(ElemID));
			}
			break;

		case LIGHTNING:
			if (ChargeCounts[EARTH] > 0) {
				CascadeParamMap.Add(ElemID , FCascadeParams(ElemID));
			}
			break;

		case STARS:
			if (ChargeCounts[AIR] > 0) {
				CascadeParamMap.Add(AIR, FCascadeParams(AIR));
				CascadeParamMap[AIR].TriggerElemID = ElemID;
			}
			if (ChargeCounts[WATER] > 0) {
				CascadeParamMap.Add(WATER, FCascadeParams(WATER));
				CascadeParamMap[WATER].TriggerElemID = ElemID;
			}
			if (ChargeCounts[FIRE] > 0) {
				CascadeParamMap.Add(FIRE, FCascadeParams(FIRE));
				CascadeParamMap[FIRE].TriggerElemID = ElemID;
			}
			break;

		case WATER:
			if (ChargeCounts[LIGHTNING] > 0) {
				CascadeParamMap.Add(LIGHTNING, FCascadeParams(LIGHTNING));
				CascadeParamMap[LIGHTNING].TriggerElemID = ElemID;
			}
			if (ChargeCounts[STARS] > 0 || ChargeCounts[FIRE] > 0) {
				CascadeParamMap.Add(ElemID, FCascadeParams(ElemID));
			}
			break;

		case EARTH:
			if (ChargeCounts[LIGHTNING] > 0) {
				CascadeParamMap.Add(LIGHTNING, FCascadeParams(LIGHTNING));
				CascadeParamMap[LIGHTNING].TriggerElemID = ElemID;
			}
			break;

		case METAL:
			if (ChargeCounts[LIGHTNING] > 0) {
				CascadeParamMap.Add(LIGHTNING, FCascadeParams(LIGHTNING));
				CascadeParamMap[LIGHTNING].TriggerElemID = ElemID;
			}
			break;

		case WOOD:
			// Wood has no cascade reactions
			break;

		case FIRE:
			if (ChargeCounts[STARS] > 0 || ChargeCounts[WATER] > 0) {
				CascadeParamMap.Add(ElemID, FCascadeParams(ElemID));
			}
			break;
	}

	return CascadeParamMap;
}


void UEssentialComponent::FinishCascade(FCascadeParams CascadeParams) {

	// Exact cascade effects are still under construction
	// Each trigger/cascade elemental pair has a specific output effect

	UE_LOG(EssentiaLog, Warning, TEXT("Trigger: %d, Subject: %d, Num: %d"),
		CascadeParams.TriggerElemID, CascadeParams.SubjectElemID, CascadeParams.NumCatalyzed);
}


/**
* Air is good at spawning fields: dust, vapor, static, and flame. It cascades into Stars, the element
* of vacuum.
* 
* Bookmark is an index in the main charge array that we keep track of as the array changes.
* 
 */
int32 UEssentialComponent::PurgeAir(FEssenceStack Stack, int32 Bookmark)
{
	int32 ElemID;

	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);

	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);

	for (int32 i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;

		switch (ElemID)
		{
			case AIR:
				// Air-air, neutral unless cascading
				if (CascadeParams.Contains(ElemID)) {
					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark){
						Bookmark--;
					}
					CascadeParams[ElemID].NumCatalyzed++;
				}

				break;
	
			case LIGHTNING:
				// Air-lightning, spawn lightning field
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}

					SpawnField(GetBasicStack(ElemID), FIELD_LIFESPAN);
				}
				break;

			case STARS:
				// Air-stars, mark as cascade trigger if that field is blank
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (CascadeParams.Contains(AIR) && CascadeParams[AIR].TriggerElemID == -1) {
						CascadeParams[AIR].TriggerElemID = ElemID;

						if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
							Bookmark--;
						}
					}
				}

				break;

			case WATER:
				// Air-water, spawn water field
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
					SpawnField(GetBasicStack(ElemID), FIELD_LIFESPAN);
				}
				break;

			case EARTH:
				// Air-earth, destabilize if stable OR create earth field if not
				if (!InteractFlags[ElemID])
				{
					if (EssentialCharge[i].bIsStable)
					{
						if (EssentialCharge[i].PurgeTimer <= 0) {
							EssentialCharge[i].PurgeTimer = BASIC_LIFESPAN;
						}
						EssentialCharge[i].bIsStable = false;
					}
					else {
						if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
							Bookmark--;
						}
						SpawnField(GetBasicStack(ElemID), FIELD_LIFESPAN);
					}
				}
				break;

			case METAL:
				// Air-metal, neutral
				break;

			case WOOD:
				// Air-wood, neutral
				break;

			case FIRE:
				// Air-fire, spawn fire field
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
					SpawnField(GetBasicStack(ElemID), FIELD_LIFESPAN);
				}
				break;
		}
	}

	if (CascadeParams.Num() > 0) {
		for (auto& Elem :CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}

	return Bookmark;
}


/**
* Lightning is good at forming fields with Air and Stars and sustaining itself with new charge
* iterations spawned on Water and Metal, and cascades into Earth. It burns Wood, and a cascade
* can also be triggered when Water or Metal, the conducting elements, purge.
*
* Bookmark is an index in the main charge array that we keep track of as the array changes.
*
 */
int32 UEssentialComponent::PurgeLightning(FEssenceStack Stack, int32 Bookmark)
{
	int32 ElemID;

	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);

	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);

	for (int i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;
		switch (ElemID)
		{
			case AIR:
				// Lightning-air, spawn lightning field
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
					SpawnField(GetBasicStack(Stack.ElemID), FIELD_LIFESPAN);
				}

				break;

			case LIGHTNING:
				// Lightning-lightning, pick up energy if we're cascading 

				if (CascadeParams.Contains(ElemID)) {
					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
					CascadeParams[ElemID].NumCatalyzed++;
				}

				break;

			case STARS:
				// Lightning-stars, spawn lightning field
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
					SpawnField(GetBasicStack(Stack.ElemID), FIELD_LIFESPAN);
				}

				break;

			case WATER:
				// Lightning-water, spawn new lightning
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;
					AddStack(GetBasicStack(Stack.ElemID));

					// Twitch condition, when conditions are implemented
				}

				break;

			case EARTH:
				// Lightning-earth, mark cascade trigger
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (CascadeParams.Contains(LIGHTNING) &&
						CascadeParams[LIGHTNING].TriggerElemID == -1) {
						CascadeParams[LIGHTNING].TriggerElemID = ElemID;

						if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
							Bookmark--;
						}
					}
				}

				break;

			case METAL:
				// Lightning-metal, spawn new lightning
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					AddStack(GetBasicStack(Stack.ElemID));
				}

				break;

			case WOOD:
				// Lightning-wood, remove wood and spawn fire
				if (!InteractFlags[ElemID])
				{
					InteractFlags[ElemID] = true;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
					AddStack(GetBasicStack(FIRE));
				}

				break;

			case FIRE:
				// Lightning-fire, neutral

				break;
		}
	}

	if (CascadeParams.Num() > 0) {
		for (auto& Elem : CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}

	return Bookmark;
}


/**
* Stars is good at triggering cascades in the fluid elements: Air, Water, and Fire. It also creates
* electrical fields from Lightning and charges other Stars stacks with additional damage.
* In future, I plan to implement gravity fields for some Stars effects.
*
* Bookmark is an index in the main charge array that we keep track of as the array changes.
*
 */
int32 UEssentialComponent::PurgeStars(FEssenceStack Stack, int32 Bookmark)
{
	int32 ElemID;

	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);

	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);

	for (int32 i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;

		switch (ElemID)
		{
		case AIR:
			// Stars-air, pick up cascade energy and set cascade trigger if necessary
			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				if (CascadeParams[ElemID].TriggerElemID == -1) {
					CascadeParams[ElemID].TriggerElemID = Stack.ElemID;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}

			break;

		case LIGHTNING:
			// Stars-lightning, spawn lightning field

			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				SpawnField(GetBasicStack(ElemID), FIELD_LIFESPAN);
			}

			break;

		case STARS:
			// Stars-stars, boost other damage

			EssentialCharge[i].PurgeDamage++;

			break;

		case WATER:
			// Stars-water, pick up cascade energy and set cascade trigger if necessary

			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				if (CascadeParams[ElemID].TriggerElemID == -1) {
					CascadeParams[ElemID].TriggerElemID = Stack.ElemID;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}

			break;

		case EARTH:
			// Stars-earth, a gravity effect to be implemented later

			if (!InteractFlags[ElemID]) {
				InteractFlags[ElemID] = true;
			
				// Gravity effect TBD
			}

			break;

		case METAL: 
			// Stars-metal, neutral

			break;

		case WOOD: 
			// Stars-wood, neutral

			break;

		case FIRE:
			// Stars-fire, pick up cascade energy and set cascade trigger if necessary

			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				if (CascadeParams[ElemID].TriggerElemID == -1) {
					CascadeParams[ElemID].TriggerElemID = Stack.ElemID;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}
			break;
		}
	}
	
	if (CascadeParams.Num() > 0) {
		for (auto& Elem : CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}

	return Bookmark;
}


/**
* Water is good at destabilizing the hard elements, Earth and Metal, creates vapor fields with Air,
* and cascades into both Stars and Fire. If both are present, the first encountered in the loop is
* marked cascade trigger. Water also triggers Lightning to cascade.
*
* Bookmark is an index in the main charge array that we keep track of as the array changes.
*
 */
int32 UEssentialComponent::PurgeWater(FEssenceStack Stack, int32 Bookmark)
{
	int32 ElemID;

	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);

	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);

	for (int32 i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;

		switch (ElemID)
		{
		case AIR:
			// Water-air, spawn water field
			
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				RemoveStack(EssentialCharge[i], i, true);
				SpawnField(GetBasicStack(Stack.ElemID), FIELD_LIFESPAN);
			}

			break;

		case LIGHTNING:
			// Water-lightning, pick up cascade energy and set cascade trigger if necessary

			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				if (CascadeParams[ElemID].TriggerElemID == -1) {
					CascadeParams[ElemID].TriggerElemID = Stack.ElemID;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}

			break;

		case STARS:
			// Water-stars, mark as cascade trigger

			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (CascadeParams.Contains(WATER) && CascadeParams[WATER].TriggerElemID == -1) {
					CascadeParams[WATER].TriggerElemID = ElemID;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
				}
			}

			break;

		case WATER:
			// Water-water, pick up cascade energy if relevant

			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}

			break;

		case EARTH:
			// Water-earth, destabilize OR accelerate decay
			
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (EssentialCharge[i].bIsStable) {
					if (EssentialCharge[i].PurgeTimer <= 0) {
						EssentialCharge[i].PurgeTimer = BASIC_LIFESPAN;
					}
					EssentialCharge[i].bIsStable = false;
				}
				else {
					EssentialCharge[i].PurgeTimer -= BASIC_LIFESPAN / 2;
				}
			}

			break;

		case METAL:
			// Water-metal, destabilize
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (EssentialCharge[i].bIsStable) {
					if (EssentialCharge[i].PurgeTimer <= 0) {
						EssentialCharge[i].PurgeTimer = BASIC_LIFESPAN;
					}
					EssentialCharge[i].bIsStable = false;
				}

				// Spawn blood when complex elements are implemented
			}

			break;

		case WOOD:
			// Water-wood, spawn rot when complex elements are implemented


			break;

		case FIRE:
			// Water-fire, mark as water cascade trigger
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (CascadeParams.Contains(WATER) && CascadeParams[WATER].TriggerElemID == -1) {
					CascadeParams[WATER].TriggerElemID = ElemID;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
				}
			}

			break;
		}
	}



	if (CascadeParams.Num() > 0) {
		for (auto& Elem : CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}
	
	return Bookmark;

}


/**
* Earth is very stable, and will be good at motion-control effects when those are implemented. It
* forms fields with Air, triggers Lightning cascade, feeds wood, and snuffs fire to spawn new earth.
*
* Bookmark is an index in the main charge array that we keep track of as the array changes.
*
 */
int32 UEssentialComponent::PurgeEarth(FEssenceStack Stack, int32 Bookmark)
{
	int32 ElemID;

	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);

	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);

	for (int i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;

		switch (ElemID)
		{
		case AIR:
			// Earth-air, spawn earth field
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				RemoveStack(EssentialCharge[i], i, true);
				SpawnField(GetBasicStack(Stack.ElemID), FIELD_LIFESPAN);
			}

			break;

		case LIGHTNING:
			// Earth-lightning, pick up cascade energy and mark cascade trigger if necessary

			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				if (CascadeParams[ElemID].TriggerElemID == -1) {
					CascadeParams[ElemID].TriggerElemID = Stack.ElemID;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}

			break;

		case STARS:
			// Earth-stars, some gravity effect when implemented
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				// Some gravity effect TBD

			}

			break;

		case WATER:
			// Earth-water, some slow effect when implemented
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				// Slow effect TBD
			}

			break;

		case EARTH:
			// Earth-earth, neutral

			break;

		case METAL:
			// Earth-metal, neutral

			break;

		case WOOD:
			// Earth-wood, spawn new stable wood. Maybe slow effect when implemented
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				AddStack(GetBasicStack(ElemID, true));
				
				// Maybe a slow/entangle effect TBD
			}

			break;

		case FIRE:
			// Earth-fire, remove fire and spawn new stable earth
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				AddStack(GetBasicStack(Stack.ElemID, true));
			}

			break;
		}
	}

	if (CascadeParams.Num() > 0) {
		for (auto& Elem : CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}

	return Bookmark;
}



/**
* Metal is very stable, and good at building up damage over time. It triggers Lightning cascade,
* boosts the damage of other Metal stacks, destabilizes Wood, and gets a damage boost from Fire.
*
 */
int32 UEssentialComponent::PurgeMetal(FEssenceStack Stack, int32 Bookmark)
{
	// Var to store the element of each stack as we loop through
	int32 ElemID;

	// Array to track which interactions we've already done. Some happen only once per purge
	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);


	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);


	for (int32 i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;

		switch (ElemID)
		{
		case AIR:
			// Metal-air, neutral

			break;

		case LIGHTNING:
			// Metal-lightning, pick up cascade and mark as cascade trigger if necessary
			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				if (CascadeParams[ElemID].TriggerElemID == -1) {
					CascadeParams[ElemID].TriggerElemID = Stack.ElemID;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}

			break;

		case STARS:
			// Metal-stars, neutral

			break;

		case WATER:
			// Metal-water, spawn blood when complex elements are implemented
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				// Spawn blood TBD
			}

			break;

		case EARTH:
			// Metal-earth, neutral

			break;

		case METAL:
			// Metal-metal, boost other dps
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;
				EssentialCharge[i].PurgeDamage++;
			}

			break;

		case WOOD:
			// Metal-wood, destabilize
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				// Destabilize wood
				if (EssentialCharge[i].bIsStable) {
					if (EssentialCharge[i].PurgeTimer <= 0) {
						EssentialCharge[i].PurgeTimer = BASIC_LIFESPAN;
					}
					EssentialCharge[i].bIsStable = false;
				}
			}

			break;

		case FIRE:
			// Metal-fire, boost own damage
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				Stack.PurgeDamage++;
			}

			break;
		}
	}

	if (CascadeParams.Num() > 0) {
		for (auto& Elem : CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}

	return Bookmark;
}


/**
* Wood is easily burned, but otherwise very stable. It spawns Fire from Lightning or other Fire, 
* boosts the damage of other Wood stacks, and regrows where it finds Earth.
*
 */
int32 UEssentialComponent::PurgeWood(FEssenceStack Stack, int32 Bookmark)
{
	int32 ElemID;

	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);

	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);

	for (int i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;

		switch (ElemID)
		{
		case AIR:
			// Wood-air, neutral

			break;

		case LIGHTNING:
			// Wood-lightning, spawn fire
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				AddStack(GetBasicStack(FIRE));
			}

			break;

		case STARS:
			// Wood-stars, neutral

			break;

		case WATER:
			// Wood-water, spawn rot when complex elements are implemented
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				// Spawn rot TBD
			}

			break;

		case EARTH:
			// Wood-earth, spawn stable wood
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				AddStack(GetBasicStack(Stack.ElemID, true));
			}

			break;

		case METAL:
			// Wood-metal, neutral

			break;

		case WOOD:
			// Wood-wood, boost other dps
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				EssentialCharge[i].PurgeDamage++;
			}

			break;

		case FIRE:
			// Wood-fire, spawn new fire
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				AddStack(GetBasicStack(ElemID));
			}

			break;
		}
	}

	if (CascadeParams.Num() > 0) {
		for (auto& Elem : CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}
	return Bookmark;
}



/**
* Fire is good at propagating itself, but cascades easily. Spawns fields with Air, burns Wood to 
* create more Fire, bakes Earth into stable form, boosts Metal damage and Fire duration, and cascades
* into Stars and Water.
* 
*
 */
int32 UEssentialComponent::PurgeFire(FEssenceStack Stack, int32 Bookmark)
{
	int32 ElemID;

	TArray<bool> InteractFlags;
	InteractFlags.Init(false, NUM_ELEMENTS);

	TMap<int32, FCascadeParams> CascadeParams = CheckCascade(Stack.ElemID);

	for (int i = EssentialCharge.Num(); i-- > 0;)
	{
		ElemID = EssentialCharge[i].ElemID;

		switch (ElemID)
		{
		case AIR:
			// Fire-air, spawn fire field
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				RemoveStack(EssentialCharge[i], i, true);

				SpawnField(GetBasicStack(Stack.ElemID), FIELD_LIFESPAN);
			}

			break;

		case LIGHTNING:
			// Fire-lightning, neutral

			break;

		case STARS:
			// Fire-stars, mark as cascade trigger
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (CascadeParams.Contains(FIRE) && CascadeParams[FIRE].TriggerElemID == -1) {
					CascadeParams[FIRE].TriggerElemID = ElemID;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
				}
			}

			break;

		case WATER:
			// Fire-water, mark as cascade trigger
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (CascadeParams.Contains(LIGHTNING) &&
					CascadeParams[LIGHTNING].TriggerElemID == -1) {
					CascadeParams[LIGHTNING].TriggerElemID = ElemID;

					if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
						Bookmark--;
					}
				}
			}

			break;

		case EARTH:
			// Fire-earth, stabilize if unstable
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				if (!EssentialCharge[i].bIsStable) {
					EssentialCharge[i].bIsStable = true;
				}
			}
			break;

		case METAL:
			// Fire-metal, boost metal dps
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				EssentialCharge[i].PurgeDamage++;
			}

			break;

		case WOOD:
			// Fire-wood, remove wood spawn fire
			if (!InteractFlags[ElemID])
			{
				InteractFlags[ElemID] = true;

				RemoveStack(EssentialCharge[i], i, true);
				AddStack(GetBasicStack(Stack.ElemID));
			}

			break;

		case FIRE:
			// Fire-fire, boost duration of all fire stacks or pick up cascade energy
			if (CascadeParams.Contains(ElemID)) {
				if (RemoveStack(EssentialCharge[i], i, true) && i < Bookmark) {
					Bookmark--;
				}
				CascadeParams[ElemID].NumCatalyzed++;
			}
			else
			{
				EssentialCharge[i].PurgeTimer += (BASIC_LIFESPAN / 2);
			}

			break;
		}
	}

	if (CascadeParams.Num() > 0) {
		for (auto& Elem : CascadeParams) {
			FinishCascade(Elem.Value);
		}
	}

	return Bookmark;
}


#pragma endregion



#pragma region Fields

/*
* The bulk of field logic is handled in that class, so all we need here is enough data to spawn one.
* 
* Different objects can spawn different types of field, so we set which in a TSubclassOf
*/
void UEssentialComponent::SpawnField(FEssenceStack Stack, float Lifespan)
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this->GetOwner();

	if (FieldClass)
	{
		AEssentialField_Base* NewField = GetWorld()->SpawnActor<AEssentialField_Base>(
			FieldClass,
			this->GetOwner()->GetActorLocation(),
			FRotator::ZeroRotator,
			SpawnParams);

		// Use custom init function for field
		NewField->InitializeField(Stack, Lifespan);
	}
}
#pragma endregion

#pragma region Display


/**
* We can display charge info in a few ways: To the screen in the editor, in a widget above the actor,
* and on a material surface. Currently this is the most basic functionality that still gives usable
* world info, but I'd like to make it all prettier when I have mechanics solid.
* 
*/

void UEssentialComponent::DisplayAdd(FEssenceStack Stack) {

	if (bHasDisplayWidget) {
		TagAdd(Stack);
	}
	if (bHasDisplayMaterial) {
		MaterialAdd(Stack);
	}
}

void UEssentialComponent::DisplayRemove(int32 stack_index) {

	if (bHasDisplayWidget) {
		TagRemove(stack_index);
	}
	if (bHasDisplayMaterial) {
		MaterialRemove(stack_index);
	}
}


void UEssentialComponent::EditorDisplayEssentia(FEssenceStack DisplayStack) {

#if WITH_EDITOR
	FColor DisplayColor;

	float DisplayTime = 0.195f;

	switch (DisplayStack.ElemID) {
	case AIR:
		DisplayColor = FColor::Yellow;
		break;
	case LIGHTNING:
		DisplayColor = FColor::Purple;
		break;
	case STARS:
		DisplayColor = FColor::Black;
		break;
	case WATER:
		DisplayColor = FColor::Blue;
		break;
	case EARTH:
		DisplayColor = FColor::Orange;
		break;
	case METAL:
		DisplayColor = FColor::Silver;
		break;
	case WOOD:
		DisplayColor = FColor::Green;
		break;
	case FIRE:
		DisplayColor = FColor::Red;
		break;
	}


	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, DisplayColor,
		"Charge ID: " + FString::FromInt(DisplayStack.ElemID));

	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, DisplayColor,
		DisplayStack.bIsStable ? TEXT("Stable.") : TEXT("Unstable."));

	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, DisplayColor,
		DisplayStack.bIsPerpetual ? TEXT("Perpetual.") : TEXT("Finite."));

	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, DisplayColor,
		"Damage: " + FString::FromInt(DisplayStack.PurgeDamage));

	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, DisplayColor,
		"Purge timer: " + FString::SanitizeFloat(DisplayStack.PurgeTimer));
#endif
}



// Widget tag display
void UEssentialComponent::InitializeDisplayWidget()
{
	for (int32 i = 0; i < EssentialCharge.Num(); i++) {
		DisplayAdd(EssentialCharge[i]);

		ChargeCounts[EssentialCharge[i].ElemID]++;

	}
}

void UEssentialComponent::TagAdd(FEssenceStack Stack)
{
	if (EssenceDisplayWidget) {
		EssenceDisplayWidget->AddEssenceTag(Stack);
	}

}

void UEssentialComponent::TagRemove(int32 StackIndex)
{
	if (EssenceDisplayWidget) {
		EssenceDisplayWidget->RemoveEssenceTag(StackIndex);
	}

}


// Material color display
void UEssentialComponent::MaterialAdd(FEssenceStack Stack) {

	if (DisplayMaterial) {


		DisplayMaterial->SetVectorParameterValue("BaseColor", EssentialColors[
			Stack.ElemID].ReinterpretAsLinear());

	}
}

void UEssentialComponent::MaterialRemove(int32 StackIndex) {

	if (DisplayMaterial) {

		// Temprary, only displays the top stack in the array. End goal: Average color
		if (EssentialCharge.Num() > 0) {
			MaterialAdd(EssentialCharge.Last());
		}

	}
}
#pragma endregion



