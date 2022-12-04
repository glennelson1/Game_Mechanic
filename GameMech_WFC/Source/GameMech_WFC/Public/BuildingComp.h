// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/PlayerController.h"
#include "BuildingComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GAMEMECH_WFC_API UBuildingComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBuildingComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void InteractPressed();
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void setupplayerInput();
	
	

	UFUNCTION(BlueprintCallable, Category="Placement")
	void SetplacementEnabled();

	
	UFUNCTION(BlueprintCallable, Category="Placement")
	void UpdatePlacement();
	UFUNCTION(BlueprintCallable, Category="Placement")
	void SpawnBuilding();
};
