// Fill out your copyright notice in the Description page of Project Settings.


#include "EssenceTagContainer_Base.h"
#include "Components/HorizontalBox.h"
#include "EssentiaLogging.h"
#include "EssentiaAppendix.h"
#include "EssenceTag_Base.h"


void UEssenceTagContainer_Base::AddEssenceTag(FEssenceStack Stack,
	TSubclassOf<UEssenceTag_Base> NewTagClass) {

	UUserWidget* NewTag = CreateWidget(TagContainer, NewTagClass);

	checkf(NewTag, TEXT("New Widget not found"));

	if (NewTag) {
		TagContainer->AddChildToHorizontalBox(NewTag);

		TagArray.Add(NewTag);
	}
}


void UEssenceTagContainer_Base::RemoveEssenceTag(int32 Index) {

	TagArray[Index]->RemoveFromParent();

	TagArray.RemoveAt(Index);
}
