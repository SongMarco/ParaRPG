// Fill out your copyright notice in the Description page of Project Settings.
#include "GameLiftLibrary.h"
#include "Engine.h"
#include "GameLiftServerSDK.h"

#include "aws/core/Aws.h"
#include "aws/core/utils/Outcome.h"
#include "aws/gamelift/gameliftclient.h"
#include "aws/gamelift/model/StartGameSessionPlacementRequest.h"

#include "aws/gamelift/GameLiftErrors.h"



//게임 서버와 AWS SDK 모듈을 연동하기 위한 함수 코드
bool UGameLiftLibrary::InitGameLiftServerModule(int32 serverPort)
{

	//Let's run this code only if GAMELIFT is enabled. Only with Server targets!
//#if WITH_GAMELIFT

	//Getting the module first.
	FGameLiftServerSDKModule* gameLiftSdkModule = &FModuleManager::LoadModuleChecked<FGameLiftServerSDKModule>(FName("GameLiftServerSDK"));

	//InitSDK establishes a local connection with GameLift's agent to enable communication.
	gameLiftSdkModule->InitSDK();

	//Respond to new game session activation request. GameLift sends activation request 
	//to the game server along with a game session object containing game properties 
	//and other settings. Once the game server is ready to receive player connections, 
	//invoke GameLiftServerAPI.ActivateGameSession()

	//게임 세션 활성화
	auto onGameSession = [=](Aws::GameLift::Server::Model::GameSession gameSession)
	{
		gameLiftSdkModule->ActivateGameSession();
	};

	//프로세스에 사용할 파라미터 설정
	FProcessParameters* params = new FProcessParameters();

	params->OnStartGameSession.BindLambda(onGameSession);

	//OnProcessTerminate callback. GameLift invokes this before shutting down the instance 
	//that is hosting this game server to give it time to gracefully shut down on its own. 
	//In this example, we simply tell GameLift we are indeed going to shut down.
	params->OnTerminate.BindLambda([=]() {gameLiftSdkModule->ProcessEnding();});

	//HealthCheck callback. GameLift invokes this callback about every 60 seconds. By default, 
	//GameLift API automatically responds 'true'. A game can optionally perform checks on 
	//dependencies and such and report status based on this info. If no response is received  
	//within 60 seconds, health status is recorded as 'false'. 
	//In this example, we're always healthy!
	params->OnHealthCheck.BindLambda([]() {return true; });

	//Here, the game server tells GameLift what port it is listening on for incoming player 
	//connections. In this example, the port is hardcoded for simplicity. Since active game
	//that are on the same instance must have unique ports, you may want to assign port values
	//from a range, such as:
	//const int32 port = FURL::UrlConfig.DefaultPort;


	//메소드 파라미터로 넣은 서버 포트값을 프로세스 파라미터로 설정함 -> 대시보드에서 서버 포트 확인 가능
	params->port=serverPort;
	//params->port = 7777;


	//Here, the game server tells GameLift what set of files to upload when the game session 
	//ends. GameLift uploads everything specified here for the developers to fetch later.
	TArray<FString> logfiles;
	logfiles.Add(TEXT("aLogFile.txt"));
	params->logParameters = logfiles;

	//Call ProcessReady to tell GameLift this game server is ready to receive game sessions!
	gameLiftSdkModule->ProcessReady(*params);
	//#endif


	return true;
}


//FlexMAtch 매치메이커에 매치메이킹 요청을 보내는 함수, 현재 사용 안함. 플러그인 통해서 사용

void UGameLiftLibrary::LaunchGameSessionPlacement(FString playerName)
{
		////Aws SDK 초기화
		//Aws::SDKOptions options;
		//Aws::InitAPI(options);


	 //   //클라이언트 객체 생성
	 //   Aws::GameLift::GameLiftClient *client = new Aws::GameLift::GameLiftClient;




		////세션 생성 리퀘스트 생성
		//Aws::GameLift::Model::StartGameSessionPlacementRequest req = Aws::GameLift::Model::StartGameSessionPlacementRequest();
		//req.SetGameSessionQueueName("ParagonQueue");
		//req.SetMaximumPlayerSessionCount(2);

		//const char* tcharPlayerName = TCHAR_TO_ANSI(*playerName);

		//req.SetPlacementId(tcharPlayerName);
		//
		////리퀘스트를 이용해 StartGameSessionPlacement 시작
		//client->StartGameSessionPlacement(req);

	  //   아래는 주석 처리한 FlexMAtch 관련 모듈이다. 필요시 삭제하거나 업데이트할 것
	  //리퀘스트 객체 생성
	  //   Aws::GameLift::Model::StartMatchmakingRequest *request = new  Aws::GameLift::Model::StartMatchmakingRequest();
	  //          
	  //   //플레이어 객체 생성
	  //   Aws::GameLift::Model::Player *player = new Aws::GameLift::Model::Player();

		 ////플레이어 벡터 생성(플레이어 목록, 근데 여긴 1명의 리퀘스트니까 크기는 1로 초기화)
		 //Aws::Vector<Aws::GameLift::Model::Player> vecPlayers(1);
		 //vecPlayers.push_back(*player);


		 //request->SetPlayers(vecPlayers);
	  //   
		 ////Flexmatch 매치메이킹 설정 이름을 설정해줌
	  //   request->SetConfigurationName("ParagonMatchMaker");
	
	  ////
		 ////티켓 id값은 플레이어 id로 설정

		 //const char* tcharPlayerName = TCHAR_TO_ANSI(*playerName);

		 //request->SetTicketId(tcharPlayerName);
		 //
		 ////const Aws::Vector<Player>& value	 	
		 //		 
	  //   client->StartMatchmaking(*request);
		 //Flex모듈 끝
	

}



//현재 서버의 포트를 반환하는 함수 : 플릿에게 파라미터로 전달하기 위해 사용됨
int32  UGameLiftLibrary::getServerPort(UObject * WorldContextObject)
{
	
	UWorld * World = GEngine->GetWorldFromContextObject(WorldContextObject);


	if (World->IsServer())
	{
		return World->URL.Port;
	}
	return 0;
}
