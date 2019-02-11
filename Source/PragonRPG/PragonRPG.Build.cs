// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class PragonRPG : ModuleRules
{
	public PragonRPG(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "JsonUtilities", "Http", "Json", "GameLiftServerSDK"/*, "GameLiftClientSDK"*/ });

		PrivateDependencyModuleNames.AddRange(new string[] {  });


        //PublicIncludePaths.Add("D:/Ue4Project/ParaRPG/packages/vcpkg/packages/aws-sdk-cpp_x86-windows/include");
        //PublicAdditionalLibraries.Add("D:/Ue4Project/ParaRPG/packages/vcpkg/packages/aws-sdk-cpp_x86-windows/bin/aws-cpp-sdk-gamelift.dll");



        // Uncomment if you are using Slate UI
        // PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

        // Uncomment if you are using online features
        // PrivateDependencyModuleNames.Add("OnlineSubsystem");

        // To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
    }
}
