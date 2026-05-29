// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo.h"
#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

// Sets default values
AEnemigo::AEnemigo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaEnemigoNave(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid'"));
	// Create the mesh component
	mallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));
	RootComponent = mallaEnemigo;
	mallaEnemigo->SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	//	RootComponent = EsqueletoNave.Object;
	mallaEnemigo->SetStaticMesh(MallaEnemigoNave.Object);
}

// Called when the game starts or when spawned
void AEnemigo::BeginPlay()
{
	Super::BeginPlay();

	mallaEnemigo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MallaEnemigo"));

}

// Called every frame
void AEnemigo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}





// =====================================================
// FACTORY METHOD — implementacion base
// =====================================================
// Este metodo usa el Factory Method internamente.
// El GameMode o el nivel solo llaman Disparar()
// sin preocuparse del tipo concreto de disparo.
void AEnemigo::Disparar()
{
    // Llama al Factory Method — polimorfismo en accion
    AActor* NuevoDisparo = CrearDisparo();

    if (NuevoDisparo != nullptr)
    {
        // Cast de AActor* a IDisparoEnemigo* para usar sus metodos
        IDisparoEnemigo* DisparoInterface = Cast<IDisparoEnemigo>(NuevoDisparo);

        if (DisparoInterface)
        {
            // Lanza el disparo desde la posicion del enemigo
            FVector PosicionDisparo = GetActorLocation() + GetActorForwardVector() * 100.0f;
            DisparoInterface->Lanzar(PosicionDisparo, GetActorRotation());

            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow,
                FString::Printf(TEXT("Enemigo disparo: %s"),
                    *DisparoInterface->ObtenerTipo()));
        }
    }
}

