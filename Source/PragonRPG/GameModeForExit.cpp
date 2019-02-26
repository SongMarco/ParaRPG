// Fill out your copyright notice in the Description page of Project Settings.

#include "GameModeForExit.h"


//void AGameModeForExit::BeginPlay() {
//	Super::BeginPlay();
//
//	ShutdownServer();
//}
//
//AGameModeForExit::AGameModeForExit()
//{
//
//}
void AGameModeForExit::ShutdownServer()
{
	UE_LOG(LogTemp, Log, TEXT("Server shutting down"));
	GIsRequestingExit = 1;
}