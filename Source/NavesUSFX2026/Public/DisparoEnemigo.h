// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DisparoEnemigo.generated.h"

// Esta clase no se modifica (requerida por Unreal para interfaces)
UINTERFACE(MinimalAPI)
class UDisparoEnemigo : public UInterface
{
	GENERATED_BODY()
};

/**
 * IDisparoEnemigo — Producto Abstracto del Factory Method
 *
 * Define el contrato que todo disparo de enemigo debe cumplir.
 * Cada enemigo concreto creara su propio tipo de disparo que
 * implemente esta interfaz.
 */
class NAVESUSFX2026_API IDisparoEnemigo
{
	GENERATED_BODY()

public:
	// Lanza el disparo desde una posicion y rotacion dadas
	virtual void Lanzar(FVector Posicion, FRotator Rotacion) = 0;

	// Retorna el dano que causa este disparo
	virtual float ObtenerDano() = 0;

	// Retorna el nombre/tipo del disparo (para debug y examen)
	virtual FString ObtenerTipo() = 0;
};