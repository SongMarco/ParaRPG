// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeForExit.generated.h"

/**
 * 
 */
UCLASS()
class PRAGONRPG_API AGameModeForExit : public AGameModeBase
{
	GENERATED_BODY()

		void ShutdownServer();
	
};
