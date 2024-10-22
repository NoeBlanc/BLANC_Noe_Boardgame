// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BP_PlayerFSM.h"
#include "UObject/NoExportTypes.h"
#include "BP_PlayerFSM.h"
#include "Parent_State.generated.h"


/**
 * 
 */
UCLASS()
class AIX_GD3_FILROUGE_API UParent_State : public UObject
{
	GENERATED_BODY()
protected:
	virtual void EnterState(ABP_PlayerFSM stateMachine);
	virtual void Behaviour(ABP_PlayerFSM stateMachine);
	virtual void ExitState(ABP_PlayerFSM stateMachine);
};