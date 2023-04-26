// Copyright Epic Games, Inc. All Rights Reserved.

#include "PlainTextConfigsBPLibrary.h"
#include "PlainTextConfigs.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UPlainTextConfigsBPLibrary::LoadTxt(FString filename, FString& text)
{
	return FFileHelper::LoadFileToString(text, *(FPaths::ProjectDir() + filename));
}

bool UPlainTextConfigsBPLibrary::SaveTxt(FString text, FString filename)
{
	return FFileHelper::SaveStringToFile(text, *(FPaths::ProjectDir() + filename));
}

