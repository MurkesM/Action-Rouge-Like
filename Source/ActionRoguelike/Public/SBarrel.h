// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SBarrel.generated.h"


class UStaticMeshComponent;
class URadialForceComponent;


UCLASS()
class ACTIONROGUELIKE_API ASBarrel : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	ASBarrel();

protected:

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MeshComponent;

	UPROPERTY(VisibleAnywhere)
	URadialForceComponent* RadialForceComponent;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
