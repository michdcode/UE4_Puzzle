// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealEnginePuzzlePlayerController.h"

AUnrealEnginePuzzlePlayerController::AUnrealEnginePuzzlePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
