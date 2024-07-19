// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EssentialComponent.generated.h"


// Fwd defs
class UEssenceTagContainer_Base;
class UEssenceTagBarComponent_Base;
struct FCascadeParams;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ESSENTIA_API UEssentialComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UEssentialComponent();

	/** 
	* These are the properties essential to the magical "physics" of this component. We store 
	* elemental charge, how an object can interact with other essential objects and forces,
	* and whether this component is shielded from direct meddling, e.g. by the player.
	*/
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Physics|Charge")
	TArray<FEssenceStack> EssentialCharge;

	UPROPERTY(BlueprintReadOnly, Category="Physics|Charge")
	TArray<int32> ChargeCounts;

	// By default, charge is uncapped.
	UPROPERTY(EditAnywhere, Category="Physics|Charge")
	int32 MaxCharge = -1;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Physics|Interaction")
	bool bIsForceCarrier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Physics|Interaction")
	bool bIsForceReceiver;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Physics|Interaction")
	bool bIsEphemeral;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Physics|Interaction")
	bool bIsShielded;


	/**
	* Utility function that gets a default stack instance of a given element.
	*/
	UFUNCTION(BlueprintCallable)
	FEssenceStack GetBasicStack(int32 ElemID, bool bIsStable = false);



	/**
	* These are the basic functions of the internal physics of a magical object. We can add and
	* remove charge, and when a charge reaches the end of its lifespan, it "purges" the stored
	* energy to produce varied effects depending on the other charges present.
	* 
	*/

	// Returns whether add/remove was successful
	UFUNCTION(BlueprintCallable)
	bool AddStack(FEssenceStack NewStack);

	UFUNCTION(BlueprintCallable)
	bool RemoveStack(FEssenceStack Stack, int32 StackIndex, bool bIsPurging=false);


	UFUNCTION(BlueprintCallable)
	void EssentialTick(float DeltaTime);

	UFUNCTION(BlueprintCallable)
	int32 PurgeStack(FEssenceStack Stack, int32 StackIndex);




#pragma region Fields
	
	/**
	* Certain elemental reactions spawn AOE regions charged with an element. The actual logic
	* takes place in those actors, but this is what we need to create them.
	*/

	UFUNCTION(BlueprintCallable)
	void SpawnField(FEssenceStack Stack, float FieldLifespan);


	UPROPERTY(EditDefaultsOnly, Category="Physics")
	TSubclassOf<class AEssentialField_Base> FieldClass;


#pragma endregion



#pragma region Display

	/**
	* There are a few different ways we can broadcast information about the current charge state.
	* I currently support widget "tags" attached to the main actor, a color-coded material, and
	* printing to the editor screen.
	* 
	*/

	UFUNCTION(BlueprintCallable)
	void EditorDisplayEssentia(FEssenceStack DisplayStack);

	UFUNCTION(BlueprintCallable)
	void DisplayAdd(FEssenceStack Stack);
	UFUNCTION(BlueprintCallable)
	void DisplayRemove(int32 StackIndex);

	// Used so the display is only initialized once the components have finished BeginPlay()
	UPROPERTY()
	FTimerHandle DisplayInitTimerHandle;

	UFUNCTION(BlueprintCallable)
	void InitializeDisplayWidget();


	UPROPERTY(EditDefaultsOnly, Category="Display")
	bool bHasDisplayWidget;
	UPROPERTY()
	TObjectPtr<UEssenceTagBarComponent_Base> EssenceDisplayWidget = nullptr;

	UFUNCTION(BlueprintCallable)
	void TagAdd(FEssenceStack Stack);
	UFUNCTION(BlueprintCallable)
	void TagRemove(int32 StackIndex);


	UPROPERTY(EditDefaultsOnly, Category="Display")
	bool bHasDisplayMaterial;

	UPROPERTY()
	TObjectPtr<UMaterialInstanceDynamic> DisplayMaterial;

	UFUNCTION(BlueprintCallable)
	void MaterialAdd(FEssenceStack Stack);
	UFUNCTION(BlueprintCallable)
	void MaterialRemove(int32 StackIndex);


#pragma endregion


protected:
	virtual void BeginPlay() override;

	/**
	* A cascade is a special process that removes all stacks of a given element and performs a 
	* process with that energy. Currently this can only happen as part of specific purge effects.
	*/
	UFUNCTION()
	TMap<int32, FCascadeParams> CheckCascade(int32 ElemID);

	UFUNCTION()
	void FinishCascade(FCascadeParams CascadeParams);


	/**
	* Possible purge effects are granular enough that the code is very messy if we try to do
	* everything in one function. Instead, the main purge function calls one of these based on input
	*/
	UFUNCTION()
	int32 PurgeAir(FEssenceStack Stack, int32 Bookmark);
	UFUNCTION()
	int32 PurgeLightning(FEssenceStack Stack, int32 Bookmark);
	UFUNCTION()
	int32 PurgeStars(FEssenceStack Stack, int32 Bookmark);
	UFUNCTION()
	int32 PurgeWater(FEssenceStack Stack, int32 Bookmark);
	UFUNCTION()
	int32 PurgeEarth(FEssenceStack Stack, int32 Bookmark);
	UFUNCTION()
	int32 PurgeMetal(FEssenceStack Stack, int32 Bookmark);
	UFUNCTION()
	int32 PurgeWood(FEssenceStack Stack, int32 Bookmark);
	UFUNCTION()
	int32 PurgeFire(FEssenceStack Stack, int32 Bookmark);


	/**
	* Destructor function for when essential circumstances require destroying the actor
	*/
	UFUNCTION()
	void DestroyEphemeral();

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
		FActorComponentTickFunction* ThisTickFunction) override;




	

};
