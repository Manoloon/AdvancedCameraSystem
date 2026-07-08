// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Modifiers/KeepLineOfSight.h"

#ifdef ACAMSYS_KeepLineOfSight_generated_h
#error "KeepLineOfSight.generated.h already included, missing '#pragma once' in KeepLineOfSight.h"
#endif
#define ACAMSYS_KeepLineOfSight_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UKeepLineOfSight *********************************************************
struct Z_Construct_UClass_UKeepLineOfSight_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_UKeepLineOfSight_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKeepLineOfSight(); \
	friend struct ::Z_Construct_UClass_UKeepLineOfSight_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_UKeepLineOfSight_NoRegister(); \
public: \
	DECLARE_CLASS2(UKeepLineOfSight, UCameraModifierACS, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_UKeepLineOfSight_NoRegister) \
	DECLARE_SERIALIZER(UKeepLineOfSight)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKeepLineOfSight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UKeepLineOfSight(UKeepLineOfSight&&) = delete; \
	UKeepLineOfSight(const UKeepLineOfSight&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKeepLineOfSight); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKeepLineOfSight); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKeepLineOfSight) \
	NO_API virtual ~UKeepLineOfSight();


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h_12_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h_15_INCLASS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UKeepLineOfSight;

// ********** End Class UKeepLineOfSight ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
