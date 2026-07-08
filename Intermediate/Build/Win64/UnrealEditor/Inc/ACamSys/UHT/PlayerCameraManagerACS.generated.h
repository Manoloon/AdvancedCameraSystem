// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCameraManagerACS.h"

#ifdef ACAMSYS_PlayerCameraManagerACS_generated_h
#error "PlayerCameraManagerACS.generated.h already included, missing '#pragma once' in PlayerCameraManagerACS.h"
#endif
#define ACAMSYS_PlayerCameraManagerACS_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCameraComponent;
class UClass;
class UOneTimeCameraMode;
class UPermanentCameraMode;
class USpringArmComponentACS;

// ********** Begin Class APlayerCameraManagerACS **************************************************
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCalculateDitherEffect); \
	DECLARE_FUNCTION(execEnableDitherFX); \
	DECLARE_FUNCTION(execGetCameraComponent); \
	DECLARE_FUNCTION(execGetSpringArmComponent); \
	DECLARE_FUNCTION(execApplyOneTimeCameraMode); \
	DECLARE_FUNCTION(execApplyOneTimeCameraModeByClass); \
	DECLARE_FUNCTION(execRemoveOneTimeCameraMode); \
	DECLARE_FUNCTION(execIsOneTimeCameraModeApplied); \
	DECLARE_FUNCTION(execToggleOneTimeCameraMode); \
	DECLARE_FUNCTION(execToggleOneTimeCameraModeByClass); \
	DECLARE_FUNCTION(execApplyCameraModeSettings); \
	DECLARE_FUNCTION(execApplyCameraModeSettingsByClass); \
	DECLARE_FUNCTION(execGetCurrentCameraModeSettings);


struct Z_Construct_UClass_APlayerCameraManagerACS_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_APlayerCameraManagerACS_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraManagerACS(); \
	friend struct ::Z_Construct_UClass_APlayerCameraManagerACS_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_APlayerCameraManagerACS_NoRegister(); \
public: \
	DECLARE_CLASS2(APlayerCameraManagerACS, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_APlayerCameraManagerACS_NoRegister) \
	DECLARE_SERIALIZER(APlayerCameraManagerACS)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCameraManagerACS(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	APlayerCameraManagerACS(APlayerCameraManagerACS&&) = delete; \
	APlayerCameraManagerACS(const APlayerCameraManagerACS&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraManagerACS); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraManagerACS); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCameraManagerACS) \
	NO_API virtual ~APlayerCameraManagerACS();


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_20_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_23_INCLASS_NO_PURE_DECLS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APlayerCameraManagerACS;

// ********** End Class APlayerCameraManagerACS ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
