// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EssentiaWidget_Base.generated.h"

/**
 * 
 */
UCLASS()
class ESSENTIA_API UEssentiaWidget_Base : public UUserWidget
{
	GENERATED_BODY()
	
public:
#if WITH_EDITOR

	virtual const FText GetPaletteCategory() override;

#endif
};
