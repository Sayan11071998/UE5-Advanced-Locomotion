// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/MainAnimInstance.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainAnimInstance() {}

// ********** Begin Cross Module References ********************************************************
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_UMainAnimInstance();
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_UMainAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_Advanced_Locomotion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMainAnimInstance ********************************************************
void UMainAnimInstance::StaticRegisterNativesUMainAnimInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMainAnimInstance;
UClass* UMainAnimInstance::GetPrivateStaticClass()
{
	using TClass = UMainAnimInstance;
	if (!Z_Registration_Info_UClass_UMainAnimInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainAnimInstance"),
			Z_Registration_Info_UClass_UMainAnimInstance.InnerSingleton,
			StaticRegisterNativesUMainAnimInstance,
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
	return Z_Registration_Info_UClass_UMainAnimInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UMainAnimInstance_NoRegister()
{
	return UMainAnimInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMainAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/MainAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Animation/MainAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementYawDelta_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMovementYawDelta_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Animation/MainAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsAccelerating_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
	static void NewProp_bIsInAir_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementYawDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastMovementYawDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
{
	((UMainAnimInstance*)Obj)->bIsAccelerating = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMainAnimInstance), &Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAccelerating_MetaData), NewProp_bIsAccelerating_MetaData) };
void Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
{
	((UMainAnimInstance*)Obj)->bIsInAir = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMainAnimInstance), &Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInAir_MetaData), NewProp_bIsInAir_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_MovementYawDelta = { "MovementYawDelta", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainAnimInstance, MovementYawDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementYawDelta_MetaData), NewProp_MovementYawDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_LastMovementYawDelta = { "LastMovementYawDelta", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMainAnimInstance, LastMovementYawDelta), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMovementYawDelta_MetaData), NewProp_LastMovementYawDelta_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMainAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsAccelerating,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_bIsInAir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_MovementYawDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMainAnimInstance_Statics::NewProp_LastMovementYawDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMainAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Advanced_Locomotion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainAnimInstance_Statics::ClassParams = {
	&UMainAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMainAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainAnimInstance()
{
	if (!Z_Registration_Info_UClass_UMainAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainAnimInstance.OuterSingleton, Z_Construct_UClass_UMainAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainAnimInstance.OuterSingleton;
}
UMainAnimInstance::UMainAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainAnimInstance);
UMainAnimInstance::~UMainAnimInstance() {}
// ********** End Class UMainAnimInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_MainAnimInstance_h__Script_Advanced_Locomotion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainAnimInstance, UMainAnimInstance::StaticClass, TEXT("UMainAnimInstance"), &Z_Registration_Info_UClass_UMainAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainAnimInstance), 2286570576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_MainAnimInstance_h__Script_Advanced_Locomotion_2627725877(TEXT("/Script/Advanced_Locomotion"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_MainAnimInstance_h__Script_Advanced_Locomotion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_MainAnimInstance_h__Script_Advanced_Locomotion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
