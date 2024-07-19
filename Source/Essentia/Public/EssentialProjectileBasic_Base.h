// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EssentialParticle_Base.h"
#include "EssentialProjectileBasic_Base.generated.h"


// Making this its own class in case we want any more logic later

// Fwd defs
//class UProjectileMovementComponent;


/**
 * 
 */
UCLASS()
class ESSENTIA_API AEssentialProjectileBasic_Base : public AEssentialParticle_Base
{
	GENERATED_BODY()

	AEssentialProjectileBasic_Base();
	
public:
	
	//UPROPERTY(EditDefaultsOnly, Category="Physicals")
	//TObjectPtr<UProjectileMovementComponent> ProjectileMovementComponent;

};
