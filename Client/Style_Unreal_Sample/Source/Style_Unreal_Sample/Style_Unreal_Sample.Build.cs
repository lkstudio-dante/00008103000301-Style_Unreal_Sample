// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Style_Unreal_Sample : ModuleRules
{
	public Style_Unreal_Sample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] 
		{ 
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" 
		});
	}
}
