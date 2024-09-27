// // Copyright Pablo Rodrigo Sanchez, Inc. All Rights Reserved.

#include "ACamSys.h"

#define LOCTEXT_NAMESPACE "FACamSysModule"

void FACamSysModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FACamSysModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FACamSysModule, ACamSys)