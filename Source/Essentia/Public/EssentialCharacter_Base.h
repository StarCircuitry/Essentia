// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EssentialComponent.h"
#include "EssentialCharacter_Base.generated.h"

UCLASS()
class ESSENTIA_API AEssentialCharacter_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEssentialCharacter_Base();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Essentia")
	TObjectPtr<UEssentialComponent> EssentialComponent;


	UPROPERTY(EditDefaultsOnly, Category = "Essentia|UI")
	bool bHasDisplayWidget;

	// Reference to the WidgetComponent that will hold all our tag stuff
	UPROPERTY(EditDefaultsOnly, Category = "Essentia|UI")
	TObjectPtr<UEssenceTagBarComponent_Base> TagWidget;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private:
	// World reference
	UPROPERTY()
	TObjectPtr<UWorld> World = nullptr;

};
