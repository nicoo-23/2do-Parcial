// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"                    // ← hereda del Creator abstracto
#include "EnemigoAlienigena.generated.h"

UCLASS()
class NAVESUSFX2026_API AEnemigoAlienigena : public AEnemigo
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoAlienigena();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// =====================================================
	// FACTORY METHOD — sobreescritura del creador concreto
	// Este enemigo decide crear un ADisparoAlienigena
	// =====================================================
	virtual AActor* CrearDisparo() override;
};
