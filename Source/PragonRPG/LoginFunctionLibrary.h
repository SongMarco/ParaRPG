// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Json.h"
#include "JsonUtilities.h"
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
		
	UFUNCTION(BlueprintPure, Category = "LoginFunction")
	static ULoginFunctionLibrary * Create();

	/*Assign this function to call when the GET request processes sucessfully*/
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

public:
	/** What is the Player's current musical skill level? */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "LoginFunction")
	bool loginResult = false;
	
};


