// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameLiftLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PRAGONRPG_API UGameLiftLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(Blueprintcallable, Category = "GameLiftLibrary")	
		static bool InitGameLiftModule();
	
};
