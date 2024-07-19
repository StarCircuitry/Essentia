// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
/*
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EssentiaAppendix.h"
#include "EssentiaLibrary.generated.h"




*
 * 
 
UCLASS()
class ESSENTIA_API UEssentiaLibrary : public UBlueprintFunctionLibrary 
{
	GENERATED_BODY()

public:
	// Attach this to tick for any essential object
	UFUNCTION(BlueprintCallable)
	static void essential_tick(float delta_time, UPARAM(ref) FEssentialComponent_ST& component);


	// Tag functions are weird, so for now, we just need this printout of the essence info

	UFUNCTION(BlueprintCallable)
	static void display_essentia(FEssenceStack loop_stack);



	// First thing we'll need is to get the essential component from objects of arbitrary classes
	UFUNCTION(BlueprintCallable)
	static /*FEssentialComponent  void cast_to_essentia(AActor* object);



	// Physics functions
	// Add and remove stacks
	UFUNCTION(BlueprintCallable)
	static void stack_add(UPARAM(ref) FEssentialComponent_ST& component, FEssenceStack new_stack);

	// Returns whether stack was removed
	UFUNCTION(BlueprintCallable)
	static bool stack_remove(UPARAM(ref) FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);

	// Transfer charge from one essential component (carrier) to another (receiver)
	UFUNCTION(BlueprintCallable)
	static void force_transfer(FEssentialComponent_ST& carrier_component, FEssentialComponent_ST& receiver_component,
		FEssenceStack stack, int32 stack_index);


	// Purge functions
	// This one is the only one we'll call from outside
	UFUNCTION(BlueprintCallable)
	static void stack_purge(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);

	// These should only be called by purge_stack()
	// They return a stack index so we can move the other stacks down the list
	static int32 purge_air(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	static int32 purge_lightning(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	static int32 purge_stars(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	static int32 purge_water(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	static int32 purge_earth(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	static int32 purge_metal(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	static int32 purge_wood(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	static int32 purge_fire(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);



	// This function will trigger purges on one or more additional stacks of a specific element
	// Not sure if I need to take an index input or no
	static int32 catalyze_element(FEssentialComponent_ST& component, int32 element_id, int32 stack_index,
		int32 cat_count, bool is_total);


	// Tag functions
	// Add and remove tags

	// Requires an array of tag classes in BP maybe?????
	UFUNCTION(BlueprintCallable)
	static void tag_spawn(FEssentialComponent_ST& component, FEssenceStack stack, int32 stack_index);
	UFUNCTION(BlueprintCallable)
	static void tag_remove(FEssentialComponent_ST& component, int32 stack_index);

	// Get the right type of tag from an array
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FName get_tagtype(int32 element);



	// Field functions could go below??

	UFUNCTION(BlueprintCallable)
	static void field_spawn(FEssenceStack stack, double Lifespan);

	// Fwd def of field class
	class AEssentialField_Base;


	// Grab a basic stack of a given element
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FEssenceStack get_basicstack(int32 element_id, bool stable = false);

};
*/