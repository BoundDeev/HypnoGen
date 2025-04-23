// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClipboardPluginBPLibrary.h"
#include "ClipboardPlugin.h"


void UClipboardPluginBPLibrary::CopyText(FString Text) {
	FPlatformMisc::ClipboardCopy(*Text);
}

FString UClipboardPluginBPLibrary::PasteText() {
	FString LocalString;
	FPlatformMisc::ClipboardPaste(LocalString);
	return LocalString;
}


