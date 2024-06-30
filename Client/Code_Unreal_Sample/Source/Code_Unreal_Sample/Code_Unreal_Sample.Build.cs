// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Code_Unreal_Sample : ModuleRules
{
	public Code_Unreal_Sample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" 
		});
	}
}
