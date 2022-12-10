// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildimgCharacterController.h"

#include <concrt.h>

void ABuildimgCharacterController::SetupInPut()
{
	
}

FVector ABuildimgCharacterController::UpdatePlacement_Implementation(FVector HitLocation)
{
	FVector Loc;
	FRotator Rot;
	FHitResult Hit;

	//float x;
	//float y;
	
	GetPlayerViewPoint(Loc, Rot);

	FVector Start = Loc;
	FVector End = Start + (Rot.Vector() * 4000);

	FCollisionQueryParams TracePrams;
	
	//GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, TracePrams);

	GetHitResultUnderCursor(ECC_Visibility, true, Hit);
	HitLocation = Hit.Location;
	
	return HitLocation;
}

void ABuildimgCharacterController::SetplacementEnabled_Implementation()
{
	
}



void ABuildimgCharacterController::SpawnBuilding_Implementation()
{
	



	
}
