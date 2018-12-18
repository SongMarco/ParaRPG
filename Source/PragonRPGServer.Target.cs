// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

//데디 서버 설정과 관련된 코드


// 데디 서버 타겟을 지정- 내가 만든 프로젝트는 ParagonRPG이므로, 
// 서버 타겟 이름은 ParagonRPGServerTarget이 된다.
public class PragonRPGServerTarget : TargetRules
{

    //프로젝트 명에 맞게 타겟명 변경
	public PragonRPGServerTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Server;


        //프로젝트 명에 맞게 "xxx" 부분을 변경할 것
        ExtraModuleNames.AddRange( new string[] { "PragonRPG" } );
	}
}

//// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

//using UnrealBuildTool;
//using System.Collections.Generic;

//[SupportedPlatforms(UnrealPlatformClass.Server)]
//public class ShooterGameServerTarget : TargetRules   // Change this line as shown previously
//{
//    public ShooterGameServerTarget(TargetInfo Target) : base(Target)  // Change this line as shown previously
//    {
//        Type = TargetType.Server;
//        ExtraModuleNames.Add("ShooterGame");    // Change this line as shown previously
//    }
//}