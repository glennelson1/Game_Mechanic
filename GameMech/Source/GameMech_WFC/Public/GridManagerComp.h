// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GridManagerComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GAMEMECH_WFC_API UGridManagerComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGridManagerComp();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Grid Size")
	int m_GridSize;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "World Size")
	int m_WorldSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Grid Size")
	float offset;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Grid")
	void PopulateGrid();
	
	


	
};
