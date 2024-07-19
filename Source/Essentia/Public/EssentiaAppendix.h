// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EssentiaAppendix.generated.h"

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


// This is the basic unit of Essential charge
USTRUCT(BlueprintType, Blueprintable)
struct FEssenceStack {
	GENERATED_USTRUCT_BODY()


	// Variable defs
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ElemID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsStable;
	
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
