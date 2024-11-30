#include "CountdownWidget.h"
#include "Components/TextBlock.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

void UCountdownWidget::NativeConstruct()
{
	Super::NativeConstruct();

	// Initialiser le texte par défaut (facultatif)
	if (CountdownText)
	{
		CountdownText->SetText(FText::FromString(TEXT("Ready")));
	}
}

void UCountdownWidget::StartCountdown(float InitialTime)
{
	// Initialiser le temps restant
	RemainingTime = InitialTime;

	// Démarrer le timer qui tick toutes les secondes
	GetWorld()->GetTimerManager().SetTimer(CountdownTimerHandle, this, &UCountdownWidget::TimerTick, 1.0f, true);

	// Mettre à jour le texte initial
	if (CountdownText)
	{
		CountdownText->SetText(FText::FromString(FString::Printf(TEXT("%d"), FMath::CeilToInt(RemainingTime))));
	}
}

void UCountdownWidget::TimerTick()
{
	// Réduire le temps restant
	RemainingTime--;

	// Mettre à jour le texte
	if (CountdownText)
	{
		CountdownText->SetText(FText::FromString(FString::Printf(TEXT("%d"), FMath::CeilToInt(RemainingTime))));
	}

	// Vérifier si le temps est écoulé
	if (RemainingTime <= 0)
	{
		// Arrêter le timer
		GetWorld()->GetTimerManager().ClearTimer(CountdownTimerHandle);

		// Appeler la fonction de fin
		EndCountdown();
	}
}

void UCountdownWidget::EndCountdown()
{
	// Logique lorsque le timer est terminé
	if (CountdownText)
	{
		// Vérifiez que vous voulez charger un niveau spécifique
		FString NextLevelName = "Test_map";

		// Change de niveau
		if (!NextLevelName.IsEmpty())
		{
			UGameplayStatics::OpenLevel(this, FName(*NextLevelName));
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Le compte à rebours est terminé."));
}
