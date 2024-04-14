// Fill out your copyright notice in the Description page of Project Settings.


#include "TestovoeGameState.h"

void ATestovoeGameState::BeginPlay()
{
	Super::BeginPlay();
	
}

void ATestovoeGameState::StartCountDown()
{
	GetWorldTimerManager().SetTimer(TH_CountDown, this, &ATestovoeGameState::CountDown, 1.0f, true, 1.0f);
}

void ATestovoeGameState::CountDown()
{
	if (Seconds > 0)
	{
		--Seconds;
		TimeChange();
	}
	else
	{
		TimeChange();
		GetWorldTimerManager().ClearTimer(TH_CountDown);
		EndCountDown();
	}
}

void ATestovoeGameState::EndCountDown()
{
	UE_LOG(LogTemp, Warning, TEXT("TimeEnd"));
	TimeIsUp();
}