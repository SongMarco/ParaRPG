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
	//MyHttpCall();
	RequestLogin();
	//RequestLoginTest();

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

/*Http call*/
void AHttpService::RequestLogin()
{
	TSharedRef<IHttpRequest> Request = Http->CreateRequest();



	//This is the url on which to process the request
	Request->SetURL("http://115.68.231.13/project/ue4/testHttp.php");
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));


	FString json_data_to_send = "";

	FString string_value = "Hello World";
	FString password = "password123123";

	int int_value = 10;
	bool boolean_value = true;

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key1", password);
	JsonObject->SetNumberField("key2", int_value);
	JsonObject->SetBoolField("key3", boolean_value);

	TSharedRef<TJsonWriter<>> json_writer = TJsonWriterFactory<>::Create(&json_data_to_send);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), json_writer);

	// Can print the data to check if it is correct

	//Output it to the engine
	GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Green, json_data_to_send);
	
	//리퀘스트 컨텐츠에 json을 집어넣는다. : 
//  문제점 : SetContentAsString 적용할 경우 리퀘스트가 제대로 진행되지 않는다.
	//Request->SetContentAsString(json_data_to_send);
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpService::OnResponseReceived);


	Request->ProcessRequest();



}

/*Http call*/
void AHttpService::RequestLoginTest()
{

	TSharedRef<IHttpRequest> Request = Http->CreateRequest();
		
	//This is the url on which to process the request
	Request->SetURL("http://115.68.231.13/project/ue4/testHttp.php");
	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", TEXT("application/json"));

	FString json_data_to_send = "";

	FString string_value = "Hello World";
	FString password = "password1234";
	int int_value = 10;
	bool boolean_value = true;

	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject);
	JsonObject->SetStringField("key1", password);
	JsonObject->SetNumberField("key2", int_value);
	JsonObject->SetBoolField("key3", boolean_value);

	TSharedRef<TJsonWriter<>> json_writer = TJsonWriterFactory<>::Create(&json_data_to_send);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), json_writer);

	// Can print the data to check if it is correct	

	Request->SetContentAsString(json_data_to_send);
	Request->OnProcessRequestComplete().BindUObject(this, &AHttpService::OnRequestResponseReceived);
	Request->ProcessRequest();

}


void AHttpService::OnRequestResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (bWasSuccessful)
	{
		TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
		TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(Response->GetContentAsString());
		FJsonSerializer::Deserialize(JsonReader, JsonObject);

		//Get the value of the json object by field name
		int32 recievedInt = JsonObject->GetIntegerField("customInt");

		FString string_value_read = JsonObject->GetStringField("stringLoginInfo");


		//Output it to the engine
		GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Green, string_value_read);

		// Read all the data via there respective keys and type (int, string, bool)




	}
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

		//FString receivedString = JsonObject->GetStringField("stringLoginInfo");

		//Output it to the engine
		GEngine->AddOnScreenDebugMessage(1, 10.0f, FColor::Green, FString::FromInt(recievedInt));

		//Output it to the engine
		//GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Yellow, receivedString);
	}
}

