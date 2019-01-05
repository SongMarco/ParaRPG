// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LoginFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class PRAGONRPG_API ULoginFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
		UFUNCTION(BlueprintCallable, Category = "LoginFunction")
		static void FunctionLogin(FString nickName, FString password);
	
};
