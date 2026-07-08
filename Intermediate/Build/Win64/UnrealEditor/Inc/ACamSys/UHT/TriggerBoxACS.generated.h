// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TriggerBoxACS.h"

#ifdef ACAMSYS_TriggerBoxACS_generated_h
#error "TriggerBoxACS.generated.h already included, missing '#pragma once' in TriggerBoxACS.h"
#endif
#define ACAMSYS_TriggerBoxACS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UBoxComponent;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ATriggerBoxACS ***********************************************************
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSwapPermamentCameraMode); \
	DECLARE_FUNCTION(execChangeCamera); \
	DECLARE_FUNCTION(execOnOverlapBegin); \
	DECLARE_FUNCTION(execGetCollisionComponent);


struct Z_Construct_UClass_ATriggerBoxACS_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_ATriggerBoxACS_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATriggerBoxACS(); \
	friend struct ::Z_Construct_UClass_ATriggerBoxACS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_ATriggerBoxACS_NoRegister(); \
public: \
	DECLARE_CLASS2(ATriggerBoxACS, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_ATriggerBoxACS_NoRegister) \
	DECLARE_SERIALIZER(ATriggerBoxACS)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATriggerBoxACS(ATriggerBoxACS&&) = delete; \
	ATriggerBoxACS(const ATriggerBoxACS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATriggerBoxACS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATriggerBoxACS); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATriggerBoxACS) \
	NO_API virtual ~ATriggerBoxACS();


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_12_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_15_INCLASS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATriggerBoxACS;

// ********** End Class ATriggerBoxACS *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
