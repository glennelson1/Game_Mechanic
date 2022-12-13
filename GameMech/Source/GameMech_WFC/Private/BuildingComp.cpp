// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingComp.h"

// Sets default values for this component's properties
UBuildingComp::UBuildingComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UBuildingComp::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBuildingComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UBuildingComp::setupplayerInput()
{
	
}



void UBuildingComp::UpdatePlacement()
{
	FVector Loc;
	FRotator Rot;
	FHitResult Hit;

	

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * 4000);

	FCollisionQueryParams TracePrams;
	
	FVector HitLocation = FVector::ZeroVector;
}

void UBuildingComp::SetplacementEnabled()
{
}

void UBuildingComp::SpawnBuilding()
{
}

