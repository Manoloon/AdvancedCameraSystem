// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/BPI_Pawn.h"

#ifdef ACAMSYS_BPI_Pawn_generated_h
#error "BPI_Pawn.generated.h already included, missing '#pragma once' in BPI_Pawn.h"
#endif
#define ACAMSYS_BPI_Pawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UBPI_Pawn ************************************************************
struct Z_Construct_UClass_UBPI_Pawn_Statics;
ACAMSYS_API UClass* Z_Construct_UClass_UBPI_Pawn_NoRegister();

#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ACAMSYS_API UBPI_Pawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBPI_Pawn(UBPI_Pawn&&) = delete; \
	UBPI_Pawn(const UBPI_Pawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ACAMSYS_API, UBPI_Pawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBPI_Pawn); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBPI_Pawn) \
	virtual ~UBPI_Pawn() = default;


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBPI_Pawn(); \
	friend struct ::Z_Construct_UClass_UBPI_Pawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACAMSYS_API UClass* ::Z_Construct_UClass_UBPI_Pawn_NoRegister(); \
public: \
	DECLARE_CLASS2(UBPI_Pawn, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ACamSys"), Z_Construct_UClass_UBPI_Pawn_NoRegister) \
	DECLARE_SERIALIZER(UBPI_Pawn)


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_13_GENERATED_UINTERFACE_BODY() \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBPI_Pawn() {} \
public: \
	typedef UBPI_Pawn UClassType; \
	typedef IBPI_Pawn ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_10_PROLOG
#define FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBPI_Pawn;

// ********** End Interface UBPI_Pawn **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CustomGravity_Plugins_AdvancedCameraSystem_Source_ACamSys_Public_Interfaces_BPI_Pawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
