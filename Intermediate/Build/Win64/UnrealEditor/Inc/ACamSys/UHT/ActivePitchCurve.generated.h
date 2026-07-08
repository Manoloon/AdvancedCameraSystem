// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/ActivePitchCurve.h"

#ifdef ACAMSYS_ActivePitchCurve_generated_h
#error "ActivePitchCurve.generated.h already included, missing '#pragma once' in ActivePitchCurve.h"
#endif
#define ACAMSYS_ActivePitchCurve_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActivePitchCurve ********************************************************
struct Z_Construct_UClass_UActivePitchCurve_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_UActivePitchCurve_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivePitchCurve(); \
	friend struct ::Z_Construct_UClass_UActivePitchCurve_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_UActivePitchCurve_NoRegister(); \
public: \
	DECLARE_CLASS2(UActivePitchCurve, UCameraModifierACS, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_UActivePitchCurve_NoRegister) \
	DECLARE_SERIALIZER(UActivePitchCurve)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivePitchCurve(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActivePitchCurve(UActivePitchCurve&&) = delete; \
	UActivePitchCurve(const UActivePitchCurve&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivePitchCurve); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivePitchCurve); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivePitchCurve) \
	NO_API virtual ~UActivePitchCurve();


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h_11_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h_14_INCLASS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActivePitchCurve;

// ********** End Class UActivePitchCurve **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
