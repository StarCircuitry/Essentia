// Fill out your copyright notice in the Description page of Project Settings.


#include "EssentialActor_Base.h"
#include "EssentialComponent.h"
#include "EssenceTagContainer_Base.h"
#include "Components/WidgetComponent.h"
#include "EssentiaLogging.h"
#include "EssenceTagBarComponent_Base.h"

// Sets default values
AEssentialActor_Base::AEssentialActor_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EssentialComponent = CreateDefaultSubobject<UEssentialComponent>(TEXT("Essential Component"));

	TagWidget = CreateDefaultSubobject<UEssenceTagBarComponent_Base>(TEXT("Tag Display Widget"));
	TagWidget->SetupAttachment(RootComponent);
	TagWidget->SetTwoSided(true);


	EssentialComponent->EssenceDisplayWidget = TagWidget;

}

// Called when the game starts or when spawned
void AEssentialActor_Base::BeginPlay()
{
	Super::BeginPlay();

	EssentialComponent->bHasDisplayWidget = bHasDisplayWidget;


}

// Called every frame
void AEssentialActor_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}