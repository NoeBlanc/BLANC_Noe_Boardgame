// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Collect_Player.generated.h"

UCLASS()
class AIX_GD3_FILROUGE_API ACollect_Player : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACollect_Player();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
