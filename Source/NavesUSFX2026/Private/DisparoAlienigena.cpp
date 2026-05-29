// Fill out your copyright notice in the Description page of Project Settings.

#include "DisparoAlienigena.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ADisparoAlienigena::ADisparoAlienigena()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshDisparo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshDisparoAlienigena"));
	RootComponent = MeshDisparo;

	// Usa la esfera del StarterContent como visual del disparo
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaDisparo(
		TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'")
	);
	if (MallaDisparo.Succeeded())
	{
		MeshDisparo->SetStaticMesh(MallaDisparo.Object);
		// Escala pequena para que parezca un proyectil
		MeshDisparo->SetWorldScale3D(FVector(0.2f));
	}

	// El disparo desaparece solo a los 3 segundos
	InitialLifeSpan = 3.0f;
}

void ADisparoAlienigena::BeginPlay()
{
	Super::BeginPlay();
}

void ADisparoAlienigena::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Movimiento simple hacia adelante (en la direccion de su rotacion)
	FVector Direccion = GetActorForwardVector();
	FVector NuevaPosicion = GetActorLocation() + (Direccion * 600.0f * DeltaTime);
	SetActorLocation(NuevaPosicion);
}

// --- Implementacion de la interfaz IDisparoEnemigo ---

void ADisparoAlienigena::Lanzar(FVector Posicion, FRotator Rotacion)
{
	SetActorLocation(Posicion);
	SetActorRotation(Rotacion);

	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Green,
		FString::Printf(TEXT("Disparo Alienigena lanzado! Dano: %.0f"), Dano));
}

float ADisparoAlienigena::ObtenerDano()
{
	return Dano;
}

FString ADisparoAlienigena::ObtenerTipo()
{
	return TEXT("Disparo Alienigena (plasma verde)");
}