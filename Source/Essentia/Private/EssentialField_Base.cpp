// Fill out your copyright notice in the Description page of Project Settings.


#include "EssentialField_Base.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Components/SphereComponent.h"
#include "EssentialComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Logging/LogMacros.h"

// Sets default values
AEssentialField_Base::AEssentialField_Base()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	FieldFX = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Effects"));
	SetRootComponent(FieldFX);

	FieldCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Collision Sphere"));
	FieldCollider->SetupAttachment(FieldFX);

	EssentialComponent = CreateDefaultSubobject<UEssentialComponent>(TEXT("Essential Component"));

}

// Called when the game starts or when spawned
void AEssentialField_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEssentialField_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Lifespan -= DeltaTime;

	//UE_LOG(LogTemp, Warning, TEXT("Lifespan decremented"));

	if (Lifespan <= 0)
	{
		DestroyField();
	}

}

void AEssentialField_Base::InitializeField(FEssenceStack FieldCharge, float FieldLifespan)
{
	if (FieldCharge.bIsStable)
	{
		FieldCharge.bIsStable = false;
	}
	if (!FieldCharge.bIsPerpetual)
	{
		FieldCharge.bIsPerpetual = true;
	}

	Lifespan = FieldLifespan;

	EssentialComponent->AddStack(FieldCharge);

	FieldFX->SetAsset(GetFieldType(FieldCharge.ElemID));
	
}





// Assign all the info we need to the actor to be the right type of field
UNiagaraSystem* AEssentialField_Base::GetFieldType(int32 ElemID) {
	const TArray<FString> FieldPaths = {
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_AirFieldFX.NS_AirFieldFX'"),
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_LightningFieldFX.NS_LightningFieldFX'"),
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_StarsFieldFX.NS_StarsFieldFX'"),
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_WaterFieldFX.NS_WaterFieldFX'"),
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_EarthFieldFX.NS_EarthFieldFX'"),
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_MetalFieldFX.NS_MetalFieldFX'"),
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_WoodFieldFX.NS_WoodFieldFX'"),
		TEXT("/Script/Niagara.NiagaraSystem'/Essentia/Fields/NS_FireFieldFX.NS_FireFieldFX'")

	};

	const TCHAR* FieldPath = *FieldPaths[ElemID];
	

	UNiagaraSystem* FieldType = LoadObject<UNiagaraSystem>(NULL, FieldPath, 
		NULL, LOAD_None, NULL);

	if (FieldType == NULL) {
		UE_LOG(LogTemp, Warning, TEXT("WARNING: Field type NULL"));
	}

	return FieldType;
}


void AEssentialField_Base::DestroyField() {
	Destroy();
}