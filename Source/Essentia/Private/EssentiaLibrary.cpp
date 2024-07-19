// Fill out your copyright notice in the Description page of Project Settings.

/*
#include "EssentiaLibrary.h"

#define AIR 0
#define LIGHTNING 1
#define STARS 2
#define WATER 3
#define EARTH 4
#define METAL 5
#define WOOD 6
#define FIRE 7
#define FIELD_LIFESPAN 5.0
#define BASIC_LIFESPAN 5.0


// Attach this to tick for any essential object
void UEssentiaLibrary::essential_tick(float delta_time, FEssentialComponent_ST& component) {
	

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{
		display_essentia(component.essential_charge[i]);

		if (!component.essential_charge[i].is_stable) {

			component.essential_charge[i].purge_timer -= delta_time; // Decrement timer



			if (component.essential_charge[i].purge_timer <= 0) {
				stack_purge(component, component.essential_charge[i], i);	// Remove stack when it's time
			}
		}
	}

}



// Basic display essence info while tags are weird
void UEssentiaLibrary::display_essentia(FEssenceStack loop_stack) {

	FColor display_color;

	switch (loop_stack.charge_id) {
	case 0:
		display_color = FColor::Yellow;
		break;
	case 1:
		display_color = FColor::Purple;
		break;
	case 2:
		display_color = FColor::Black;
		break;
	case 3:
		display_color = FColor::Blue;
		break;
	case 4:
		display_color = FColor::Orange;
		break;
	case 5:
		display_color = FColor::Silver;
		break;
	case 6:
		display_color = FColor::Green;
		break;
	case 7:
		display_color = FColor::Red;
		break;
	}


	GEngine->AddOnScreenDebugMessage(-1, 0.195f, display_color, 
		"Charge ID: " + FString::FromInt(loop_stack.charge_id));

	GEngine->AddOnScreenDebugMessage(-1, 0.195f, display_color, 
		loop_stack.is_stable ? TEXT("Stable.") : TEXT("Unstable."));

	GEngine->AddOnScreenDebugMessage(-1, 0.195f, display_color, 
		loop_stack.is_perpetual ? TEXT("Perpetual.") : TEXT("Finite."));

	GEngine->AddOnScreenDebugMessage(-1, 0.195f, display_color, 
		"Damage: " + FString::FromInt(loop_stack.purge_damage));

	GEngine->AddOnScreenDebugMessage(-1, 0.195f, display_color, 
		"Purge timer: " + FString::SanitizeFloat(loop_stack.purge_timer));

}





// First thing we'll need is to get the essential component from objects of arbitrary classes
/*FEssentialComponent  void UEssentiaLibrary::cast_to_essentia(AActor* object) {
	
}



// Physics functions
// Add and remove stacks
void UEssentiaLibrary::stack_add(FEssentialComponent_ST& component, FEssenceStack new_stack) {

	// Add the stack to the component
	component.essential_charge.Add(new_stack);

	// Increment proper charge count
	component.charge_counts[new_stack.charge_id] += 1;

	// Add the corresponding tag for this charge
	tag_spawn(component, new_stack, component.essential_charge.Num());
}

bool UEssentiaLibrary::stack_remove(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {

	if (!component.essential_charge[stack_index].is_perpetual)
	{

		// Decrement the proper charge count
		component.charge_counts[stack.charge_id] -= 1;

		// Remove the stack from the component charge array
		component.essential_charge.RemoveAt(stack_index);

		// Remove the corresponding tag
		tag_remove(component, stack_index);

		return true;
		GEngine->AddOnScreenDebugMessage(-1, 30.0f,
			FColor::Black, "Removed stack at " + FString::FromInt(stack_index));
	}
	else
	{
		return false;
		GEngine->AddOnScreenDebugMessage(-1, 30.0f,
			FColor::Black, "Can't remove stack at " + FString::FromInt(stack_index));
	}

}


// Transfer charge from one essential component (carrier) to another (receiver)
void UEssentiaLibrary::force_transfer(FEssentialComponent_ST& carrier_component, FEssentialComponent_ST& receiver_component,
	FEssenceStack stack, int32 stack_index) {

	// Add the charge to the receiver
	stack_add(receiver_component, stack);

	// Remove the charge from the carrier
	stack_remove(carrier_component, stack, stack_index);

}



// Purge functions
// This one is the only one we'll call from outside
void UEssentiaLibrary::stack_purge(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {

	// Element id 
	int32 element_id = stack.charge_id;

	// Index for where this stack is, since it can change in our purge functions
	int32 current_index = stack_index;


	// Case statements for our elements
	switch (element_id)
	{
	case 0:
		current_index = purge_air(component, stack, stack_index);
		break;
	case 1:
		current_index = purge_lightning(component, stack, stack_index);
		break;
	case 2:
		current_index = purge_stars(component, stack, stack_index);
		break;
	case 3:
		current_index = purge_water(component, stack, stack_index);
		break;
	case 4:
		current_index = purge_earth(component, stack, stack_index);
		break;
	case 5:
		current_index = purge_metal(component, stack, stack_index);
		break;
	case 6:
		current_index = purge_wood(component, stack, stack_index);
		break;
	case 7:
		current_index = purge_fire(component, stack, stack_index);
		break;
	default:
		;
	}

	stack_remove(component, stack, current_index);

}



// These should only be called by purge_stack()
// They return a stack index so we can move the other stacks down the list
int32 UEssentiaLibrary::purge_air(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {

	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(false, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i --> 0;)
	{
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Air-air, neutral
			break;

		case 1:
			// Air-lightning, spawn lightning field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn lightning field
				field_spawn(get_basicstack(i), FIELD_LIFESPAN);

			}

			break;

		case 2:
			// Air-stars, some kind of vacuum effect
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Some vacuum effect

			}

			break;

		case 3:
			// Air-water, create water field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn water field
				field_spawn(get_basicstack(i), FIELD_LIFESPAN);


			}

			break;

		case 4:
			// Air-earth, create earth field, start decaying, reduce time
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn earth field
				field_spawn(get_basicstack(i), FIELD_LIFESPAN);


				// Destabilize stack or reduce lifespan
				if (component.essential_charge[i].is_stable) {
					if (component.essential_charge[i].purge_timer <= 0) {
						component.essential_charge[i].purge_timer = BASIC_LIFESPAN;
					}
					component.essential_charge[i].is_stable = false;
				}
				else {
					component.essential_charge[i].purge_timer -= BASIC_LIFESPAN/2;
				}


			}

			break;

		case 5:
			// Air-metal, neutral
			break;

		case 6:
			// Air-wood, neutral
			break;

		case 7:
			// Air-fire, spawn fire field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn fire field
				field_spawn(get_basicstack(i), FIELD_LIFESPAN);

			}

			break;

		default:
			;
		}

	}

	return new_stack_index;
}

int32 UEssentiaLibrary::purge_lightning(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(0, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Lightning-air, spawn lightning field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn lightning field
				field_spawn(get_basicstack(LIGHTNING), FIELD_LIFESPAN);

			}

			break;

		case 1:
			// Lightning-lightning, some kind of duration effect

			break;

		case 2:
			// Lightning-stars, spawn lightning field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn lightning field
				field_spawn(get_basicstack(LIGHTNING), FIELD_LIFESPAN);

			}

			break;

		case 3:
			// Lightning-water, twitch effect, spawn a new lightning stack
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Twitch effect

				// Add stack, base lightning
				stack_add(component, get_basicstack(LIGHTNING));
			}

			break;

		case 4:
			// Lightning-earth, catalyze all lightning
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all lightning stacks
				new_stack_index = catalyze_element(component, LIGHTNING, new_stack_index, 0, true);
			}

			break;

		case 5:
			// Lightning-metal, spawn a new lightning
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Add stack, base lightning
				stack_add(component, get_basicstack(LIGHTNING));

			}

			break;

		case 6:
			// Lightning-wood, remove wood spawn fire
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Remove wood, decrement index only if we need to
				if (i < new_stack_index and
					UEssentiaLibrary::stack_remove(component, component.essential_charge[i], i)) {
					new_stack_index--;
				}
				// Spawn fire
				stack_add(component, get_basicstack(FIRE));

			}

			break;

		case 7:
			// Lightning-fire, neutral
			break;

		default:
			;
		}

	}

	return new_stack_index;

}

int32 UEssentiaLibrary::purge_stars(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(0, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Stars-air, catalyze all air, vacuum effect
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all air
				new_stack_index = UEssentiaLibrary::catalyze_element(component, AIR, new_stack_index, 0, true);
				// Vacuum effect?

			}

			break;

		case 1:
			// Stars-lightning, some kind of duration effect
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// spawn lightning field
				UEssentiaLibrary::field_spawn(UEssentiaLibrary::get_basicstack(LIGHTNING), FIELD_LIFESPAN);

			}

			break;

		case 2:
			// Stars-stars, boost damage

			component.essential_charge[i].purge_damage++;

			break;

		case 3:
			// Stars-water, catalyze all water
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all water
				new_stack_index = UEssentiaLibrary::catalyze_element(component, WATER, new_stack_index, 0, true);

			}

			break;

		case 4:
			// Stars-earth, some kind of gravity effect?
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Some kind of gravity effect?
			}

			break;

		case 5:
			// Stars-metal, neutral
			break;

		case 6:
			// Stars-wood, neutral
			break;

		case 7:
			// Stars-fire, catalyze all fire
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all fire
				new_stack_index = UEssentiaLibrary::catalyze_element(component, FIRE, new_stack_index, 0, true);

			}
			break;

		default:
			;
		}

	}
	return new_stack_index;

}

int32 UEssentiaLibrary::purge_water(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(0, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Water-air, spawn water field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn water field
				UEssentiaLibrary::field_spawn(UEssentiaLibrary::get_basicstack(WATER), FIELD_LIFESPAN);

			}

			break;

		case 1:
			// Water-lightning, some kind of duration effect
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all lightning
				new_stack_index = UEssentiaLibrary::catalyze_element(component, LIGHTNING, new_stack_index, 0, true);
				
				// Twitch effect

			}

			break;

		case 2:
			// Water-stars, neutral

			break;

		case 3:
			// Water-Water, neutral
			break;

		case 4:
			// Water-earth, destabilize or accelerate decay
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Destabilize stack or reduce lifespan
				if (component.essential_charge[i].is_stable) {
					if (component.essential_charge[i].purge_timer <= 0) {
						component.essential_charge[i].purge_timer = BASIC_LIFESPAN;
					}
					component.essential_charge[i].is_stable = false;
				}
				else {
					component.essential_charge[i].purge_timer -= BASIC_LIFESPAN/2;
				}

			}

			break;

		case 5:
			// Water-metal, destabilize and spawn blood
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Destabilize stack if stable
				if (component.essential_charge[i].is_stable) {
					if (component.essential_charge[i].purge_timer <= 0) {
						component.essential_charge[i].purge_timer = BASIC_LIFESPAN;
					}
					component.essential_charge[i].is_stable = false;
				}

				// Spanw blood

			}

			break;

		case 6:
			// Water-wood, spawn rot

			// Spawn rot

			break;

		case 7:
			// Water-fire
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all fire
				new_stack_index = UEssentiaLibrary::catalyze_element(component, FIRE, new_stack_index, 0, true);
				 
				// Spawn air field with duration based on number of fire?
				// Maybe have that number be a return of cat_element?
				UEssentiaLibrary::field_spawn(UEssentiaLibrary::get_basicstack(AIR), FIELD_LIFESPAN);
			}

			break;

		default:
			;
		}

	}
	return new_stack_index;

}

int32 UEssentiaLibrary::purge_earth(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(0, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Earth-air, spawn earth field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn earth field
				UEssentiaLibrary::field_spawn(UEssentiaLibrary::get_basicstack(EARTH), FIELD_LIFESPAN);

			}

			break;

		case 1:
			// Earth-lightning, catalyze all lightning
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all lightning
				new_stack_index = UEssentiaLibrary::catalyze_element(component, EARTH, new_stack_index, 0, true);

			}

			break;

		case 2:
			// Earth-stars, some gravity effect
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Some gravity effect

			}

			break;

		case 3:
			// Earth-water, maybe some slow effect
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Maybe some slow effect
			}

			break;

		case 4:
			// Earth-earth, neutral
			break;

		case 5:
			// Earth-metal, neutral
			break;

		case 6:
			// Earth-wood, spawn new stable wood, maybe slow/entangle effect
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn new stable wood
				UEssentiaLibrary::stack_add(component, get_basicstack(WOOD, true));

				// Maybe some slow/entangle effect?

			}

			break;

		case 7:
			// Earth-fire, catalyze one fire?
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze one fire?
				new_stack_index = UEssentiaLibrary::catalyze_element(component, FIRE, new_stack_index, 1, false);

			}

			break;

		default:
			;
		}

	}
	return new_stack_index;

}

int32 UEssentiaLibrary::purge_metal(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(0, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Metal-air, neutral
			break;

		case 1:
			// Metal-lightning, catalyze one lightning?
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze one lightning?
				new_stack_index = UEssentiaLibrary::catalyze_element(component, LIGHTNING, new_stack_index, 1, false);

			}


			break;

		case 2:
			// Metal-stars, neutral
			break;

		case 3:
			// Metal-water, spawn blood
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn blood
			}

			break;

		case 4:
			// Metal-earth, neutral
			break;

		case 5:
			// Metal-metal, boost dps (maybe all?)
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Boost dps (maybe all?)
				component.essential_charge[i].purge_damage++;

			}

			break;

		case 6:
			// Metal-wood, destabilize wood
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Destabilize wood
				if (component.essential_charge[i].is_stable) {
					if (component.essential_charge[i].purge_timer <= 0) {
						component.essential_charge[i].purge_timer = BASIC_LIFESPAN;
					}
					component.essential_charge[i].is_stable = false;
				}

			}

			break;

		case 7:
			// Metal-fire, boost own dps
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Boost own dps
				component.essential_charge[new_stack_index].purge_damage++;

			}

			break;

		default:
			;
		}

	}
	return new_stack_index;

}

int32 UEssentiaLibrary::purge_wood(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(0, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Wood-air, neutral
			break;

		case 1:
			// Wood-lightning, spawn fire
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn fire
				UEssentiaLibrary::stack_add(component, UEssentiaLibrary::get_basicstack(FIRE));

			}

			break;

		case 2:
			// Wood-stars, neutral
			break;

		case 3:
			// Wood-water, spawn rot (maybe all?)
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn rot (maybe all?)

			}

			break;

		case 4:
			// Wood-earth, spawn stable wood
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn stable wood
				UEssentiaLibrary::stack_add(component, UEssentiaLibrary::get_basicstack(WOOD, true));
			}

			break;

		case 5:
			// Wood-metal, neutral
			break;

		case 6:
			// Wood-wood, boost other dps?
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Boost other dps?
				component.essential_charge[i].purge_damage++;

			}

			break;

		case 7:
			// Wood-fire, spawn new fire
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn new fire
				UEssentiaLibrary::stack_add(component, UEssentiaLibrary::get_basicstack(FIRE));

			}

			break;

		default:
			;
		}

	}
	return new_stack_index;

}

int32 UEssentiaLibrary::purge_fire(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	int32 new_stack_index = stack_index;

	int32 element_id;	// To keep track of the element of the stacks in our loop

	// Array to track interactions so we can interact with some only once per purge
	TArray<bool> interact_flags;
	interact_flags.Init(0, NUM_ELEMENTS);

	for (int32 i = component.essential_charge.Num(); i-- > 0; )
	{

		if (i == new_stack_index)
		{
			continue;
		}
		element_id = component.essential_charge[i].charge_id;

		switch (element_id)
		{
		case 0:
			// Fire-air, spawn fire field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Spawn fire field
				UEssentiaLibrary::field_spawn(UEssentiaLibrary::get_basicstack(FIRE), FIELD_LIFESPAN);

			}

			break;

		case 1:
			// Fire-lightning, neutral
			break;

		case 2:
			// Fire-stars, neutral
			break;

		case 3:
			// Fire-water, catalyze all? water, spawn air field
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Catalyze all? water
				new_stack_index = UEssentiaLibrary::catalyze_element(component, WATER, new_stack_index, 0, true);


				// Spawn air field, maybe based on number of water cat?
				UEssentiaLibrary::field_spawn(UEssentiaLibrary::get_basicstack(AIR), FIELD_LIFESPAN);

			}

			break;

		case 4:
			// Fire-earth, neutral
			break;

		case 5:
			// Fire-metal, boost metal damage
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Boost metal damage
				component.essential_charge[i].purge_damage++;

			}

			break;

		case 6:
			// Fire-wood, remove wood spawn fire
			if (!interact_flags[element_id])
			{
				interact_flags[element_id] = true;	// Trigger only once

				// Remove wood, spawn fire
				if (i < new_stack_index and 
					UEssentiaLibrary::stack_remove(component, component.essential_charge[i], i)) {
					new_stack_index--;
				}

				UEssentiaLibrary::stack_add(component, UEssentiaLibrary::get_basicstack(FIRE));
			}

			break;

		case 7:
			// Fire-fire, boost duration of fire stacks

			// Boost fire stack duration
			component.essential_charge[i].purge_timer += (BASIC_LIFESPAN / 2);


			break;

		default:
			;
		}

	}
	return new_stack_index;

}



// This function will trigger purges on one or more additional stacks of a specific element
// Not sure if I need to take an index input or no
int32 UEssentiaLibrary::catalyze_element(FEssentialComponent_ST& component, int32 element_id, int32 stack_index,
	int32 cat_count, bool is_total) {
	return stack_index;

}






// Tag functions
// Add and remove tags
void UEssentiaLibrary::tag_spawn(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index) {
	FTransform spawn_transform = component.tag_manager->GetActorTransform();
	//AActor* tag;

	switch (stack.charge_id)
	{
	case (AIR):
		break;
	
	case (LIGHTNING):
		break;

	case (STARS):
		break;

	case (WATER):
		break;
	
	case (EARTH):
		break;
	
	case (METAL):
		break;

	case (WOOD):
		break;

	case (FIRE):
		break;
	}



}

void UEssentiaLibrary::tag_remove(FEssentialComponent_ST& component, int32 stack_index) {

}






void UEssentiaLibrary::field_spawn(FEssenceStack stack, double lifespan) {

	const FVector pos = FVector(0.0f, 0.0f, 0.0f);



	// Do something to spawn a basic field 
//	GetWorld()->SpawnActor<AEssentialField_Base>(AEssentialField_Base(), pos, pos);


}





// Const utils

FEssenceStack UEssentiaLibrary::get_basicstack(int32 element_id, bool stable) {
	FEssenceStack basic_stack = { element_id, stable, false, 0, BASIC_LIFESPAN };

	return basic_stack;
}

// Get the path of the tag for the element we want because I can't find a better way to do this yet
FName UEssentiaLibrary::get_tagtype(int32 element) {
	const TArray<FName> tag_path_array = {
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_AirTag.BP_AirTag'"),
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_LightningTag.BP_LightningTag'"),
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_StarsTag.BP_StarsTag'"),
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_WaterTag.BP_WaterTag'"),
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_EarthTag.BP_EarthTag'"),
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_MetalTag.BP_MetalTag'"),
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_WoodTag.BP_WoodTag'"),
		TEXT("Class'/Script/Engine.Blueprint'/Essentia/EssenceTags/BP_FireTag.BP_FireTag'")

	};



	return tag_path_array[element];
}
*/