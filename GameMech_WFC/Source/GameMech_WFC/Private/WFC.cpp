// Fill out your copyright notice in the Description page of Project Settings.


#include "WFC.h"

// Sets default values for this component's properties
UWFC::UWFC()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void UWFC::SetTile_Implementation()
{
}

void UWFC::CheckNeibourTile_Implementation()
{
}




// Called when the game starts
void UWFC::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UWFC::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

