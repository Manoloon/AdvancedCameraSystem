// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerBoxACS.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTriggerBoxACS() {}

// ********** Begin Cross Module References ********************************************************
ACAMSYS_API UClass* Z_Construct_UClass_ATriggerBoxACS();
ACAMSYS_API UClass* Z_Construct_UClass_ATriggerBoxACS_NoRegister();
ACAMSYS_API UClass* Z_Construct_UClass_UPermanentCameraMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_ACamSys();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATriggerBoxACS Function ChangeCamera *************************************
struct Z_Construct_UFunction_ATriggerBoxACS_ChangeCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ChangeCamera constinit property declarations **************************
// ********** End Function ChangeCamera constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxACS_ChangeCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATriggerBoxACS, nullptr, "ChangeCamera", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_ChangeCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerBoxACS_ChangeCamera_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATriggerBoxACS_ChangeCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerBoxACS_ChangeCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerBoxACS::execChangeCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ChangeCamera();
	P_NATIVE_END;
}
// ********** End Class ATriggerBoxACS Function ChangeCamera ***************************************

// ********** Begin Class ATriggerBoxACS Function GetCollisionComponent ****************************
struct Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics
{
	struct TriggerBoxACS_eventGetCollisionComponent_Parms
	{
		UBoxComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetCollisionComponent constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetCollisionComponent constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetCollisionComponent Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerBoxACS_eventGetCollisionComponent_Parms, ReturnValue), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::PropPointers) < 2048);
// ********** End Function GetCollisionComponent Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATriggerBoxACS, nullptr, "GetCollisionComponent", 	Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::TriggerBoxACS_eventGetCollisionComponent_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::TriggerBoxACS_eventGetCollisionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerBoxACS::execGetCollisionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBoxComponent**)Z_Param__Result=P_THIS->GetCollisionComponent();
	P_NATIVE_END;
}
// ********** End Class ATriggerBoxACS Function GetCollisionComponent ******************************

// ********** Begin Class ATriggerBoxACS Function OnOverlapBegin ***********************************
struct Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics
{
	struct TriggerBoxACS_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function OnOverlapBegin constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnOverlapBegin constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnOverlapBegin Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerBoxACS_eventOnOverlapBegin_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerBoxACS_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerBoxACS_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerBoxACS_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((TriggerBoxACS_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TriggerBoxACS_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TriggerBoxACS_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 222120718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::PropPointers) < 2048);
// ********** End Function OnOverlapBegin Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATriggerBoxACS, nullptr, "OnOverlapBegin", 	Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::TriggerBoxACS_eventOnOverlapBegin_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::TriggerBoxACS_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerBoxACS::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class ATriggerBoxACS Function OnOverlapBegin *************************************

// ********** Begin Class ATriggerBoxACS Function SwapPermamentCameraMode **************************
struct Z_Construct_UFunction_ATriggerBoxACS_SwapPermamentCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SwapPermamentCameraMode constinit property declarations ***************
// ********** End Function SwapPermamentCameraMode constinit property declarations *****************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxACS_SwapPermamentCameraMode_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATriggerBoxACS, nullptr, "SwapPermamentCameraMode", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxACS_SwapPermamentCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATriggerBoxACS_SwapPermamentCameraMode_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATriggerBoxACS_SwapPermamentCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerBoxACS_SwapPermamentCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATriggerBoxACS::execSwapPermamentCameraMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwapPermamentCameraMode();
	P_NATIVE_END;
}
// ********** End Class ATriggerBoxACS Function SwapPermamentCameraMode ****************************

