// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CountdownWidget.generated.h"

/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API UCountdownWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	// Fonction pour démarrer le timer
	UFUNCTION(BlueprintCallable, Category = "Countdown")
	void StartCountdown(float InitialTime = 30.0f);

protected:
	virtual void NativeConstruct() override;

	// Le TextBlock lié dans le Blueprint
	UPROPERTY(meta = (BindWidget))
	class UTextBlock* CountdownText;

private:
	// Temps restant
	float RemainingTime;

	// Handle pour gérer le timer
	FTimerHandle CountdownTimerHandle;

	// Mettre à jour le timer chaque seconde
	void TimerTick();

	// Fonction appelée lorsque le timer atteint 0
	void EndCountdown();
	
};
