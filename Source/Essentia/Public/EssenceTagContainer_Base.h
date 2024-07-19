// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EssentiaWidget_Base.h"
#include "EssenceTagContainer_Base.generated.h"


// Fwd defs
class UHorizontalBox;
struct FEssenceStack;
class UEssenceTag_Base;

/**
 * 
 */
UCLASS(Abstract)
class ESSENTIA_API UEssenceTagContainer_Base : public UEssentiaWidget_Base
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category="Constituent Controls", meta = (BindWidget))
	TObjectPtr<UHorizontalBox> TagContainer;

	// Logic for adding and removing tags happens here
	// It's called from the essential component through the reference stored in their owner

	UFUNCTION(BlueprintCallable)
	void AddEssenceTag(FEssenceStack Stack, TSubclassOf<UEssenceTag_Base> NewTagClass);

	UFUNCTION(BlueprintCallable)
	void RemoveEssenceTag(int32 Index);

	UPROPERTY(EditAnywhere)
	TArray<UUserWidget*> TagArray;


};
