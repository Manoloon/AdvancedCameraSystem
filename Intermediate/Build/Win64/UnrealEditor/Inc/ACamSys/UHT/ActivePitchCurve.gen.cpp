// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Modifiers/ActivePitchCurve.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeActivePitchCurve() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_UActivePitchCurve();
ACAMSYS_API UClass* Z_Construct_UClass_UActivePitchCurve_NoRegister();
ACAMSYS_API UClass* Z_Construct_UClass_UCameraModifierACS();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActivePitchCurve ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UActivePitchCurve;
UClass* UActivePitchCurve::GetPrivateStaticClass()
{
	using TClass = UActivePitchCurve;
	if (!Z_Registration_Info_UClass_UActivePitchCurve.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("ActivePitchCurve"),
			Z_Registration_Info_UClass_UActivePitchCurve.InnerSingleton,
			StaticRegisterNativesUActivePitchCurve,
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
	return Z_Registration_Info_UClass_UActivePitchCurve.InnerSingleton;
}
UClass* Z_Construct_UClass_UActivePitchCurve_NoRegister()
{
	return UActivePitchCurve::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActivePitchCurve_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Modifiers/ActivePitchCurve.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Modifiers/ActivePitchCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransitionTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/ActivePitchCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchToDistanceCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Modifiers/ActivePitchCurve.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchToFOVCurve_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// FOV Values are additive to the current FOV (The curve Float should have values that add or sub to the current value\n" },
#endif
		{ "ModuleRelativePath", "Public/Modifiers/ActivePitchCurve.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FOV Values are additive to the current FOV (The curve Float should have values that add or sub to the current value" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UActivePitchCurve constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TransitionTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchToDistanceCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PitchToFOVCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UActivePitchCurve constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivePitchCurve>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UActivePitchCurve_Statics

// ********** Begin Class UActivePitchCurve Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActivePitchCurve_Statics::NewProp_TransitionTime = { "TransitionTime", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivePitchCurve, TransitionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransitionTime_MetaData), NewProp_TransitionTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivePitchCurve_Statics::NewProp_PitchToDistanceCurve = { "PitchToDistanceCurve", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivePitchCurve, PitchToDistanceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchToDistanceCurve_MetaData), NewProp_PitchToDistanceCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivePitchCurve_Statics::NewProp_PitchToFOVCurve = { "PitchToFOVCurve", nullptr, (EPropertyFlags)0x0144000000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActivePitchCurve, PitchToFOVCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchToFOVCurve_MetaData), NewProp_PitchToFOVCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivePitchCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePitchCurve_Statics::NewProp_TransitionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePitchCurve_Statics::NewProp_PitchToDistanceCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePitchCurve_Statics::NewProp_PitchToFOVCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivePitchCurve_Statics::PropPointers) < 2048);
// ********** End Class UActivePitchCurve Property Definitions *************************************
UObject* (*const Z_Construct_UClass_UActivePitchCurve_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraModifierACS,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActivePitchCurve_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActivePitchCurve_Statics::ClassParams = {
	&UActivePitchCurve::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActivePitchCurve_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActivePitchCurve_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActivePitchCurve_Statics::Class_MetaDataParams), Z_Construct_UClass_UActivePitchCurve_Statics::Class_MetaDataParams)
};
void UActivePitchCurve::StaticRegisterNativesUActivePitchCurve()
{
}
UClass* Z_Construct_UClass_UActivePitchCurve()
{
	if (!Z_Registration_Info_UClass_UActivePitchCurve.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActivePitchCurve.OuterSingleton, Z_Construct_UClass_UActivePitchCurve_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActivePitchCurve.OuterSingleton;
}
UActivePitchCurve::UActivePitchCurve(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UActivePitchCurve);
UActivePitchCurve::~UActivePitchCurve() {}
// ********** End Class UActivePitchCurve **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActivePitchCurve, UActivePitchCurve::StaticClass, TEXT("UActivePitchCurve"), &Z_Registration_Info_UClass_UActivePitchCurve, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActivePitchCurve), 3521770149U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h__Script_ACamSys_2253790769{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Modifiers_ActivePitchCurve_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
