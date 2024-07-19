// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "EssenceTagBarComponent_Base.generated.h"



// Fwd defs
class UEssenceTagContainer_Base;
struct FEssenceStack;
class UEssenceTag_Base;

/**
 * 
 */
UCLASS()
class ESSENTIA_API UEssenceTagBarComponent_Base : public UWidgetComponent
{
	GENERATED_BODY()
	
	
	UEssenceTagBarComponent_Base();


public:
	UPROPERTY(EditAnywhere, Category = "Constituent Controls")
	TSubclassOf<UEssenceTagContainer_Base> TagContainerClass = nullptr;

	virtual void BeginPlay() override;



	UPROPERTY(BlueprintReadOnly, Category = "Constituent Controls")
	TObjectPtr<UEssenceTagContainer_Base> MainWidget = nullptr;


	UFUNCTION(BlueprintCallable)
	void AddEssenceTag(FEssenceStack Stack);

	UFUNCTION(BlueprintCallable)
	void RemoveEssenceTag(int32 Index);

	
	UPROPERTY(EditDefaultsOnly, Category = "Constituent Controls")
	TArray< TSubclassOf<UEssenceTag_Base> > TagClassArray;
};
