// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DisparoEnemigo.h"
#include "DisparoAlienigena.generated.h"

/**
 * ADisparoAlienigena — Producto Concreto del Factory Method
 *
 * Es el disparo especifico que crea AEnemigoAlienigena.
 * Implementa IDisparoEnemigo con su propio comportamiento.
 */
UCLASS()
class NAVESUSFX2026_API ADisparoAlienigena : public AActor, public IDisparoEnemigo
{
	GENERATED_BODY()

public:
	ADisparoAlienigena();

	// --- Implementacion de IDisparoEnemigo ---
	virtual void Lanzar(FVector Posicion, FRotator Rotacion) override;
	virtual float ObtenerDano() override;
	virtual FString ObtenerTipo() override;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	// Dano especifico del disparo alienigena
	float Dano = 25.0f;

	UPROPERTY()
	UStaticMeshComponent* MeshDisparo;
};