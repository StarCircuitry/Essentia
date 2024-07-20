// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EssentiaAppendix.generated.h"


/**
* This file contains the necessary datastructures that underpin the Essentia system:
* 
* 1. FEssenceStack is the structure of a single unit of elemental charge. We track the element ID,
* the stability and reactivity of the charge, and purge parameters.
* 
* 2. FCascadeParams contains everything we have to track for a cascade reaction to determine output.
* 
* 3. EssentialColors is a hard-coded array of FColors I associate with each element. These are just
* for testing right now, and the exact colors may change as I build out the design language. A final
* implementation would have a more robust way to access them.
* 
* 
* I've preprocessed some ID constants below, just in case I change something serious later.
*/


#define NUM_ELEMENTS 8
#define AIR 0
#define LIGHTNING 1
#define STARS 2
#define WATER 3
#define EARTH 4
#define METAL 5
#define WOOD 6
#define FIRE 7


// Fwd defs
class UEssentialComponent;


USTRUCT(BlueprintType, Blueprintable)
struct FEssenceStack {
	GENERATED_USTRUCT_BODY()


	// Variable defs
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ElemID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsStable;
	
	// If a stack is perpetual, it can't be removed by any means.
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsPerpetual;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 PurgeDamage;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float PurgeTimer;


	// Constructors
	FEssenceStack() {
		ElemID = 0;
		bIsStable = false;
		bIsPerpetual = false;
		PurgeDamage = 0;
		PurgeTimer = 0.f;

	}

	FEssenceStack(int32 elem_id, bool bis_stable, bool bis_perpetual,
				 int32 purge_damage, float purge_timer) {
		
		ElemID = elem_id;
		bIsStable = bis_stable;
		bIsPerpetual = bis_perpetual;
		PurgeDamage = purge_damage;
		PurgeTimer = purge_timer;

	}

};

USTRUCT(BlueprintType, Blueprintable)
struct FCascadeParams {
	GENERATED_USTRUCT_BODY()
	

	// Element that is being catalyzed
	UPROPERTY(BlueprintReadOnly)
	int32 SubjectElemID;

	// Element that triggered the cata reaction
	UPROPERTY(BlueprintReadOnly)
	int32 TriggerElemID;


	// Number of stacks removed
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 NumCatalyzed;
	
	// Result of the catalysis is determined based on both the trigger and the subject


	FCascadeParams() {

		SubjectElemID = -1;

		TriggerElemID = -1;

		NumCatalyzed = 0;

	}

	FCascadeParams(int32 SubjectElem) {

		SubjectElemID = SubjectElem;

		TriggerElemID = -1;

		NumCatalyzed = 0;
	}



};


const TMap<int32, FColor> EssentialColors = {
	{AIR, FColor::FromHex("C8F9FF")},
	{LIGHTNING, FColor::FromHex("9C00F6")},
	{STARS, FColor::FromHex("000022")},
	{WATER, FColor::FromHex("0000FF")},
	{EARTH, FColor::FromHex("827556")},
	{METAL, FColor::FromHex("73858FFF")},
	{WOOD, FColor::FromHex("00FF00")},
	{FIRE, FColor::FromHex("FF0000")}
};
