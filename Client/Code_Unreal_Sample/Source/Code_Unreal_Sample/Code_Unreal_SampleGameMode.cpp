// Copyright Epic Games, Inc. All Rights Reserved.

#include "Code_Unreal_SampleGameMode.h"
#include "Code_Unreal_SampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACode_Unreal_SampleGameMode::ACode_Unreal_SampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if(PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