// ********** Begin Class ATriggerBoxACS ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ATriggerBoxACS;
UClass* ATriggerBoxACS::GetPrivateStaticClass()
{
	using TClass = ATriggerBoxACS;
	if (!Z_Registration_Info_UClass_ATriggerBoxACS.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TriggerBoxACS"),
			Z_Registration_Info_UClass_ATriggerBoxACS.InnerSingleton,
			StaticRegisterNativesATriggerBoxACS,
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
	return Z_Registration_Info_UClass_ATriggerBoxACS.InnerSingleton;
}
UClass* Z_Construct_UClass_ATriggerBoxACS_NoRegister()
{
	return ATriggerBoxACS::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATriggerBoxACS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerBoxACS.h" },
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerBoxACS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevPermCameraMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PermanentCameraMode_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCameraActor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorHint_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerBoxACS" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerBoxACS.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ATriggerBoxACS constinit property declarations ***************************
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevPermCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PermanentCameraMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCameraActor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ActorHint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class ATriggerBoxACS constinit property declarations *****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ChangeCamera"), .Pointer = &ATriggerBoxACS::execChangeCamera },
		{ .NameUTF8 = UTF8TEXT("GetCollisionComponent"), .Pointer = &ATriggerBoxACS::execGetCollisionComponent },
		{ .NameUTF8 = UTF8TEXT("OnOverlapBegin"), .Pointer = &ATriggerBoxACS::execOnOverlapBegin },
		{ .NameUTF8 = UTF8TEXT("SwapPermamentCameraMode"), .Pointer = &ATriggerBoxACS::execSwapPermamentCameraMode },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerBoxACS_ChangeCamera, "ChangeCamera" }, // 367247368
		{ &Z_Construct_UFunction_ATriggerBoxACS_GetCollisionComponent, "GetCollisionComponent" }, // 870890951
		{ &Z_Construct_UFunction_ATriggerBoxACS_OnOverlapBegin, "OnOverlapBegin" }, // 1285195557
		{ &Z_Construct_UFunction_ATriggerBoxACS_SwapPermamentCameraMode, "SwapPermamentCameraMode" }, // 2226288723
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBoxACS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ATriggerBoxACS_Statics

// ********** Begin Class ATriggerBoxACS Property Definitions **************************************
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x014400080008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerBoxACS, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_PrevPermCameraMode = { "PrevPermCameraMode", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerBoxACS, PrevPermCameraMode), Z_Construct_UClass_UPermanentCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevPermCameraMode_MetaData), NewProp_PrevPermCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_PermanentCameraMode = { "PermanentCameraMode", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerBoxACS, PermanentCameraMode), Z_Construct_UClass_UPermanentCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PermanentCameraMode_MetaData), NewProp_PermanentCameraMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_NewCameraActor = { "NewCameraActor", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerBoxACS, NewCameraActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCameraActor_MetaData), NewProp_NewCameraActor_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_ActorHint = { "ActorHint", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerBoxACS, ActorHint), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorHint_MetaData), NewProp_ActorHint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATriggerBoxACS, CollisionComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionComponent_MetaData), NewProp_CollisionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerBoxACS_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_PrevPermCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_PermanentCameraMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_NewCameraActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_ActorHint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBoxACS_Statics::NewProp_CollisionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxACS_Statics::PropPointers) < 2048);
// ********** End Class ATriggerBoxACS Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_ATriggerBoxACS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ACamSys,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxACS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBoxACS_Statics::ClassParams = {
	&ATriggerBoxACS::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATriggerBoxACS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxACS_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxACS_Statics::Class_MetaDataParams), Z_Construct_UClass_ATriggerBoxACS_Statics::Class_MetaDataParams)
};
void ATriggerBoxACS::StaticRegisterNativesATriggerBoxACS()
{
	UClass* Class = ATriggerBoxACS::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_ATriggerBoxACS_Statics::Funcs));
}
UClass* Z_Construct_UClass_ATriggerBoxACS()
{
	if (!Z_Registration_Info_UClass_ATriggerBoxACS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerBoxACS.OuterSingleton, Z_Construct_UClass_ATriggerBoxACS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATriggerBoxACS.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ATriggerBoxACS);
ATriggerBoxACS::~ATriggerBoxACS() {}
// ********** End Class ATriggerBoxACS *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h__Script_ACamSys_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerBoxACS, ATriggerBoxACS::StaticClass, TEXT("ATriggerBoxACS"), &Z_Registration_Info_UClass_ATriggerBoxACS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerBoxACS), 1646984798U) },
	};
}; // Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h__Script_ACamSys_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h__Script_ACamSys_2157068122{
	TEXT("/Script/ACamSys"),
	Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h__Script_ACamSys_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_TriggerBoxACS_h__Script_ACamSys_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
