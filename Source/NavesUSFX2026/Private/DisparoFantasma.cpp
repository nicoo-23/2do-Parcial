// Fill out your copyright notice in the Description page of Project Settings.

#include "DisparoFantasma.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"

ADisparoFantasma::ADisparoFantasma()
{
	PrimaryActorTick.bCanEverTick = true;

	MeshDisparo = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshDisparoFantasma"));
	RootComponent = MeshDisparo;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MallaDisparo(
		TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'")
	);
	if (MallaDisparo.Succeeded())
	{
		MeshDisparo->SetStaticMesh(MallaDisparo.Object);
		MeshDisparo->SetWorldScale3D(FVector(0.15f));
	}

	InitialLifeSpan = 2.0f;
}

void ADisparoFantasma::BeginPlay()
{
	Super::BeginPlay();
}

void ADisparoFantasma::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// El fantasma dispara mas rapido
	FVector Direccion = GetActorForwardVector();
	SetActorLocation(GetActorLocation() + (Direccion * 900.0f * DeltaTime));
}

void ADisparoFantasma::Lanzar(FVector Posicion, FRotator Rotacion)
{
	SetActorLocation(Posicion);
	SetActorRotation(Rotacion);

	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::White,
		FString::Printf(TEXT("Disparo Fantasma lanzado! Dano: %.0f"), Dano));
}

float ADisparoFantasma::ObtenerDano() { return Dano; }

FString ADisparoFantasma::ObtenerTipo() { return TEXT("Disparo Fantasma"); }