// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EssentiaWidget_Base.h"
#include "EssenceTag_Base.generated.h"

class UImage;

/**
 * 
 */
UCLASS()
class ESSENTIA_API UEssenceTag_Base : public UEssentiaWidget_Base
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, Category="Constituent Controls", meta = (BindWidget))
	TObjectPtr<UImage> TagImage = nullptr;


};
