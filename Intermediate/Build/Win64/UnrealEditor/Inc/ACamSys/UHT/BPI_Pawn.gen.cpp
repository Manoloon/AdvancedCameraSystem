// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interfaces/BPI_Pawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeBPI_Pawn() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_UBPI_Pawn();
ACAMSYS_API UClass* Z_Construct_UClass_UBPI_Pawn_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UBPI_Pawn ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UBPI_Pawn;
UClass* UBPI_Pawn::GetPrivateStaticClass()
{
	using TClass = UBPI_Pawn;
	if (!Z_Registration_Info_UClass_UBPI_Pawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("BPI_Pawn"),
			Z_Registration_Info_UClass_UBPI_Pawn.InnerSingleton,
			StaticRegisterNativesUBPI_Pawn,
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
	return Z_Registration_Info_UClass_UBPI_Pawn.InnerSingleton;
}
UClass* Z_Construct_UClass_UBPI_Pawn_NoRegister()
{
	return UBPI_Pawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBPI_Pawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/BPI_Pawn.h" },
	};
#endif // WITH_METADATA

// ********** Begin Interface UBPI_Pawn constinit property declarations ****************************
// ********** End Interface UBPI_Pawn constinit property declarations ******************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBPI_Pawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UBPI_Pawn_Statics
UObject* (*const Z_Construct_UClass_UBPI_Pawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_Pawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBPI_Pawn_Statics::ClassParams = {
	&UBPI_Pawn::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBPI_Pawn_Statics::Class_MetaDataParams), Z_Construct_UClass_UBPI_Pawn_Statics::Class_MetaDataParams)
};
void UBPI_Pawn::StaticRegisterNativesUBPI_Pawn()
{
}
UClass* Z_Construct_UClass_UBPI_Pawn()
{
	if (!Z_Registration_Info_UClass_UBPI_Pawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBPI_Pawn.OuterSingleton, Z_Construct_UClass_UBPI_Pawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBPI_Pawn.OuterSingleton;
}
UBPI_Pawn::UBPI_Pawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UBPI_Pawn);
// ********** End Interface UBPI_Pawn **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBPI_Pawn, UBPI_Pawn::StaticClass, TEXT("UBPI_Pawn"), &Z_Registration_Info_UClass_UBPI_Pawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBPI_Pawn), 2059749609U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h__Script_ACamSys_1304020424{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
