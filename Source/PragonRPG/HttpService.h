// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Json.h"
#include "JsonUtilities.h"
#include "HttpService.generated.h"


UCLASS()
class PRAGONRPG_API AHttpService : public AActor
{
	GENERATED_BODY()
private:
	FHttpModule* Http;

	/* The actual HTTP call */
	UFUNCTION()

	void MyHttpCall();

	void RequestLogin();


	/*Assign this function to call when the GET request processes sucessfully*/
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);

	// Sets default values for this actor's properties
	AHttpService(const class FObjectInitializer& ObjectInitializer);

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
