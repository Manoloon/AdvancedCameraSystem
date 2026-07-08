// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PlayerCameraManagerACS.h"
#include "UObject/Class.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePlayerCameraManagerACS() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_APlayerCameraManagerACS();
ACAMSYS_API UClass* Z_Construct_UClass_APlayerCameraManagerACS_NoRegister();
ACAMSYS_API UClass* Z_Construct_UClass_UOneTimeCameraMode_NoRegister();
ACAMSYS_API UClass* Z_Construct_UClass_UPermanentCameraMode_NoRegister();
ACAMSYS_API UClass* Z_Construct_UClass_USpringArmComponentACS_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerCameraManagerACS Function ApplyCameraModeSettings *****************
struct Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics
{
	struct PlayerCameraManagerACS_eventApplyCameraModeSettings_Parms
	{
		UPermanentCameraMode* PermanentCameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyCameraModeSettings constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PermanentCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyCameraModeSettings constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyCameraModeSettings Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::NewProp_PermanentCameraMode = { "PermanentCameraMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventApplyCameraModeSettings_Parms, PermanentCameraMode), Z_Construct_UClass_UPermanentCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::NewProp_PermanentCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::PropPointers) < 2048);
// ********** End Function ApplyCameraModeSettings Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "ApplyCameraModeSettings", 	Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::PlayerCameraManagerACS_eventApplyCameraModeSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::PlayerCameraManagerACS_eventApplyCameraModeSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execApplyCameraModeSettings)
{
	P_GET_OBJECT(UPermanentCameraMode,Z_Param_PermanentCameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyCameraModeSettings(Z_Param_PermanentCameraMode);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function ApplyCameraModeSettings *******************

// ********** Begin Class APlayerCameraManagerACS Function ApplyCameraModeSettingsByClass **********
struct Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics
{
	struct PlayerCameraManagerACS_eventApplyCameraModeSettingsByClass_Parms
	{
		const TSubclassOf<UPermanentCameraMode> PermanentCameraModeClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermanentCameraModeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyCameraModeSettingsByClass constinit property declarations ********
	static const UECodeGen_Private::FClassPropertyParams NewProp_PermanentCameraModeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyCameraModeSettingsByClass constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyCameraModeSettingsByClass Property Definitions *******************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::NewProp_PermanentCameraModeClass = { "PermanentCameraModeClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventApplyCameraModeSettingsByClass_Parms, PermanentCameraModeClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UPermanentCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermanentCameraModeClass_MetaData), NewProp_PermanentCameraModeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::NewProp_PermanentCameraModeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::PropPointers) < 2048);
// ********** End Function ApplyCameraModeSettingsByClass Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "ApplyCameraModeSettingsByClass", 	Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::PlayerCameraManagerACS_eventApplyCameraModeSettingsByClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::PlayerCameraManagerACS_eventApplyCameraModeSettingsByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execApplyCameraModeSettingsByClass)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UPermanentCameraMode>,Z_Param_Out_PermanentCameraModeClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyCameraModeSettingsByClass(Z_Param_Out_PermanentCameraModeClass);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function ApplyCameraModeSettingsByClass ************

// ********** Begin Class APlayerCameraManagerACS Function ApplyOneTimeCameraMode ******************
struct Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics
{
	struct PlayerCameraManagerACS_eventApplyOneTimeCameraMode_Parms
	{
		const UOneTimeCameraMode* OneTimeCameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeCameraMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyOneTimeCameraMode constinit property declarations ****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OneTimeCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyOneTimeCameraMode constinit property declarations ******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyOneTimeCameraMode Property Definitions ***************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::NewProp_OneTimeCameraMode = { "OneTimeCameraMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventApplyOneTimeCameraMode_Parms, OneTimeCameraMode), Z_Construct_UClass_UOneTimeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeCameraMode_MetaData), NewProp_OneTimeCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::NewProp_OneTimeCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::PropPointers) < 2048);
// ********** End Function ApplyOneTimeCameraMode Property Definitions *****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "ApplyOneTimeCameraMode", 	Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::PlayerCameraManagerACS_eventApplyOneTimeCameraMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::PlayerCameraManagerACS_eventApplyOneTimeCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execApplyOneTimeCameraMode)
{
	P_GET_OBJECT(UOneTimeCameraMode,Z_Param_OneTimeCameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyOneTimeCameraMode(Z_Param_OneTimeCameraMode);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function ApplyOneTimeCameraMode ********************

// ********** Begin Class APlayerCameraManagerACS Function ApplyOneTimeCameraModeByClass ***********
struct Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics
{
	struct PlayerCameraManagerACS_eventApplyOneTimeCameraModeByClass_Parms
	{
		const TSubclassOf<UOneTimeCameraMode> OneTimeCameraModeClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeCameraModeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ApplyOneTimeCameraModeByClass constinit property declarations *********
	static const UECodeGen_Private::FClassPropertyParams NewProp_OneTimeCameraModeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ApplyOneTimeCameraModeByClass constinit property declarations ***********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ApplyOneTimeCameraModeByClass Property Definitions ********************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::NewProp_OneTimeCameraModeClass = { "OneTimeCameraModeClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventApplyOneTimeCameraModeByClass_Parms, OneTimeCameraModeClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOneTimeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeCameraModeClass_MetaData), NewProp_OneTimeCameraModeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::NewProp_OneTimeCameraModeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::PropPointers) < 2048);
// ********** End Function ApplyOneTimeCameraModeByClass Property Definitions **********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "ApplyOneTimeCameraModeByClass", 	Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::PlayerCameraManagerACS_eventApplyOneTimeCameraModeByClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::PlayerCameraManagerACS_eventApplyOneTimeCameraModeByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execApplyOneTimeCameraModeByClass)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UOneTimeCameraMode>,Z_Param_Out_OneTimeCameraModeClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyOneTimeCameraModeByClass(Z_Param_Out_OneTimeCameraModeClass);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function ApplyOneTimeCameraModeByClass *************

// ********** Begin Class APlayerCameraManagerACS Function CalculateDitherEffect *******************
struct Z_Construct_UFunction_APlayerCameraManagerACS_CalculateDitherEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CalculateDitherEffect constinit property declarations *****************
// ********** End Function CalculateDitherEffect constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_CalculateDitherEffect_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "CalculateDitherEffect", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_CalculateDitherEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_CalculateDitherEffect_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_CalculateDitherEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_CalculateDitherEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execCalculateDitherEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CalculateDitherEffect();
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function CalculateDitherEffect *********************

// ********** Begin Class APlayerCameraManagerACS Function EnableDitherFX **************************
struct Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics
{
	struct PlayerCameraManagerACS_eventEnableDitherFX_Parms
	{
		bool bInEnabledDitherFX;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EnableDitherFX constinit property declarations ************************
	static void NewProp_bInEnabledDitherFX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInEnabledDitherFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function EnableDitherFX constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function EnableDitherFX Property Definitions ***********************************
void Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::NewProp_bInEnabledDitherFX_SetBit(void* Obj)
{
	((PlayerCameraManagerACS_eventEnableDitherFX_Parms*)Obj)->bInEnabledDitherFX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::NewProp_bInEnabledDitherFX = { "bInEnabledDitherFX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCameraManagerACS_eventEnableDitherFX_Parms), &Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::NewProp_bInEnabledDitherFX_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::NewProp_bInEnabledDitherFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::PropPointers) < 2048);
// ********** End Function EnableDitherFX Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "EnableDitherFX", 	Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::PlayerCameraManagerACS_eventEnableDitherFX_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::PlayerCameraManagerACS_eventEnableDitherFX_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execEnableDitherFX)
{
	P_GET_UBOOL(Z_Param_bInEnabledDitherFX);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableDitherFX(Z_Param_bInEnabledDitherFX);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function EnableDitherFX ****************************

// ********** Begin Class APlayerCameraManagerACS Function GetCameraComponent **********************
struct Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics
{
	struct PlayerCameraManagerACS_eventGetCameraComponent_Parms
	{
		UCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCameraComponent constinit property declarations ********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCameraComponent constinit property declarations **********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCameraComponent Property Definitions *******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventGetCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::PropPointers) < 2048);
// ********** End Function GetCameraComponent Property Definitions *********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "GetCameraComponent", 	Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::PlayerCameraManagerACS_eventGetCameraComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::PlayerCameraManagerACS_eventGetCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execGetCameraComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCameraComponent**)Z_Param__Result=P_THIS->GetCameraComponent();
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function GetCameraComponent ************************

// ********** Begin Class APlayerCameraManagerACS Function GetCurrentCameraModeSettings ************
struct Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics
{
	struct PlayerCameraManagerACS_eventGetCurrentCameraModeSettings_Parms
	{
		UPermanentCameraMode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCurrentCameraModeSettings constinit property declarations **********
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCurrentCameraModeSettings constinit property declarations ************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCurrentCameraModeSettings Property Definitions *********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventGetCurrentCameraModeSettings_Parms, ReturnValue), Z_Construct_UClass_UPermanentCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::PropPointers) < 2048);
// ********** End Function GetCurrentCameraModeSettings Property Definitions ***********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "GetCurrentCameraModeSettings", 	Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::PlayerCameraManagerACS_eventGetCurrentCameraModeSettings_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::PlayerCameraManagerACS_eventGetCurrentCameraModeSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execGetCurrentCameraModeSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPermanentCameraMode**)Z_Param__Result=P_THIS->GetCurrentCameraModeSettings();
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function GetCurrentCameraModeSettings **************

// ********** Begin Class APlayerCameraManagerACS Function GetSpringArmComponent *******************
struct Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics
{
	struct PlayerCameraManagerACS_eventGetSpringArmComponent_Parms
	{
		USpringArmComponentACS* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpringArmComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpringArmComponent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpringArmComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventGetSpringArmComponent_Parms, ReturnValue), Z_Construct_UClass_USpringArmComponentACS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::PropPointers) < 2048);
// ********** End Function GetSpringArmComponent Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "GetSpringArmComponent", 	Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::PlayerCameraManagerACS_eventGetSpringArmComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::PlayerCameraManagerACS_eventGetSpringArmComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execGetSpringArmComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USpringArmComponentACS**)Z_Param__Result=P_THIS->GetSpringArmComponent();
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function GetSpringArmComponent *********************

// ********** Begin Class APlayerCameraManagerACS Function IsOneTimeCameraModeApplied **************
struct Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics
{
	struct PlayerCameraManagerACS_eventIsOneTimeCameraModeApplied_Parms
	{
		const UOneTimeCameraMode* OneTimeCameraMode;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeCameraMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function IsOneTimeCameraModeApplied constinit property declarations ************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OneTimeCameraMode;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function IsOneTimeCameraModeApplied constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function IsOneTimeCameraModeApplied Property Definitions ***********************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::NewProp_OneTimeCameraMode = { "OneTimeCameraMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventIsOneTimeCameraModeApplied_Parms, OneTimeCameraMode), Z_Construct_UClass_UOneTimeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeCameraMode_MetaData), NewProp_OneTimeCameraMode_MetaData) };
void Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerCameraManagerACS_eventIsOneTimeCameraModeApplied_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCameraManagerACS_eventIsOneTimeCameraModeApplied_Parms), &Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::NewProp_OneTimeCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::PropPointers) < 2048);
// ********** End Function IsOneTimeCameraModeApplied Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "IsOneTimeCameraModeApplied", 	Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::PlayerCameraManagerACS_eventIsOneTimeCameraModeApplied_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::PlayerCameraManagerACS_eventIsOneTimeCameraModeApplied_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execIsOneTimeCameraModeApplied)
{
	P_GET_OBJECT(UOneTimeCameraMode,Z_Param_OneTimeCameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOneTimeCameraModeApplied(Z_Param_OneTimeCameraMode);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function IsOneTimeCameraModeApplied ****************

// ********** Begin Class APlayerCameraManagerACS Function RemoveOneTimeCameraMode *****************
struct Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics
{
	struct PlayerCameraManagerACS_eventRemoveOneTimeCameraMode_Parms
	{
		const UOneTimeCameraMode* OneTimeCameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeCameraMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function RemoveOneTimeCameraMode constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OneTimeCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RemoveOneTimeCameraMode constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RemoveOneTimeCameraMode Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::NewProp_OneTimeCameraMode = { "OneTimeCameraMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventRemoveOneTimeCameraMode_Parms, OneTimeCameraMode), Z_Construct_UClass_UOneTimeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeCameraMode_MetaData), NewProp_OneTimeCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::NewProp_OneTimeCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::PropPointers) < 2048);
// ********** End Function RemoveOneTimeCameraMode Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "RemoveOneTimeCameraMode", 	Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::PlayerCameraManagerACS_eventRemoveOneTimeCameraMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::PlayerCameraManagerACS_eventRemoveOneTimeCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execRemoveOneTimeCameraMode)
{
	P_GET_OBJECT(UOneTimeCameraMode,Z_Param_OneTimeCameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveOneTimeCameraMode(Z_Param_OneTimeCameraMode);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function RemoveOneTimeCameraMode *******************

// ********** Begin Class APlayerCameraManagerACS Function ToggleOneTimeCameraMode *****************
struct Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics
{
	struct PlayerCameraManagerACS_eventToggleOneTimeCameraMode_Parms
	{
		const UOneTimeCameraMode* OneTimeCameraMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeCameraMode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleOneTimeCameraMode constinit property declarations ***************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OneTimeCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToggleOneTimeCameraMode constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToggleOneTimeCameraMode Property Definitions **************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::NewProp_OneTimeCameraMode = { "OneTimeCameraMode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventToggleOneTimeCameraMode_Parms, OneTimeCameraMode), Z_Construct_UClass_UOneTimeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeCameraMode_MetaData), NewProp_OneTimeCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::NewProp_OneTimeCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::PropPointers) < 2048);
// ********** End Function ToggleOneTimeCameraMode Property Definitions ****************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "ToggleOneTimeCameraMode", 	Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::PlayerCameraManagerACS_eventToggleOneTimeCameraMode_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::PlayerCameraManagerACS_eventToggleOneTimeCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execToggleOneTimeCameraMode)
{
	P_GET_OBJECT(UOneTimeCameraMode,Z_Param_OneTimeCameraMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleOneTimeCameraMode(Z_Param_OneTimeCameraMode);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function ToggleOneTimeCameraMode *******************

// ********** Begin Class APlayerCameraManagerACS Function ToggleOneTimeCameraModeByClass **********
struct Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics
{
	struct PlayerCameraManagerACS_eventToggleOneTimeCameraModeByClass_Parms
	{
		const TSubclassOf<UOneTimeCameraMode> OneTimeCameraModeClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeCameraModeClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function ToggleOneTimeCameraModeByClass constinit property declarations ********
	static const UECodeGen_Private::FClassPropertyParams NewProp_OneTimeCameraModeClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function ToggleOneTimeCameraModeByClass constinit property declarations **********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function ToggleOneTimeCameraModeByClass Property Definitions *******************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::NewProp_OneTimeCameraModeClass = { "OneTimeCameraModeClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCameraManagerACS_eventToggleOneTimeCameraModeByClass_Parms, OneTimeCameraModeClass), Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UOneTimeCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeCameraModeClass_MetaData), NewProp_OneTimeCameraModeClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::NewProp_OneTimeCameraModeClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::PropPointers) < 2048);
// ********** End Function ToggleOneTimeCameraModeByClass Property Definitions *********************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCameraManagerACS, nullptr, "ToggleOneTimeCameraModeByClass", 	Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::PlayerCameraManagerACS_eventToggleOneTimeCameraModeByClass_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::PlayerCameraManagerACS_eventToggleOneTimeCameraModeByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCameraManagerACS::execToggleOneTimeCameraModeByClass)
{
	P_GET_OBJECT_REF_NO_PTR(TSubclassOf<UOneTimeCameraMode>,Z_Param_Out_OneTimeCameraModeClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleOneTimeCameraModeByClass(Z_Param_Out_OneTimeCameraModeClass);
	P_NATIVE_END;
}
// ********** End Class APlayerCameraManagerACS Function ToggleOneTimeCameraModeByClass ************

// ********** Begin Class APlayerCameraManagerACS **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerCameraManagerACS;
UClass* APlayerCameraManagerACS::GetPrivateStaticClass()
{
	using TClass = APlayerCameraManagerACS;
	if (!Z_Registration_Info_UClass_APlayerCameraManagerACS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PlayerCameraManagerACS"),
			Z_Registration_Info_UClass_APlayerCameraManagerACS.InnerSingleton,
			StaticRegisterNativesAPlayerCameraManagerACS,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_APlayerCameraManagerACS.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerCameraManagerACS_NoRegister()
{
	return APlayerCameraManagerACS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerCameraManagerACS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PlayerCameraManagerACS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineOfSightProbeSize_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LostOfSightProbeChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDitherFX_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If the character have any Dither FX applying to avoid the camera clip with the mesh, turn this True.\n" },
#endif
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the character have any Dither FX applying to avoid the camera clip with the mesh, turn this True." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCameraModeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneTimeCameraModesApplied_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpringArm_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PlayerCameraManagerACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class APlayerCameraManagerACS constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LineOfSightProbeSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LostOfSightProbeChannel;
	static void NewProp_bUseDitherFX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDitherFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCameraModeSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OneTimeCameraModesApplied_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OneTimeCameraModesApplied_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OneTimeCameraModesApplied;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentCamera;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class APlayerCameraManagerACS constinit property declarations ********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ApplyCameraModeSettings"), .Pointer = &APlayerCameraManagerACS::execApplyCameraModeSettings },
		{ .NameUTF8 = UTF8TEXT("ApplyCameraModeSettingsByClass"), .Pointer = &APlayerCameraManagerACS::execApplyCameraModeSettingsByClass },
		{ .NameUTF8 = UTF8TEXT("ApplyOneTimeCameraMode"), .Pointer = &APlayerCameraManagerACS::execApplyOneTimeCameraMode },
		{ .NameUTF8 = UTF8TEXT("ApplyOneTimeCameraModeByClass"), .Pointer = &APlayerCameraManagerACS::execApplyOneTimeCameraModeByClass },
		{ .NameUTF8 = UTF8TEXT("CalculateDitherEffect"), .Pointer = &APlayerCameraManagerACS::execCalculateDitherEffect },
		{ .NameUTF8 = UTF8TEXT("EnableDitherFX"), .Pointer = &APlayerCameraManagerACS::execEnableDitherFX },
		{ .NameUTF8 = UTF8TEXT("GetCameraComponent"), .Pointer = &APlayerCameraManagerACS::execGetCameraComponent },
		{ .NameUTF8 = UTF8TEXT("GetCurrentCameraModeSettings"), .Pointer = &APlayerCameraManagerACS::execGetCurrentCameraModeSettings },
		{ .NameUTF8 = UTF8TEXT("GetSpringArmComponent"), .Pointer = &APlayerCameraManagerACS::execGetSpringArmComponent },
		{ .NameUTF8 = UTF8TEXT("IsOneTimeCameraModeApplied"), .Pointer = &APlayerCameraManagerACS::execIsOneTimeCameraModeApplied },
		{ .NameUTF8 = UTF8TEXT("RemoveOneTimeCameraMode"), .Pointer = &APlayerCameraManagerACS::execRemoveOneTimeCameraMode },
		{ .NameUTF8 = UTF8TEXT("ToggleOneTimeCameraMode"), .Pointer = &APlayerCameraManagerACS::execToggleOneTimeCameraMode },
		{ .NameUTF8 = UTF8TEXT("ToggleOneTimeCameraModeByClass"), .Pointer = &APlayerCameraManagerACS::execToggleOneTimeCameraModeByClass },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettings, "ApplyCameraModeSettings" }, // 3093982713
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_ApplyCameraModeSettingsByClass, "ApplyCameraModeSettingsByClass" }, // 480476961
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraMode, "ApplyOneTimeCameraMode" }, // 1157114579
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_ApplyOneTimeCameraModeByClass, "ApplyOneTimeCameraModeByClass" }, // 221777209
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_CalculateDitherEffect, "CalculateDitherEffect" }, // 2140639921
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_EnableDitherFX, "EnableDitherFX" }, // 2413384569
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_GetCameraComponent, "GetCameraComponent" }, // 456384401
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_GetCurrentCameraModeSettings, "GetCurrentCameraModeSettings" }, // 493714102
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_GetSpringArmComponent, "GetSpringArmComponent" }, // 1320141631
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_IsOneTimeCameraModeApplied, "IsOneTimeCameraModeApplied" }, // 4086801554
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_RemoveOneTimeCameraMode, "RemoveOneTimeCameraMode" }, // 2226349593
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraMode, "ToggleOneTimeCameraMode" }, // 1746305022
		{ &Z_Construct_UFunction_APlayerCameraManagerACS_ToggleOneTimeCameraModeByClass, "ToggleOneTimeCameraModeByClass" }, // 2396927049
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraManagerACS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_APlayerCameraManagerACS_Statics

// ********** Begin Class APlayerCameraManagerACS Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_LineOfSightProbeSize = { "LineOfSightProbeSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraManagerACS, LineOfSightProbeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineOfSightProbeSize_MetaData), NewProp_LineOfSightProbeSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_LostOfSightProbeChannel = { "LostOfSightProbeChannel", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraManagerACS, LostOfSightProbeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LostOfSightProbeChannel_MetaData), NewProp_LostOfSightProbeChannel_MetaData) }; // 838391399
void Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_bUseDitherFX_SetBit(void* Obj)
{
	((APlayerCameraManagerACS*)Obj)->bUseDitherFX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_bUseDitherFX = { "bUseDitherFX", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerCameraManagerACS), &Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_bUseDitherFX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDitherFX_MetaData), NewProp_bUseDitherFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_CurrentCameraModeSettings = { "CurrentCameraModeSettings", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraManagerACS, CurrentCameraModeSettings), Z_Construct_UClass_UPermanentCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCameraModeSettings_MetaData), NewProp_CurrentCameraModeSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_OneTimeCameraModesApplied_ValueProp = { "OneTimeCameraModesApplied", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UOneTimeCameraMode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_OneTimeCameraModesApplied_Key_KeyProp = { "OneTimeCameraModesApplied_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_OneTimeCameraModesApplied = { "OneTimeCameraModesApplied", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraManagerACS, OneTimeCameraModesApplied), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneTimeCameraModesApplied_MetaData), NewProp_OneTimeCameraModesApplied_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_CurrentSpringArm = { "CurrentSpringArm", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraManagerACS, CurrentSpringArm), Z_Construct_UClass_USpringArmComponentACS_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpringArm_MetaData), NewProp_CurrentSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_CurrentCamera = { "CurrentCamera", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraManagerACS, CurrentCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentCamera_MetaData), NewProp_CurrentCamera_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCameraManagerACS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_LineOfSightProbeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_LostOfSightProbeChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_bUseDitherFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_CurrentCameraModeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_OneTimeCameraModesApplied_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_OneTimeCameraModesApplied_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_OneTimeCameraModesApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_CurrentSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraManagerACS_Statics::NewProp_CurrentCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManagerACS_Statics::PropPointers) < 2048);
// ********** End Class APlayerCameraManagerACS Property Definitions *******************************
UObject* (*const Z_Construct_UClass_APlayerCameraManagerACS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManagerACS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraManagerACS_Statics::ClassParams = {
	&APlayerCameraManagerACS::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCameraManagerACS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManagerACS_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraManagerACS_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCameraManagerACS_Statics::Class_MetaDataParams)
};
void APlayerCameraManagerACS::StaticRegisterNativesAPlayerCameraManagerACS()
{
	UClass* Class = APlayerCameraManagerACS::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_APlayerCameraManagerACS_Statics::Funcs));
}
UClass* Z_Construct_UClass_APlayerCameraManagerACS()
{
	if (!Z_Registration_Info_UClass_APlayerCameraManagerACS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCameraManagerACS.OuterSingleton, Z_Construct_UClass_APlayerCameraManagerACS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCameraManagerACS.OuterSingleton;
}
APlayerCameraManagerACS::APlayerCameraManagerACS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, APlayerCameraManagerACS);
APlayerCameraManagerACS::~APlayerCameraManagerACS() {}
// ********** End Class APlayerCameraManagerACS ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCameraManagerACS, APlayerCameraManagerACS::StaticClass, TEXT("APlayerCameraManagerACS"), &Z_Registration_Info_UClass_APlayerCameraManagerACS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCameraManagerACS), 435577346U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h__Script_ACamSys_3400836191{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_PlayerCameraManagerACS_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
