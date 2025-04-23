// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "ClipboardPluginBPLibrary.generated.h"

UCLASS()
class UClipboardPluginBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy Text to Clipboard"), Category = "Clipboard Addon")
		static void CopyText(FString Text);

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Paste Text to Clipboard"), Category = "Clipboard Addon")
		static FString PasteText();
};
