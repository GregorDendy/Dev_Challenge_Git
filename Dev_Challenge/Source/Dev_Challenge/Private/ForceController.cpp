// Fill out your copyright notice in the Description page of Project Settings.


#include "ForceController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
AForceController::AForceController()
{
}

// Called when the game starts or when spawned
void AForceController::BeginPlay()
{
	Super::BeginPlay();

	//Find camera location to find mouse position in world
	APlayerController *playerController = UGameplayStatics::GetPlayerController(this, 0);
	APlayerCameraManager *CameraManager = playerController->PlayerCameraManager;
	cameraLocation = CameraManager->GetCameraLocation();
}

FVector AForceController::CalculateDirection()
{
	FVector MousePos = GetMousePosition();
	FVector BallPos = marble->GetActorLocation();

	return BallPos - MousePos;
}

//Find mouse position in the world, at same height as the ball
FVector AForceController::GetMousePosition()
{
	APlayerController *PlayerController = UGameplayStatics::GetPlayerController(this, 0);

	float X, Y;
	PlayerController->GetMousePosition(X,Y);
	FVector2D MousePosition(X, Y);
	FHitResult HitResult;
	FVector mousePos;
	if (PlayerController->GetHitResultAtScreenPosition(MousePosition, ECC_Visibility, false, HitResult) == true)
	{
		mousePos = HitResult.ImpactPoint;
	}

	return mousePos;
}

//Add force to the marble based on direction and power
void AForceController::HitBall()
{
	if (marble->marbleState == marble->CHARGING)
	{
		FVector	direction = CalculateDirection();
		float power = FMath::Clamp<float>(direction.Size()*PowerMultiplier, 1, 1000);
		FVector forceToAdd = direction.GetSafeNormal() * power;
		forceToAdd.Z = 0;
		if (meshComp!=nullptr)
		{
			meshComp->AddImpulse(forceToAdd * meshComp->GetMass());
		}
		marble->marbleState = marble->FIRED;
	}
}

//Check if mouse is over the marble and if it's in a state to be fired
bool AForceController::CheckIfClickingMarble()
{
	APlayerController *PlayerController = UGameplayStatics::GetPlayerController(this, 0);
	float X, Y;
	PlayerController->GetMousePosition(X, Y); 
	FVector2D MousePosition(X, Y);
	FHitResult HitResult;
	if (PlayerController->GetHitResultAtScreenPosition(MousePosition, ECC_Visibility, false, HitResult) == true)
	{
		AActor *hitActor = HitResult.GetActor();
		bool ClickedMarble = hitActor->ActorHasTag("marble");
		if (ClickedMarble && marble != nullptr)
		{
			meshComp = Cast<UStaticMeshComponent>(marble->GetRootComponent());
			if (marble->marbleState == marble->READY)
			{
				marble->marbleState = marble->CHARGING;
				return true;
			}
		}
	}
	return false;
}

//Stores the current marble in scene so it can be interacted with
void AForceController::SetCurrentMarble(AMarble *newMarble)
{
	if (newMarble != nullptr)
	{
		marble = newMarble;
	}
}