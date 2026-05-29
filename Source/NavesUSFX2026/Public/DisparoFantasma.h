// Fill out your copyright notice in the Description page of Project Settings.
// DisparoFantasma.h — Producto Concreto 2

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DisparoEnemigo.h"
#include "DisparoFantasma.generated.h"

UCLASS()
class NAVESUSFX2026_API ADisparoFantasma : public AActor, public IDisparoEnemigo
{
	GENERATED_BODY()

public:
	ADisparoFantasma();

	virtual void Lanzar(FVector Posicion, FRotator Rotacion) override;
	virtual float ObtenerDano() override;
	virtual FString ObtenerTipo() override;

protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

private:
	float Dano = 15.0f; // Menos dano pero mas rapido

	UPROPERTY()
	UStaticMeshComponent* MeshDisparo;
};