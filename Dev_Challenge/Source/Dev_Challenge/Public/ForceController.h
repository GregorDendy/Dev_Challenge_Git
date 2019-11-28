// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Marble.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ForceController.generated.h"

UCLASS()
class DEV_CHALLENGE_API AForceController : public AActor
{
	GENERATED_BODY()
	
public:	
	AForceController();

protected:
	virtual void BeginPlay() override;

public:	
	UFUNCTION(BlueprintCallable, Category = "Ball")
	void HitBall();

	UFUNCTION(BlueprintCallable, Category = "Ball")
	bool CheckIfClickingMarble();

	void SetCurrentMarble(AMarble *newMarble);

private:
	UPROPERTY(EditAnywhere, Category = Marble)
	AMarble* marble;

	UPROPERTY(EditAnywhere, Category = Marble)
	float PowerMultiplier=1;

	UStaticMeshComponent *meshComp;
	FVector cameraLocation;

	FVector GetMousePosition();
	FVector CalculateDirection();
};
