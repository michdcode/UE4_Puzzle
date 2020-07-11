// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealEnginePuzzleGameMode.h"
#include "UnrealEnginePuzzlePlayerController.h"
#include "UnrealEnginePuzzlePawn.h"

AUnrealEnginePuzzleGameMode::AUnrealEnginePuzzleGameMode()
{
	// no pawn by default
	DefaultPawnClass = AUnrealEnginePuzzlePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AUnrealEnginePuzzlePlayerController::StaticClass();
}
