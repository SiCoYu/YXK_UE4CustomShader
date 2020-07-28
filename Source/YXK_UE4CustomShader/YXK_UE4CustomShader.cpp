// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "YXK_UE4CustomShader.h"
#include "Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"
#include "Logging/LogMacros.h"
#include "Misc/Paths.h"
#include "ShaderCore.h"

void FYXK_UE4CustomShader::StartupModule()
{
	FString ShaderDir = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
	FString ProjectBasePath = "/Project";
	AddShaderSourceDirectoryMapping(ProjectBasePath, ShaderDir);
}

void FYXK_UE4CustomShader::ShutdownModule()
{

}

IMPLEMENT_PRIMARY_GAME_MODULE(FYXK_UE4CustomShader, YXK_UE4CustomShader, "YXK_UE4CustomShader");