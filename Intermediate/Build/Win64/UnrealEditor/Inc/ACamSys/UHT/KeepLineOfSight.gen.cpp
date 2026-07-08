// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modifiers/KeepLineOfSight.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeKeepLineOfSight() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_UCameraModifierACS();
ACAMSYS_API UClass* Z_Construct_UClass_UKeepLineOfSight();
ACAMSYS_API UClass* Z_Construct_UClass_UKeepLineOfSight_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UKeepLineOfSight *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UKeepLineOfSight;
UClass* UKeepLineOfSight::GetPrivateStaticClass()
{
	using TClass = UKeepLineOfSight;
	if (!Z_Registration_Info_UClass_UKeepLineOfSight.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("KeepLineOfSight"),
			Z_Registration_Info_UClass_UKeepLineOfSight.InnerSingleton,
			StaticRegisterNativesUKeepLineOfSight,
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
	return Z_Registration_Info_UClass_UKeepLineOfSight.InnerSingleton;
}
UClass* Z_Construct_UClass_UKeepLineOfSight_NoRegister()
{
	return UKeepLineOfSight::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UKeepLineOfSight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Keep line of sight with the target (could it be the player or another object)\n */" },
#endif
		{ "IncludePath", "Modifiers/KeepLineOfSight.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modifiers/KeepLineOfSight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep line of sight with the target (could it be the player or another object)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAngleInRads_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How far from the current camera should we check for obstacles (this would be PI/2)\n" },
#endif
		{ "ModuleRelativePath", "Public/Modifiers/KeepLineOfSight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far from the current camera should we check for obstacles (this would be PI/2)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StepSizeInRadians_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Precision for looking obstacles\n" },
#endif
		{ "ModuleRelativePath", "Public/Modifiers/KeepLineOfSight.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precision for looking obstacles" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/KeepLineOfSight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOS_ProbeChannel_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/KeepLineOfSight.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UKeepLineOfSight constinit property declarations *************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAngleInRads;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSizeInRadians;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LOS_ProbeChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UKeepLineOfSight constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKeepLineOfSight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UKeepLineOfSight_Statics

// ********** Begin Class UKeepLineOfSight Property Definitions ************************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_MaxAngleInRads = { "MaxAngleInRads", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeepLineOfSight, MaxAngleInRads), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAngleInRads_MetaData), NewProp_MaxAngleInRads_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_StepSizeInRadians = { "StepSizeInRadians", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeepLineOfSight, StepSizeInRadians), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StepSizeInRadians_MetaData), NewProp_StepSizeInRadians_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeepLineOfSight, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_LOS_ProbeChannel = { "LOS_ProbeChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UKeepLineOfSight, LOS_ProbeChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOS_ProbeChannel_MetaData), NewProp_LOS_ProbeChannel_MetaData) }; // 838391399
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKeepLineOfSight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_MaxAngleInRads,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_StepSizeInRadians,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_RotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKeepLineOfSight_Statics::NewProp_LOS_ProbeChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeepLineOfSight_Statics::PropPointers) < 2048);
// ********** End Class UKeepLineOfSight Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UKeepLineOfSight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraModifierACS,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UKeepLineOfSight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UKeepLineOfSight_Statics::ClassParams = {
	&UKeepLineOfSight::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UKeepLineOfSight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UKeepLineOfSight_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UKeepLineOfSight_Statics::Class_MetaDataParams), Z_Construct_UClass_UKeepLineOfSight_Statics::Class_MetaDataParams)
};
void UKeepLineOfSight::StaticRegisterNativesUKeepLineOfSight()
{
}
UClass* Z_Construct_UClass_UKeepLineOfSight()
{
	if (!Z_Registration_Info_UClass_UKeepLineOfSight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKeepLineOfSight.OuterSingleton, Z_Construct_UClass_UKeepLineOfSight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UKeepLineOfSight.OuterSingleton;
}
UKeepLineOfSight::UKeepLineOfSight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UKeepLineOfSight);
UKeepLineOfSight::~UKeepLineOfSight() {}
// ********** End Class UKeepLineOfSight ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UKeepLineOfSight, UKeepLineOfSight::StaticClass, TEXT("UKeepLineOfSight"), &Z_Registration_Info_UClass_UKeepLineOfSight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKeepLineOfSight), 1235866532U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h__Script_ACamSys_1919544852{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_KeepLineOfSight_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
