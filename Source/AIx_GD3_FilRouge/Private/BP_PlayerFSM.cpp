// Fill out your copyright notice in the Description page of Project Settings.


#include "BP_PlayerFSM.h"

// Sets default values
ABP_PlayerFSM::ABP_PlayerFSM()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABP_PlayerFSM::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABP_PlayerFSM::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

