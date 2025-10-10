// Fill out your copyright notice in the Description page of Project Settings.


#include "GameLaunchHelpers.h"

#include "Misc/Paths.h"

FString UGameLaunchHelpers::GetExecutableName()
{
    // Get the full path of the running executable
    FString ExecutablePath = FPlatformProcess::ExecutablePath();

    // Strip it down to just the filename (e.g. MyGame.exe)
    FString ExecutableName = FPaths::GetCleanFilename(ExecutablePath);

    return ExecutableName;
}