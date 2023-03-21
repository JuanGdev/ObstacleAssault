// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class OBSTACLEASSAULT_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	FVector MyVector = FVector(1360.0, 8769.0, -1696.0);

	UPROPERTY(EditAnywhere)
	float MyX;

	UPROPERTY(EditAnywhere)
	float variblex=10;

	UPROPERTY(EditAnywhere)
	float varibley=10;
	
	UPROPERTY(EditAnywhere)
	float variblez=10;
};
