// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoAlienigena.h"
#include "DisparoAlienigena.h"  //factory
// Sets default values
AEnemigoAlienigena::AEnemigoAlienigena()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemigoAlienigena::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemigoAlienigena::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
// =====================================================
// FACTORY METHOD — aqui esta la magia
// Esta subclase decide QUE tipo de disparo spawnear.
// Enemigo.cpp llama CrearDisparo() sin saber este tipo.
// =====================================================
    AActor* AEnemigoAlienigena::CrearDisparo()
    {
        UWorld* World = GetWorld();
        if (!World) return nullptr;

        ADisparoAlienigena* Disparo = World->SpawnActor<ADisparoAlienigena>(
            ADisparoAlienigena::StaticClass(),
            GetActorLocation(),
            GetActorRotation()
        );
        return Disparo;
    }