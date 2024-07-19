// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EssentiaAppendix.h"
#include "EssentialField_Base.generated.h"


// Fwd defs
class UNiagaraComponent;
class UEssentialComponent;
class UNiagaraSystem;
class USphereComponent;


UCLASS()
class ESSENTIA_API AEssentialField_Base : public AActor
{
	GENERATED_BODY()
	

public:	
	// Sets default values for this actor's properties
	AEssentialField_Base();


	UPROPERTY(EditDefaultsOnly, Category="Effects")
	TObjectPtr<UNiagaraComponent> FieldFX;

	UFUNCTION(BlueprintCallable)
	void InitializeField(FEssenceStack FieldCharge, float FieldLifespan);

	UPROPERTY(EditDefaultsOnly, Category="Essentia")
	TObjectPtr<UEssentialComponent> EssentialComponent;



	UPROPERTY(EditDefaultsOnly, Category="Field Controls")
	float Lifespan = 0.f;


	UFUNCTION(BlueprintCallable)
	void DestroyField();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	UNiagaraSystem* GetFieldType(int32 ElemID);


	UPROPERTY(EditDefaultsOnly, Category="Field Controls")
	TObjectPtr<USphereComponent> FieldCollider;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
