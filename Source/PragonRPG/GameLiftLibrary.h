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
		static bool InitGameLiftServerModule(int32 serverPort);


	UFUNCTION(Blueprintcallable, Category = "GameLiftLibrary")
		static bool AcceptPlayer(FString playerSessionId);


	UFUNCTION(Blueprintcallable, Category = "GameLiftLibrary", meta = (HidePin = "WorldContextObject", DefaultTosSelf = "WorldContextObject", Keywords="Shut Down") )
		static void ShutDownServerProcess();
	



	UFUNCTION(Blueprintcallable, Category = "GameLiftLibrary")
		static void LaunchGameSessionPlacement(FString playerName);


	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Server Port", CompactNodeTitle = "GetServerPort", Keywords = "Server Port"), Category = Game)
		static int32  getServerPort(UObject * WorldContextObject);

	 




};
