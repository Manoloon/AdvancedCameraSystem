// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CameraModifierACS.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeCameraModifierACS() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_UCameraModifierACS();
ACAMSYS_API UClass* Z_Construct_UClass_UCameraModifierACS_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCameraModifierACS *******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UCameraModifierACS;
UClass* UCameraModifierACS::GetPrivateStaticClass()
{
	using TClass = UCameraModifierACS;
	if (!Z_Registration_Info_UClass_UCameraModifierACS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("CameraModifierACS"),
			Z_Registration_Info_UClass_UCameraModifierACS.InnerSingleton,
			StaticRegisterNativesUCameraModifierACS,
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
	return Z_Registration_Info_UClass_UCameraModifierACS.InnerSingleton;
}
UClass* Z_Construct_UClass_UCameraModifierACS_NoRegister()
{
	return UCameraModifierACS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCameraModifierACS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CameraModifierACS.h" },
		{ "ModuleRelativePath", "Public/CameraModifierACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInputCooldown_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/CameraModifierACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UCameraModifierACS constinit property declarations ***********************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerInputCooldown;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UCameraModifierACS constinit property declarations *************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModifierACS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UCameraModifierACS_Statics

// ********** Begin Class UCameraModifierACS Property Definitions **********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifierACS_Statics::NewProp_PlayerInputCooldown = { "PlayerInputCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModifierACS, PlayerInputCooldown), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInputCooldown_MetaData), NewProp_PlayerInputCooldown_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModifierACS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifierACS_Statics::NewProp_PlayerInputCooldown,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifierACS_Statics::PropPointers) < 2048);
// ********** End Class UCameraModifierACS Property Definitions ************************************
UObject* (*const Z_Construct_UClass_UCameraModifierACS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifierACS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraModifierACS_Statics::ClassParams = {
	&UCameraModifierACS::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCameraModifierACS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifierACS_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifierACS_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraModifierACS_Statics::Class_MetaDataParams)
};
void UCameraModifierACS::StaticRegisterNativesUCameraModifierACS()
{
}
UClass* Z_Construct_UClass_UCameraModifierACS()
{
	if (!Z_Registration_Info_UClass_UCameraModifierACS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraModifierACS.OuterSingleton, Z_Construct_UClass_UCameraModifierACS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraModifierACS.OuterSingleton;
}
UCameraModifierACS::UCameraModifierACS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UCameraModifierACS);
UCameraModifierACS::~UCameraModifierACS() {}
// ********** End Class UCameraModifierACS *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_CameraModifierACS_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraModifierACS, UCameraModifierACS::StaticClass, TEXT("UCameraModifierACS"), &Z_Registration_Info_UClass_UCameraModifierACS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraModifierACS), 3204881748U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_CameraModifierACS_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_CameraModifierACS_h__Script_ACamSys_790690937{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_CameraModifierACS_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_CameraModifierACS_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
