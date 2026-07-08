// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modes/OneTimeCameraMode.h"

#ifdef ACAMSYS_OneTimeCameraMode_generated_h
#error "OneTimeCameraMode.generated.h already included, missing '#pragma once' in OneTimeCameraMode.h"
#endif
#define ACAMSYS_OneTimeCameraMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UOneTimeCameraMode *******************************************************
struct Z_Construct_UClass_UOneTimeCameraMode_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_UOneTimeCameraMode_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOneTimeCameraMode(); \
	friend struct ::Z_Construct_UClass_UOneTimeCameraMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_UOneTimeCameraMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UOneTimeCameraMode, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_UOneTimeCameraMode_NoRegister) \
	DECLARE_SERIALIZER(UOneTimeCameraMode)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOneTimeCameraMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UOneTimeCameraMode(UOneTimeCameraMode&&) = delete; \
	UOneTimeCameraMode(const UOneTimeCameraMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOneTimeCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOneTimeCameraMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOneTimeCameraMode) \
	NO_API virtual ~UOneTimeCameraMode();


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h_17_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h_20_INCLASS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UOneTimeCameraMode;

// ********** End Class UOneTimeCameraMode *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
