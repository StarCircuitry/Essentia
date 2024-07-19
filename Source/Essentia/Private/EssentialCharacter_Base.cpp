// Fill out your copyright notice in the Description page of Project Settings.


#include "EssentialCharacter_Base.h"
#include "EssenceTagBarComponent_Base.h"

// Sets default values
AEssentialCharacter_Base::AEssentialCharacter_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EssentialComponent = CreateDefaultSubobject<UEssentialComponent>(TEXT("Essential Component"));

	TagWidget = CreateDefaultSubobject<UEssenceTagBarComponent_Base>(TEXT("Tag Display Widget"));
	TagWidget->SetupAttachment(RootComponent);
	TagWidget->SetTwoSided(true);


	EssentialComponent ->EssenceDisplayWidget = TagWidget;
}

// Called when the game starts or when spawned
void AEssentialCharacter_Base::BeginPlay()
{
	Super::BeginPlay();

	EssentialComponent->bHasDisplayWidget = bHasDisplayWidget;

}

// Called every frame
void AEssentialCharacter_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEssentialCharacter_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

