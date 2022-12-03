// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "WFC.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UWFC : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UWFC();

	UFUNCTION(BlueprintNativeEvent, Category="WFC_Functions")
	void SetTile();
	void SetTile_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category="WFC_Functions")
	void CheckNeibourTile();
	void CheckNeibourTile_Implementation();

	UFUNCTION(BlueprintCallable, Category="RandNum")
	float RandomNumber();
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category="RandNum")
	void BuildingToSpawn();
	
	void Build();
	
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		bool m_selected;

	UPROPERTY(EditDefaultsOnly, Category= "Spawning")
	TArray<TSubclassOf<AActor>> Buildings;

	
};
