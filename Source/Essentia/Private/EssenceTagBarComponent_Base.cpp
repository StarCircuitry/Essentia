// Fill out your copyright notice in the Description page of Project Settings.


#include "EssenceTagBarComponent_Base.h"
#include "EssenceTagContainer_Base.h"
#include "EssentiaAppendix.h"
#include "EssenceTag_Base.h"


UEssenceTagBarComponent_Base::UEssenceTagBarComponent_Base() {



}


void UEssenceTagBarComponent_Base::BeginPlay() {

	Super::BeginPlay();


	SetWidgetClass(TagContainerClass);

	MainWidget = Cast<UEssenceTagContainer_Base>(GetWidget());
}


void UEssenceTagBarComponent_Base::AddEssenceTag(FEssenceStack Stack) {

	int32 Elem = Stack.ElemID;

	TSubclassOf<UEssenceTag_Base> NewTagClass = TagClassArray[Elem];

	MainWidget->AddEssenceTag(Stack, NewTagClass);
	
}


void UEssenceTagBarComponent_Base::RemoveEssenceTag(int32 Index) {
	
	MainWidget->RemoveEssenceTag(Index);

}
