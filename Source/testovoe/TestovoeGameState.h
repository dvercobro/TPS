// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "TestovoeGameState.generated.h"


/**
 * 
 */
UCLASS()
class TESTOVOE_API ATestovoeGameState : public AGameStateBase
{
	GENERATED_BODY()

	
	
protected:
	virtual void BeginPlay();
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	FTimerHandle TH_CountDown;
	
public:
	UFUNCTION(BlueprintCallable, Category = "Count Time")
	void StartCountDown();
	void CountDown();
	UFUNCTION(BlueprintCallable, Category = "Count Time")
	void EndCountDown();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Count Time")
	float Seconds = 10;
	UFUNCTION(BlueprintImplementableEvent)
	void TimeIsUp();
	UFUNCTION(BlueprintImplementableEvent)
	void TimeChange();

	
};
