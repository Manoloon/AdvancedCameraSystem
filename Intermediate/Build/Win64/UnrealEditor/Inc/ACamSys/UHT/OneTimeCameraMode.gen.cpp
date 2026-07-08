// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modes/OneTimeCameraMode.h"
#include "Structs/SettingsStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeOneTimeCameraMode() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_UOneTimeCameraMode();
ACAMSYS_API UClass* Z_Construct_UClass_UOneTimeCameraMode_NoRegister();
ACAMSYS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraConfig();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOneTimeCameraMode *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UOneTimeCameraMode;
UClass* UOneTimeCameraMode::GetPrivateStaticClass()
{
	using TClass = UOneTimeCameraMode;
	if (!Z_Registration_Info_UClass_UOneTimeCameraMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("OneTimeCameraMode"),
			Z_Registration_Info_UClass_UOneTimeCameraMode.InnerSingleton,
			StaticRegisterNativesUOneTimeCameraMode,
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
	return Z_Registration_Info_UClass_UOneTimeCameraMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UOneTimeCameraMode_NoRegister()
{
	return UOneTimeCameraMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOneTimeCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Modes/OneTimeCameraMode.h" },
		{ "ModuleRelativePath", "Public/Modes/OneTimeCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectDuration_MetaData[] = {
		{ "Category", "OneTimeCameraMode" },
		{ "ModuleRelativePath", "Public/Modes/OneTimeCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraModeDisable_MetaData[] = {
		{ "Category", "OneTimeCameraMode" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// if True disable any camera mode running at that time.\n// If true : the Arm length will apply changes using target length, otherwise will limit by min and max arm length.\n" },
#endif
		{ "ModuleRelativePath", "Public/Modes/OneTimeCameraMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if True disable any camera mode running at that time.\nIf true : the Arm length will apply changes using target length, otherwise will limit by min and max arm length." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraModifierDisable_MetaData[] = {
		{ "Category", "OneTimeCameraMode" },
		{ "EditCondition", "bCameraModeDisable == false" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Modes/OneTimeCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraConfig_MetaData[] = {
		{ "Category", "OneTimeCameraMode" },
		{ "ModuleRelativePath", "Public/Modes/OneTimeCameraMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UOneTimeCameraMode constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectDuration;
	static void NewProp_bCameraModeDisable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraModeDisable;
	static void NewProp_bCameraModifierDisable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraModifierDisable;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UOneTimeCameraMode constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneTimeCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UOneTimeCameraMode_Statics

// ********** Begin Class UOneTimeCameraMode Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_EffectDuration = { "EffectDuration", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOneTimeCameraMode, EffectDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectDuration_MetaData), NewProp_EffectDuration_MetaData) };
void Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModeDisable_SetBit(void* Obj)
{
	((UOneTimeCameraMode*)Obj)->bCameraModeDisable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModeDisable = { "bCameraModeDisable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOneTimeCameraMode), &Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModeDisable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraModeDisable_MetaData), NewProp_bCameraModeDisable_MetaData) };
void Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModifierDisable_SetBit(void* Obj)
{
	((UOneTimeCameraMode*)Obj)->bCameraModifierDisable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModifierDisable = { "bCameraModifierDisable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOneTimeCameraMode), &Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModifierDisable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraModifierDisable_MetaData), NewProp_bCameraModifierDisable_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_CameraConfig = { "CameraConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOneTimeCameraMode, CameraConfig), Z_Construct_UScriptStruct_FCameraConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraConfig_MetaData), NewProp_CameraConfig_MetaData) }; // 964521586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOneTimeCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_EffectDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModeDisable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_bCameraModifierDisable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneTimeCameraMode_Statics::NewProp_CameraConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOneTimeCameraMode_Statics::PropPointers) < 2048);
// ********** End Class UOneTimeCameraMode Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UOneTimeCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOneTimeCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOneTimeCameraMode_Statics::ClassParams = {
	&UOneTimeCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOneTimeCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOneTimeCameraMode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOneTimeCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UOneTimeCameraMode_Statics::Class_MetaDataParams)
};
void UOneTimeCameraMode::StaticRegisterNativesUOneTimeCameraMode()
{
}
UClass* Z_Construct_UClass_UOneTimeCameraMode()
{
	if (!Z_Registration_Info_UClass_UOneTimeCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOneTimeCameraMode.OuterSingleton, Z_Construct_UClass_UOneTimeCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOneTimeCameraMode.OuterSingleton;
}
UOneTimeCameraMode::UOneTimeCameraMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UOneTimeCameraMode);
UOneTimeCameraMode::~UOneTimeCameraMode() {}
// ********** End Class UOneTimeCameraMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOneTimeCameraMode, UOneTimeCameraMode::StaticClass, TEXT("UOneTimeCameraMode"), &Z_Registration_Info_UClass_UOneTimeCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOneTimeCameraMode), 796682118U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h__Script_ACamSys_3446175658{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_OneTimeCameraMode_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
