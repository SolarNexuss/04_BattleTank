// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"
#include "BattleTank.h"

void ATankAIController::BeginPlay()
{
	UE_LOG(LogTemp, Warning, TEXT("AI controller begin play"))
	auto AIControlledTank = GetAIControlledTank();
	if (!AIControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AI controller not possesing a tank."));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AI controller possesing: %s"), *AIControlledTank->GetName());
	}
}

ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

