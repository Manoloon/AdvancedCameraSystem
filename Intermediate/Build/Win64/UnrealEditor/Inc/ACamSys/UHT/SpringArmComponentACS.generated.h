// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SpringArmComponentACS.h"

#ifdef ACAMSYS_SpringArmComponentACS_generated_h
#error "SpringArmComponentACS.generated.h already included, missing '#pragma once' in SpringArmComponentACS.h"
#endif
#define ACAMSYS_SpringArmComponentACS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USpringArmComponentACS ***************************************************
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSpringArmLengthMaxLimit); \
	DECLARE_FUNCTION(execGetSpringArmLengthMinLimit);


struct Z_Construct_UClass_USpringArmComponentACS_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_USpringArmComponentACS_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSpringArmComponentACS(); \
	friend struct ::Z_Construct_UClass_USpringArmComponentACS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_USpringArmComponentACS_NoRegister(); \
public: \
	DECLARE_CLASS2(USpringArmComponentACS, USpringArmComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_USpringArmComponentACS_NoRegister) \
	DECLARE_SERIALIZER(USpringArmComponentACS)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USpringArmComponentACS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USpringArmComponentACS(USpringArmComponentACS&&) = delete; \
	USpringArmComponentACS(const USpringArmComponentACS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USpringArmComponentACS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USpringArmComponentACS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USpringArmComponentACS) \
	NO_API virtual ~USpringArmComponentACS();


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_11_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_14_INCLASS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USpringArmComponentACS;

// ********** End Class USpringArmComponentACS *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
