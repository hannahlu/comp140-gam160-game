// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "OrbZorb.h"
#include "OrbZorbGameMode.h"
#include "OrbZorbPawn.h"

AOrbZorbGameMode::AOrbZorbGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AOrbZorbPawn::StaticClass();
}
