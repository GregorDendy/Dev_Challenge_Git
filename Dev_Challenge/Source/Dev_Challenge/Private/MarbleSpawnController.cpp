// Fill out your copyright notice in the Description page of Project Settings.


#include "MarbleSpawnController.h"
#include "Engine/World.h"

// Sets default values
AMarbleSpawnController::AMarbleSpawnController()
{
}

void AMarbleSpawnController::BeginPlay()
{
	Super::BeginPlay();
	SpawnMarble();
}

void AMarbleSpawnController::SpawnMarble()
{
	FActorSpawnParameters SpawnParams;
	FRotator rot{0};
	currentMarble = GetWorld()->SpawnActor<AMarble>(ActorToSpawn, SpawnLocation, rot, SpawnParams);
	forceController->SetCurrentMarble(currentMarble);
}

void AMarbleSpawnController::DestroyMarble()
{
	if (currentMarble != nullptr)
	{
		currentMarble->Destroy();
	}
}

//Remove old marble and get new one
void AMarbleSpawnController::GetNewMarble()
{
	if (currentMarble->marbleState == currentMarble->FIRED)
	{
		DestroyMarble();
		SpawnMarble();
	}
}
