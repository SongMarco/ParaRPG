// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HashStringLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PRAGONRPG_API UHashStringLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


		UFUNCTION(Blueprintcallable )
		static FString HashString(FString inputString);
};
