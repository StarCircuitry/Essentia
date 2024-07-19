// Fill out your copyright notice in the Description page of Project Settings.


#include "EssentialParticle_Base.h"
#include "Components/StaticMeshComponent.h"
#include "EssenceTagBarComponent_Base.h"
#include "EssentialComponent.h"
#include "EssentiaLogging.h"


AEssentialParticle_Base::AEssentialParticle_Base() {

	ParticleBody = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Particle Body"));
	RootComponent = ParticleBody;

	ParticleBody->SetNotifyRigidBodyCollision(true);
	ParticleBody->SetSimulatePhysics(true);

	
	TagWidget->SetupAttachment(RootComponent);

}


void AEssentialParticle_Base::BeginPlay() {
	Super::BeginPlay();

	ParticleBody->OnComponentHit.AddDynamic(this, &AEssentialParticle_Base::OnComponentHit);

	EssentialComponent->bHasDisplayMaterial = bHasDisplayMaterial;

	if (bHasDisplayMaterial && EssentiaDisplayMaterialBase) {

		UE_LOG(EssentiaLog, Warning, TEXT("Essentia Display Material pings valid."));

		EssentiaDisplayMaterial = UMaterialInstanceDynamic::Create(EssentiaDisplayMaterialBase,
			this);

		ParticleBody->SetMaterial(0, EssentiaDisplayMaterial);

		EssentialComponent->DisplayMaterial = EssentiaDisplayMaterial;

	}


}


void AEssentialParticle_Base::OnComponentHit(UPrimitiveComponent* HitComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {


	if (EssentialComponent->bIsForceCarrier) {
		UEssentialComponent* OtherEssentialComp = OtherActor->GetComponentByClass<
			UEssentialComponent>();

		if (OtherEssentialComp) {


			if (OtherEssentialComp->bIsForceReceiver) {


				for (int i = EssentialComponent->EssentialCharge.Num(); i --> 0;)
				{
					
					if (OtherEssentialComp->AddStack(EssentialComponent->EssentialCharge[i]))
					{
						EssentialComponent->RemoveStack(EssentialComponent->EssentialCharge[i], i);
					}
				}

			}

		}
	}

}