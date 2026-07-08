// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modes/PermanentCameraMode.h"

#ifdef ACAMSYS_PermanentCameraMode_generated_h
#error "PermanentCameraMode.generated.h already included, missing '#pragma once' in PermanentCameraMode.h"
#endif
#define ACAMSYS_PermanentCameraMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UPermanentCameraMode *****************************************************
struct Z_Construct_UClass_UPermanentCameraMode_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_UPermanentCameraMode_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPermanentCameraMode(); \
	friend struct ::Z_Construct_UClass_UPermanentCameraMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_UPermanentCameraMode_NoRegister(); \
public: \
	DECLARE_CLASS2(UPermanentCameraMode, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_UPermanentCameraMode_NoRegister) \
	DECLARE_SERIALIZER(UPermanentCameraMode)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPermanentCameraMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPermanentCameraMode(UPermanentCameraMode&&) = delete; \
	UPermanentCameraMode(const UPermanentCameraMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPermanentCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPermanentCameraMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPermanentCameraMode) \
	NO_API virtual ~UPermanentCameraMode();


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h_18_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h_21_INCLASS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPermanentCameraMode;

// ********** End Class UPermanentCameraMode *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
