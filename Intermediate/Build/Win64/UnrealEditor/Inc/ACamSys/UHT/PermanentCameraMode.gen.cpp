// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modes/PermanentCameraMode.h"
#include "Structs/SettingsStructs.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePermanentCameraMode() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_UPermanentCameraMode();
ACAMSYS_API UClass* Z_Construct_UClass_UPermanentCameraMode_NoRegister();
ACAMSYS_API UScriptStruct* Z_Construct_UScriptStruct_FCameraConfig();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UPermanentCameraMode *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPermanentCameraMode;
UClass* UPermanentCameraMode::GetPrivateStaticClass()
{
	using TClass = UPermanentCameraMode;
	if (!Z_Registration_Info_UClass_UPermanentCameraMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PermanentCameraMode"),
			Z_Registration_Info_UClass_UPermanentCameraMode.InnerSingleton,
			StaticRegisterNativesUPermanentCameraMode,
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
	return Z_Registration_Info_UClass_UPermanentCameraMode.InnerSingleton;
}
UClass* Z_Construct_UClass_UPermanentCameraMode_NoRegister()
{
	return UPermanentCameraMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPermanentCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Modes/PermanentCameraMode.h" },
		{ "ModuleRelativePath", "Public/Modes/PermanentCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModifiersToApply_MetaData[] = {
		{ "Category", "PermanentCameraMode" },
		{ "ModuleRelativePath", "Public/Modes/PermanentCameraMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraConfig_MetaData[] = {
		{ "Category", "PermanentCameraMode" },
		{ "ModuleRelativePath", "Public/Modes/PermanentCameraMode.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPermanentCameraMode constinit property declarations *********************
	static const UECodeGen_Private::FClassPropertyParams NewProp_CameraModifiersToApply_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CameraModifiersToApply;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UPermanentCameraMode constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPermanentCameraMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPermanentCameraMode_Statics

// ********** Begin Class UPermanentCameraMode Property Definitions ********************************
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPermanentCameraMode_Statics::NewProp_CameraModifiersToApply_Inner = { "CameraModifiersToApply", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass_NoRegister, Z_Construct_UClass_UCameraModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPermanentCameraMode_Statics::NewProp_CameraModifiersToApply = { "CameraModifiersToApply", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPermanentCameraMode, CameraModifiersToApply), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModifiersToApply_MetaData), NewProp_CameraModifiersToApply_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPermanentCameraMode_Statics::NewProp_CameraConfig = { "CameraConfig", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPermanentCameraMode, CameraConfig), Z_Construct_UScriptStruct_FCameraConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraConfig_MetaData), NewProp_CameraConfig_MetaData) }; // 964521586
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPermanentCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPermanentCameraMode_Statics::NewProp_CameraModifiersToApply_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPermanentCameraMode_Statics::NewProp_CameraModifiersToApply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPermanentCameraMode_Statics::NewProp_CameraConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPermanentCameraMode_Statics::PropPointers) < 2048);
// ********** End Class UPermanentCameraMode Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UPermanentCameraMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPermanentCameraMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPermanentCameraMode_Statics::ClassParams = {
	&UPermanentCameraMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPermanentCameraMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPermanentCameraMode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPermanentCameraMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UPermanentCameraMode_Statics::Class_MetaDataParams)
};
void UPermanentCameraMode::StaticRegisterNativesUPermanentCameraMode()
{
}
UClass* Z_Construct_UClass_UPermanentCameraMode()
{
	if (!Z_Registration_Info_UClass_UPermanentCameraMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPermanentCameraMode.OuterSingleton, Z_Construct_UClass_UPermanentCameraMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPermanentCameraMode.OuterSingleton;
}
UPermanentCameraMode::UPermanentCameraMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPermanentCameraMode);
UPermanentCameraMode::~UPermanentCameraMode() {}
// ********** End Class UPermanentCameraMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPermanentCameraMode, UPermanentCameraMode::StaticClass, TEXT("UPermanentCameraMode"), &Z_Registration_Info_UClass_UPermanentCameraMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPermanentCameraMode), 1869907496U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h__Script_ACamSys_2108982127{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modes_PermanentCameraMode_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
