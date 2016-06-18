// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "SpaceShooter.h"
#include "SpaceShooterGameMode.h"
#include "SpaceShooterPawn.h"

ASpaceShooterGameMode::ASpaceShooterGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = ASpaceShooterPawn::StaticClass();
}

