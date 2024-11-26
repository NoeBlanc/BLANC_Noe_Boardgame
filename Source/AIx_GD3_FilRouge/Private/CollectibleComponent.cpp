// Fill out your copyright notice in the Description page of Project Settings.


#include "CollectibleComponent.h"

#include "DynamicMesh/DynamicMesh3.h"

// Sets default values for this component's properties
UCollectibleComponent::UCollectibleComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCollectibleComponent::BeginPlay()
{
	Super::BeginPlay();
	

	// ...
	
}
void UCollectibleComponent::AddScore()
{
	score ++;
	GEngine->AddOnScreenDebugMessage(1, 60, FColor::Red, "Score: %d");
}


// Called every frame
void UCollectibleComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

