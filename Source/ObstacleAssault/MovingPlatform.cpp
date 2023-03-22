// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//	Move the platform forwards
	//	Get Current Location
	FVector CurrentLocation = GetActorLocation();
	//	Add to the Vector Location the distance we want to move the object
	CurrentLocation += PlatformVel * DeltaTime;
	//	Set a new location for the object
	SetActorLocation(CurrentLocation);

//	Move backwards the object
	//	Check the difference betwen initial and final distance
	float distanceMoved = FVector::Dist(StartLocation, CurrentLocation);
	//	Move the object on inverse direction
	if(distanceMoved > MoveDistance)
	{
		PlatformVel = -PlatformVel;
		StartLocation = CurrentLocation;
	}
}



