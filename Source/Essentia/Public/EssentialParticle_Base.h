// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EssentialActor_Base.h"
#include "EssentialParticle_Base.generated.h"

// Fwd defs
class UStaticMeshComponent;

/**
 * 
 */
UCLASS()
class ESSENTIA_API AEssentialParticle_Base : public AEssentialActor_Base
{
	GENERATED_BODY()
	
public:

	AEssentialParticle_Base();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category="Physicals")
	TObjectPtr<UStaticMeshComponent> ParticleBody;

	virtual void BeginPlay() override;

	UFUNCTION()
	void OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
		UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);


	UPROPERTY(EditDefaultsOnly, Category="Essentia|UI")
	bool bHasDisplayMaterial;

	UPROPERTY(EditDefaultsOnly, Category="Essentia|UI")
	TObjectPtr<UMaterial> EssentiaDisplayMaterialBase;

	UPROPERTY()
	UMaterialInstanceDynamic* EssentiaDisplayMaterial;

};
