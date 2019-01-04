// Fill out your copyright notice in the Description page of Project Settings.

#include "HttpService.h"


// Sets default values
AHttpService::AHttpService(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//When the object is constructed, Get the HTTP module
	Http = &FHttpModule::Get();
}

// Called when the game starts or when spawned
void AHttpService::BeginPlay()
{
	MyHttpCall();
	GEngine->AddOnScreenDebugMessage(1, 1000.0f, FColor::Green, "BBa BBAM");
	GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, "BBa BBAM");
	Super::BeginPlay();



}

/*Http call*/
void AHttpService::MyHttpCall()
{
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpService::OnResponseReceived);
	//This is the url on which to process the request
	Request->SetURL("http://115.68.231.13/project/ue4/testHttp.php");
	Request->SetVerb("GET");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));
	Request->ProcessRequest();
}

/*Assigned function on successfull http call*/
void AHttpService::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{

	//Create a pointer to hold the json serialized data
	TSharedPtr<FJsonObject> JsonObject;

	//Create a reader pointer to read the json data
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());

	//Deserialize the json data given Reader and the actual object to deserialize
	if (FJsonSerializer::Deserialize(Reader, JsonObject))
	{
		//Get the value of the json object by field name
		int32 recievedInt = JsonObject->GetIntegerField("customInt");

		//Output it to the engine
		GEngine->AddOnScreenDebugMessage(1, 2.0f, FColor::Green, FString::FromInt(recievedInt));
	}
}

