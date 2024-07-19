// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EssentiaAppendix.h"
#include "EssentialActor_Base.generated.h"

// Fwd defs
class UEssentialComponent;
class UEssenceTagContainer_Base;
class UWidgetComponent;
class UEssenceTagBarComponent_Base;



UCLASS(Abstract)
class ESSENTIA_API AEssentialActor_Base : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEssentialActor_Base();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Reference to the essential component
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Essentia")
	TObjectPtr<UEssentialComponent> EssentialComponent = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = "Essentia|UI")
	bool bHasDisplayWidget;

	// Reference to the WidgetComponent that will hold all our tag stuff
	UPROPERTY(EditDefaultsOnly, Category = "Essentia|UI")
	TObjectPtr<UEssenceTagBarComponent_Base> TagWidget;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	// World reference
	UPROPERTY()
	TObjectPtr<UWorld> World = nullptr;

};
