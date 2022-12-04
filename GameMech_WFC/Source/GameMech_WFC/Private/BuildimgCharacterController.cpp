// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildimgCharacterController.h"

#include <concrt.h>

void ABuildimgCharacterController::SetupInPut()
{
	
}

void ABuildimgCharacterController::SetplacementEnabled_Implementation()
{
	
}

void ABuildimgCharacterController::UpdatePlacement_Implementation()
{
	FVector Loc;
	FRotator Rot;
	FHitResult Hit;

	GetPlayerViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * 4000);

	FCollisionQueryParams TracePrams;
	GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TracePrams);

	 HitLocation = Hit.Location;

	
}

void ABuildimgCharacterController::SpawnBuilding_Implementation()
{
}
