// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BuildimgCharacterController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEMECH_WFC_API ABuildimgCharacterController : public APlayerController
{
	GENERATED_BODY()

protected:

 void SetupInPut();
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Placement")
	void SetplacementEnabled();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Placement")
	FVector UpdatePlacement(FVector HitLocation);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Placement")
	void SpawnBuilding();

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	float m_Location;

	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category= "Location")
	//FVector HitLocation = FVector::ZeroVector;
	UPROPERTY(EditDefaultsOnly, Category= "Spawning")
	TSubclassOf<AActor> ActorToSpawn;

	//TSubclassOf<AActor*> GridManager;
};
