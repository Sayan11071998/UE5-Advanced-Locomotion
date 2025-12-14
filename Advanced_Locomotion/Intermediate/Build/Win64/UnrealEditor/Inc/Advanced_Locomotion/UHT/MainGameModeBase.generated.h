// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/MainGameModeBase.h"

#ifdef ADVANCED_LOCOMOTION_MainGameModeBase_generated_h
#error "MainGameModeBase.generated.h already included, missing '#pragma once' in MainGameModeBase.h"
#endif
#define ADVANCED_LOCOMOTION_MainGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMainGameModeBase ********************************************************
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_AMainGameModeBase_NoRegister();

#define FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameModeBase(); \
	friend struct Z_Construct_UClass_AMainGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_AMainGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMainGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Advanced_Locomotion"), Z_Construct_UClass_AMainGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AMainGameModeBase)


#define FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMainGameModeBase(AMainGameModeBase&&) = delete; \
	AMainGameModeBase(const AMainGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameModeBase) \
	NO_API virtual ~AMainGameModeBase();


#define FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h_7_PROLOG
#define FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMainGameModeBase;

// ********** End Class AMainGameModeBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
