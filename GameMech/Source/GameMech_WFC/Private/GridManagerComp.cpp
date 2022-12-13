// Fill out your copyright notice in the Description page of Project Settings.


#include "GridManagerComp.h"

// Sets default values for this component's properties
UGridManagerComp::UGridManagerComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGridManagerComp::BeginPlay()
{
	Super::BeginPlay();

	
	
}


// Called every frame
void UGridManagerComp::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}




void UGridManagerComp::PopulateGrid_Implementation()
{
	float GridXworld = m_GridSize * m_WorldSize;
	float MulWorld = m_WorldSize * 0.5;

	float sub = m_GridSize - 1;
	offset = GridXworld - MulWorld;

	
}









