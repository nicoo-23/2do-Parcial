// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DisparoEnemigo.h"        // <-- incluimos la interfaz del producto
#include "Enemigo.generated.h"

class UStaticMeshComponent;;

UCLASS()
class NAVESUSFX2026_API AEnemigo : public AActor
{
	GENERATED_BODY()
private:
	float nivelEnergia = 100;
	float nivelAtaque = 10;
	float nivelDefensa = 5;
	float nivelHabilidad = 5;
	FVector posicion;

	float velocidadMovimiento = 200.0f; // Velocidad de movimiento del enemigo

public:	
	// Sets default values for this actor's properties
	AEnemigo();

	UStaticMeshComponent* mallaEnemigo;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;



	// =====================================================
	// FACTORY METHOD — el corazon del patron
	// =====================================================
	// Cada subclase de enemigo sobreescribe este metodo
	// y decide QUE tipo de disparo crear.
	// La clase base (AEnemigo) no sabe que tipo exacto es.
	// =====================================================
	virtual AActor* CrearDisparo() { return nullptr; }
	// Metodo que USA el factory method internamente.
	// El cliente llama Disparar() y no sabe nada del tipo concreto.
	void Disparar();
};
