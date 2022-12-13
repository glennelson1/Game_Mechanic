// Fill out your copyright notice in the Description page of Project Settings.


#include "GridManager.h"

#include <algorithm>

// Sets default values
AGridManager::AGridManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGridManager::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGridManager::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AGridManager::PopulateGrid_Implementation()
{
	GridArray.Empty();
	
	for(int x = 0; x <= (m_GridSize - 1); x++)
	{
		for(int y = 0; y <= (m_GridSize - 1); y++)
		{
			int LocX = (x * m_WorldSize) - offset;
			int LocY = (y * m_WorldSize) - offset;

			FVector SpawnLoc(LocX, LocY, 0);
			FRotator rot(0, 0 , 0);
			FActorSpawnParameters SpawnInfo;


			AGridActor* Spawn = GetWorld()->SpawnActor<AGridActor>(ActorToSpawn, SpawnLoc, rot, SpawnInfo);

			GridArray.Add(Spawn);
		}
	}
}

