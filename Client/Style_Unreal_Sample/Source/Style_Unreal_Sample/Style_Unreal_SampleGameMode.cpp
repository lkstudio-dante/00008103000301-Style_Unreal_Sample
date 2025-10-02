// Copyright Epic Games, Inc. All Rights Reserved.

#include "Style_Unreal_SampleGameMode.h"
#include "Style_Unreal_SampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStyle_Unreal_SampleGameMode::AStyle_Unreal_SampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if(PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
