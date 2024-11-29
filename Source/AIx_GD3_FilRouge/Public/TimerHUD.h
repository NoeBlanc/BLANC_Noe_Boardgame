// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "TimerHUD.generated.h"

/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API ATimerHUD : public AHUD
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Timer") int minutes;
	
};

