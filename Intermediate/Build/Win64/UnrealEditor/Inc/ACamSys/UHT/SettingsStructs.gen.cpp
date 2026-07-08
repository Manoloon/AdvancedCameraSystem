// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Structs/SettingsStructs.h"
#include "Engine/Scene.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSettingsStructs() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraConfig();
ACAMSYS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFOVConfig();
ACAMSYS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraRotationConfig();
ACAMSYS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraSpringArmConfig();
ACAMSYS_API UScriptStruct* Z_Construct_UScriptStruct_FCamInfoForModifiers();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCameraSpringArmConfig ********************************************
struct Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCameraSpringArmConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCameraSpringArmConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmLengthModifier_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO : See this how its apply\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO : See this how its apply" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmLengthTransitionSpeed_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// represents the rate or speed at which the Spring Arm Length changes over time (units per second)\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "represents the rate or speed at which the Spring Arm Length changes over time (units per second)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetTransitionSpeed_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// represents the rate or speed at which the SocketOffset value changes over time (units per second)\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "represents the rate or speed at which the SocketOffset value changes over time (units per second)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketOffsetModifier_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO : See this how its apply\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO : See this how its apply" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetOffset_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraLocationLag_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocationLagSpeed_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// represents the rate or speed at which the CameraLocation reach target location (units per second)\n" },
#endif
		{ "EditCondition", "bCameraLocationLag" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "represents the rate or speed at which the CameraLocation reach target location (units per second)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraLocationLagCurve_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
		{ "EditCondition", "bCameraLocationLag" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLagDistance_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
		{ "EditCondition", "bCameraLocationLag" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraRotationLag_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationLagSpeed_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// represents the rate or speed at which the cameraRotation reach target rotation (units per second)\n" },
#endif
		{ "EditCondition", "bCameraRotationLag" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "represents the rate or speed at which the cameraRotation reach target rotation (units per second)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotationLagCurve_MetaData[] = {
		{ "Category", "CameraSpringArmConfig" },
		{ "EditCondition", "bCameraRotationLag" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCameraSpringArmConfig constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringArmLengthModifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringArmLengthTransitionSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SocketOffsetTransitionSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SocketOffsetModifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOffset;
	static void NewProp_bCameraLocationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraLocationLag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraLocationLagSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraLocationLagCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLagDistance;
	static void NewProp_bCameraRotationLag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraRotationLag;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraRotationLagSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraRotationLagCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCameraSpringArmConfig constinit property declarations **************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraSpringArmConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig;
class UScriptStruct* FCameraSpringArmConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraSpringArmConfig, (UObject*)Z_Construct_UPackage__Script_ACamSys(), TEXT("CameraSpringArmConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FCameraSpringArmConfig Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SpringArmLengthModifier = { "SpringArmLengthModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, SpringArmLengthModifier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmLengthModifier_MetaData), NewProp_SpringArmLengthModifier_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SpringArmLengthTransitionSpeed = { "SpringArmLengthTransitionSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, SpringArmLengthTransitionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmLengthTransitionSpeed_MetaData), NewProp_SpringArmLengthTransitionSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SocketOffsetTransitionSpeed = { "SocketOffsetTransitionSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, SocketOffsetTransitionSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetTransitionSpeed_MetaData), NewProp_SocketOffsetTransitionSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SocketOffsetModifier = { "SocketOffsetModifier", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, SocketOffsetModifier), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketOffsetModifier_MetaData), NewProp_SocketOffsetModifier_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_TargetOffset = { "TargetOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, TargetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetOffset_MetaData), NewProp_TargetOffset_MetaData) };
void Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraLocationLag_SetBit(void* Obj)
{
	((FCameraSpringArmConfig*)Obj)->bCameraLocationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraLocationLag = { "bCameraLocationLag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraSpringArmConfig), &Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraLocationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraLocationLag_MetaData), NewProp_bCameraLocationLag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraLocationLagSpeed = { "CameraLocationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, CameraLocationLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLocationLagSpeed_MetaData), NewProp_CameraLocationLagSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraLocationLagCurve = { "CameraLocationLagCurve", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, CameraLocationLagCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraLocationLagCurve_MetaData), NewProp_CameraLocationLagCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_MaxLagDistance = { "MaxLagDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, MaxLagDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLagDistance_MetaData), NewProp_MaxLagDistance_MetaData) };
void Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraRotationLag_SetBit(void* Obj)
{
	((FCameraSpringArmConfig*)Obj)->bCameraRotationLag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraRotationLag = { "bCameraRotationLag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCameraSpringArmConfig), &Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraRotationLag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraRotationLag_MetaData), NewProp_bCameraRotationLag_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraRotationLagSpeed = { "CameraRotationLagSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, CameraRotationLagSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationLagSpeed_MetaData), NewProp_CameraRotationLagSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraRotationLagCurve = { "CameraRotationLagCurve", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraSpringArmConfig, CameraRotationLagCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotationLagCurve_MetaData), NewProp_CameraRotationLagCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SpringArmLengthModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SpringArmLengthTransitionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SocketOffsetTransitionSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_SocketOffsetModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_TargetOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraLocationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraLocationLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraLocationLagCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_MaxLagDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_bCameraRotationLag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraRotationLagSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewProp_CameraRotationLagCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCameraSpringArmConfig Property Definitions *************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
	nullptr,
	&NewStructOps,
	"CameraSpringArmConfig",
	Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::PropPointers),
	sizeof(FCameraSpringArmConfig),
	alignof(FCameraSpringArmConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraSpringArmConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig.InnerSingleton, Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig.InnerSingleton);
}
// ********** End ScriptStruct FCameraSpringArmConfig **********************************************

// ********** Begin ScriptStruct FCameraFOVConfig **************************************************
struct Z_Construct_UScriptStruct_FCameraFOVConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCameraFOVConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCameraFOVConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinFOV_MetaData[] = {
		{ "Category", "CameraFOVConfig" },
		{ "ClampMax", "70.000000" },
		{ "ClampMin", "20.000000" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFOV_MetaData[] = {
		{ "Category", "CameraFOVConfig" },
		{ "ClampMax", "120.000000" },
		{ "ClampMin", "50.000000" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
		{ "Category", "CameraFOVConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVLerpSpeed_MetaData[] = {
		{ "Category", "CameraFOVConfig" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.001000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// represents the rate or speed at which the FOV value changes over time (units per second)\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "represents the rate or speed at which the FOV value changes over time (units per second)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCameraFOVConfig constinit property declarations ******************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVLerpSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCameraFOVConfig constinit property declarations ********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraFOVConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCameraFOVConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraFOVConfig;
class UScriptStruct* FCameraFOVConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraFOVConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraFOVConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraFOVConfig, (UObject*)Z_Construct_UPackage__Script_ACamSys(), TEXT("CameraFOVConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraFOVConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FCameraFOVConfig Property Definitions *****************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_MinFOV = { "MinFOV", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVConfig, MinFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinFOV_MetaData), NewProp_MinFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_MaxFOV = { "MaxFOV", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVConfig, MaxFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFOV_MetaData), NewProp_MaxFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVConfig, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_MetaData), NewProp_FOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_FOVLerpSpeed = { "FOVLerpSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraFOVConfig, FOVLerpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVLerpSpeed_MetaData), NewProp_FOVLerpSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_MinFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_MaxFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewProp_FOVLerpSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCameraFOVConfig Property Definitions *******************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
	nullptr,
	&NewStructOps,
	"CameraFOVConfig",
	Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::PropPointers),
	sizeof(FCameraFOVConfig),
	alignof(FCameraFOVConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraFOVConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraFOVConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraFOVConfig.InnerSingleton, Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCameraFOVConfig.InnerSingleton);
}
// ********** End ScriptStruct FCameraFOVConfig ****************************************************

// ********** Begin ScriptStruct FCameraRotationConfig *********************************************
struct Z_Construct_UScriptStruct_FCameraRotationConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCameraRotationConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCameraRotationConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPitch_MetaData[] = {
		{ "Category", "CameraRotationConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitch_MetaData[] = {
		{ "Category", "CameraRotationConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YawRange_MetaData[] = {
		{ "Category", "CameraRotationConfig" },
		{ "ClampMax", "179.999893" },
		{ "ClampMin", "-179.999893" },
		{ "ForceUnits", "deg" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
		{ "UIMax", "179.999893" },
		{ "UIMin", "-179.999893" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCameraRotationConfig constinit property declarations *************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_YawRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCameraRotationConfig constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraRotationConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCameraRotationConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraRotationConfig;
class UScriptStruct* FCameraRotationConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraRotationConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraRotationConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraRotationConfig, (UObject*)Z_Construct_UPackage__Script_ACamSys(), TEXT("CameraRotationConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraRotationConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FCameraRotationConfig Property Definitions ************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::NewProp_MinPitch = { "MinPitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRotationConfig, MinPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPitch_MetaData), NewProp_MinPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::NewProp_MaxPitch = { "MaxPitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRotationConfig, MaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitch_MetaData), NewProp_MaxPitch_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::NewProp_YawRange = { "YawRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraRotationConfig, YawRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YawRange_MetaData), NewProp_YawRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::NewProp_MinPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::NewProp_MaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::NewProp_YawRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCameraRotationConfig Property Definitions **************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
	nullptr,
	&NewStructOps,
	"CameraRotationConfig",
	Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::PropPointers),
	sizeof(FCameraRotationConfig),
	alignof(FCameraRotationConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraRotationConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraRotationConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraRotationConfig.InnerSingleton, Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCameraRotationConfig.InnerSingleton);
}
// ********** End ScriptStruct FCameraRotationConfig ***********************************************

// ********** Begin ScriptStruct FCameraConfig *****************************************************
struct Z_Construct_UScriptStruct_FCameraConfig_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCameraConfig); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCameraConfig); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLineOfSight_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLineOfSight_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceCamPlayer_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ClampMax", "200.000000" },
		{ "ClampMin", "100.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\x09This values could be use to handle dither FX on the character\n\x09 *\x09to avoid clipping with the camera.\n\x09 *\x09To use this values you need to turn true the var bUseDitherFX in the CameraManagerACS\n\x09 *\x09Max distance from the player for DitherFX\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This values could be use to handle dither FX on the character\n*      to avoid clipping with the camera.\n*      To use this values you need to turn true the var bUseDitherFX in the CameraManagerACS\n*      Max distance from the player for DitherFX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceCamPlayer_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ClampMax", "120.000000" },
		{ "ClampMin", "20.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Min distance from the player for Activate DitherFX\n" },
#endif
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min distance from the player for Activate DitherFX" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmSettings_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVSettings_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CamRotationSettings_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CamPostProcessSettings_MetaData[] = {
		{ "Category", "CameraConfig" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCameraConfig constinit property declarations *********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinLineOfSight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxLineOfSight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceCamPlayer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceCamPlayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringArmSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FOVSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CamRotationSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CamPostProcessSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCameraConfig constinit property declarations ***********************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCameraConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCameraConfig_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCameraConfig;
class UScriptStruct* FCameraConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCameraConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCameraConfig, (UObject*)Z_Construct_UPackage__Script_ACamSys(), TEXT("CameraConfig"));
	}
	return Z_Registration_Info_UScriptStruct_FCameraConfig.OuterSingleton;
	}

// ********** Begin ScriptStruct FCameraConfig Property Definitions ********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinLineOfSight = { "MinLineOfSight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, MinLineOfSight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLineOfSight_MetaData), NewProp_MinLineOfSight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxLineOfSight = { "MaxLineOfSight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, MaxLineOfSight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLineOfSight_MetaData), NewProp_MaxLineOfSight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxDistanceCamPlayer = { "MaxDistanceCamPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, MaxDistanceCamPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceCamPlayer_MetaData), NewProp_MaxDistanceCamPlayer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinDistanceCamPlayer = { "MinDistanceCamPlayer", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, MinDistanceCamPlayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistanceCamPlayer_MetaData), NewProp_MinDistanceCamPlayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_SpringArmSettings = { "SpringArmSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, SpringArmSettings), Z_Construct_UScriptStruct_FCameraSpringArmConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmSettings_MetaData), NewProp_SpringArmSettings_MetaData) }; // 1492271212
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_FOVSettings = { "FOVSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, FOVSettings), Z_Construct_UScriptStruct_FCameraFOVConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVSettings_MetaData), NewProp_FOVSettings_MetaData) }; // 1060288512
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CamRotationSettings = { "CamRotationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, CamRotationSettings), Z_Construct_UScriptStruct_FCameraRotationConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CamRotationSettings_MetaData), NewProp_CamRotationSettings_MetaData) }; // 1562697613
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CamPostProcessSettings = { "CamPostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCameraConfig, CamPostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CamPostProcessSettings_MetaData), NewProp_CamPostProcessSettings_MetaData) }; // 4126336051
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCameraConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxLineOfSight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MaxDistanceCamPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_MinDistanceCamPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_SpringArmSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_FOVSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CamRotationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCameraConfig_Statics::NewProp_CamPostProcessSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCameraConfig Property Definitions **********************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCameraConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
	nullptr,
	&NewStructOps,
	"CameraConfig",
	Z_Construct_UScriptStruct_FCameraConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::PropPointers),
	sizeof(FCameraConfig),
	alignof(FCameraConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCameraConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCameraConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCameraConfig()
{
	if (!Z_Registration_Info_UScriptStruct_FCameraConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCameraConfig.InnerSingleton, Z_Construct_UScriptStruct_FCameraConfig_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCameraConfig.InnerSingleton);
}
// ********** End ScriptStruct FCameraConfig *******************************************************

// ********** Begin ScriptStruct FCamInfoForModifiers **********************************************
struct Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FCamInfoForModifiers); }
	static inline consteval int16 GetStructAlignment() { return alignof(FCamInfoForModifiers); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmLength_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DOF_FocalDistance_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmSocketOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Structs/SettingsStructs.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FCamInfoForModifiers constinit property declarations **************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringArmLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DOF_FocalDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpringArmSocketOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FCamInfoForModifiers constinit property declarations ****************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCamInfoForModifiers>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCamInfoForModifiers;
class UScriptStruct* FCamInfoForModifiers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCamInfoForModifiers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCamInfoForModifiers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCamInfoForModifiers, (UObject*)Z_Construct_UPackage__Script_ACamSys(), TEXT("CamInfoForModifiers"));
	}
	return Z_Registration_Info_UScriptStruct_FCamInfoForModifiers.OuterSingleton;
	}

// ********** Begin ScriptStruct FCamInfoForModifiers Property Definitions *************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCamInfoForModifiers, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_MetaData), NewProp_FOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_SpringArmLength = { "SpringArmLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCamInfoForModifiers, SpringArmLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmLength_MetaData), NewProp_SpringArmLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_DOF_FocalDistance = { "DOF_FocalDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCamInfoForModifiers, DOF_FocalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DOF_FocalDistance_MetaData), NewProp_DOF_FocalDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_SpringArmSocketOffset = { "SpringArmSocketOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCamInfoForModifiers, SpringArmSocketOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmSocketOffset_MetaData), NewProp_SpringArmSocketOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_SpringArmLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_DOF_FocalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewProp_SpringArmSocketOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FCamInfoForModifiers Property Definitions ***************************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
	nullptr,
	&NewStructOps,
	"CamInfoForModifiers",
	Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::PropPointers),
	sizeof(FCamInfoForModifiers),
	alignof(FCamInfoForModifiers),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCamInfoForModifiers()
{
	if (!Z_Registration_Info_UScriptStruct_FCamInfoForModifiers.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCamInfoForModifiers.InnerSingleton, Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FCamInfoForModifiers.InnerSingleton);
}
// ********** End ScriptStruct FCamInfoForModifiers ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Structs_SettingsStructs_h__Script_ACamSys_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCameraSpringArmConfig::StaticStruct, Z_Construct_UScriptStruct_FCameraSpringArmConfig_Statics::NewStructOps, TEXT("CameraSpringArmConfig"),&Z_Registration_Info_UScriptStruct_FCameraSpringArmConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraSpringArmConfig), 1492271212U) },
		{ FCameraFOVConfig::StaticStruct, Z_Construct_UScriptStruct_FCameraFOVConfig_Statics::NewStructOps, TEXT("CameraFOVConfig"),&Z_Registration_Info_UScriptStruct_FCameraFOVConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraFOVConfig), 1060288512U) },
		{ FCameraRotationConfig::StaticStruct, Z_Construct_UScriptStruct_FCameraRotationConfig_Statics::NewStructOps, TEXT("CameraRotationConfig"),&Z_Registration_Info_UScriptStruct_FCameraRotationConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraRotationConfig), 1562697613U) },
		{ FCameraConfig::StaticStruct, Z_Construct_UScriptStruct_FCameraConfig_Statics::NewStructOps, TEXT("CameraConfig"),&Z_Registration_Info_UScriptStruct_FCameraConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCameraConfig), 964521586U) },
		{ FCamInfoForModifiers::StaticStruct, Z_Construct_UScriptStruct_FCamInfoForModifiers_Statics::NewStructOps, TEXT("CamInfoForModifiers"),&Z_Registration_Info_UScriptStruct_FCamInfoForModifiers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCamInfoForModifiers), 1278086453U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Structs_SettingsStructs_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Structs_SettingsStructs_h__Script_ACamSys_2296845211{
	TEXT("/Script/ACamSys"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Structs_SettingsStructs_h__Script_ACamSys_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Structs_SettingsStructs_h__Script_ACamSys_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
