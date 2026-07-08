// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SpringArmComponentACS.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSpringArmComponentACS() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_USpringArmComponentACS();
ACAMSYS_API UClass* Z_Construct_UClass_USpringArmComponentACS_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USpringArmComponentACS Function GetSpringArmLengthMaxLimit ***************
struct Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics
{
	struct SpringArmComponentACS_eventGetSpringArmLengthMaxLimit_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpringArmLengthMaxLimit constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpringArmLengthMaxLimit constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpringArmLengthMaxLimit Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpringArmComponentACS_eventGetSpringArmLengthMaxLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::PropPointers) < 2048);
// ********** End Function GetSpringArmLengthMaxLimit Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpringArmComponentACS, nullptr, "GetSpringArmLengthMaxLimit", 	Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::SpringArmComponentACS_eventGetSpringArmLengthMaxLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::SpringArmComponentACS_eventGetSpringArmLengthMaxLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpringArmComponentACS::execGetSpringArmLengthMaxLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpringArmLengthMaxLimit();
	P_NATIVE_END;
}
// ********** End Class USpringArmComponentACS Function GetSpringArmLengthMaxLimit *****************

// ********** Begin Class USpringArmComponentACS Function GetSpringArmLengthMinLimit ***************
struct Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics
{
	struct SpringArmComponentACS_eventGetSpringArmLengthMinLimit_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSpringArmLengthMinLimit constinit property declarations ************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSpringArmLengthMinLimit constinit property declarations **************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSpringArmLengthMinLimit Property Definitions ***********************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpringArmComponentACS_eventGetSpringArmLengthMinLimit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::PropPointers) < 2048);
// ********** End Function GetSpringArmLengthMinLimit Property Definitions *************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USpringArmComponentACS, nullptr, "GetSpringArmLengthMinLimit", 	Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::SpringArmComponentACS_eventGetSpringArmLengthMinLimit_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::SpringArmComponentACS_eventGetSpringArmLengthMinLimit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpringArmComponentACS::execGetSpringArmLengthMinLimit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSpringArmLengthMinLimit();
	P_NATIVE_END;
}
// ********** End Class USpringArmComponentACS Function GetSpringArmLengthMinLimit *****************

// ********** Begin Class USpringArmComponentACS ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USpringArmComponentACS;
UClass* USpringArmComponentACS::GetPrivateStaticClass()
{
	using TClass = USpringArmComponentACS;
	if (!Z_Registration_Info_UClass_USpringArmComponentACS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SpringArmComponentACS"),
			Z_Registration_Info_UClass_USpringArmComponentACS.InnerSingleton,
			StaticRegisterNativesUSpringArmComponentACS,
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
	return Z_Registration_Info_UClass_USpringArmComponentACS.InnerSingleton;
}
UClass* Z_Construct_UClass_USpringArmComponentACS_NoRegister()
{
	return USpringArmComponentACS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USpringArmComponentACS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "Mobility Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "SpringArmComponentACS.h" },
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationLagCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationLagCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlayerSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LagInterpSpeed_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpringArmComponentACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USpringArmComponentACS constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RotationLagCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocationLagCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPlayerSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LagInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USpringArmComponentACS constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetSpringArmLengthMaxLimit"), .Pointer = &USpringArmComponentACS::execGetSpringArmLengthMaxLimit },
		{ .NameUTF8 = UTF8TEXT("GetSpringArmLengthMinLimit"), .Pointer = &USpringArmComponentACS::execGetSpringArmLengthMinLimit },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMaxLimit, "GetSpringArmLengthMaxLimit" }, // 2867996689
		{ &Z_Construct_UFunction_USpringArmComponentACS_GetSpringArmLengthMinLimit, "GetSpringArmLengthMinLimit" }, // 3984717833
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpringArmComponentACS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USpringArmComponentACS_Statics

// ********** Begin Class USpringArmComponentACS Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_RotationLagCurve = { "RotationLagCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponentACS, RotationLagCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationLagCurve_MetaData), NewProp_RotationLagCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_LocationLagCurve = { "LocationLagCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponentACS, LocationLagCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationLagCurve_MetaData), NewProp_LocationLagCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_MaxPlayerSpeed = { "MaxPlayerSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponentACS, MaxPlayerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlayerSpeed_MetaData), NewProp_MaxPlayerSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_LagInterpSpeed = { "LagInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponentACS, LagInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LagInterpSpeed_MetaData), NewProp_LagInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USpringArmComponentACS, OwnerPawn), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerPawn_MetaData), NewProp_OwnerPawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpringArmComponentACS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_RotationLagCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_LocationLagCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_MaxPlayerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_LagInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpringArmComponentACS_Statics::NewProp_OwnerPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponentACS_Statics::PropPointers) < 2048);
// ********** End Class USpringArmComponentACS Property Definitions ********************************
UObject* (*const Z_Construct_UClass_USpringArmComponentACS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USpringArmComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponentACS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpringArmComponentACS_Statics::ClassParams = {
	&USpringArmComponentACS::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USpringArmComponentACS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponentACS_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpringArmComponentACS_Statics::Class_MetaDataParams), Z_Construct_UClass_USpringArmComponentACS_Statics::Class_MetaDataParams)
};
void USpringArmComponentACS::StaticRegisterNativesUSpringArmComponentACS()
{
	UClass* Class = USpringArmComponentACS::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USpringArmComponentACS_Statics::Funcs));
}
UClass* Z_Construct_UClass_USpringArmComponentACS()
{
	if (!Z_Registration_Info_UClass_USpringArmComponentACS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpringArmComponentACS.OuterSingleton, Z_Construct_UClass_USpringArmComponentACS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpringArmComponentACS.OuterSingleton;
}
USpringArmComponentACS::USpringArmComponentACS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USpringArmComponentACS);
USpringArmComponentACS::~USpringArmComponentACS() {}
// ********** End Class USpringArmComponentACS *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpringArmComponentACS, USpringArmComponentACS::StaticClass, TEXT("USpringArmComponentACS"), &Z_Registration_Info_UClass_USpringArmComponentACS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpringArmComponentACS), 1647302771U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h__Script_ACamSys_3978498921{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_SpringArmComponentACS_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
