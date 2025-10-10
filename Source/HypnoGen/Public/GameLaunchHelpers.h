// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameLaunchHelpers.generated.h"

UCLASS()
class HYPNOGEN_API UGameLaunchHelpers : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:

    /** Returns the name of the current executable, e.g. "MyGame.exe" or "MyGame_VR.exe" */
    UFUNCTION(BlueprintPure, Category = "System")
    static FString GetExecutableName();
};
