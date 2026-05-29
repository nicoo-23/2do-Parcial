// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoFantasma.h"
#include "DisparoFantasma.h"
// Sets default values
AEnemigoFantasma::AEnemigoFantasma()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigoFantasma::BeginPlay()
{
	Super::BeginPlay();
	Disparar(); // Dispara al aparecer
}

// Called every frame
void AEnemigoFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// para factory
AActor* AEnemigoFantasma::CrearDisparo()
{
	UWorld* World = GetWorld();
	if (!World) return nullptr;

	ADisparoFantasma* Disparo = World->SpawnActor<ADisparoFantasma>(
		ADisparoFantasma::StaticClass(),
		GetActorLocation(),
		GetActorRotation()
	);

	return Disparo;
}