// Fill out your copyright notice in the Description page of Project Settings.

#include "ExitGameActor.h"

// Sets default values
AExitGameActor::AExitGameActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExitGameActor::BeginPlay()
{
	Super::BeginPlay();
	
	ShutdownServer();
}

// Called every frame
void AExitGameActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExitGameActor::ShutdownServer()
{
	UE_LOG(LogTemp, Log, TEXT("Server shutting down"));
	GIsRequestingExit = 1;
}