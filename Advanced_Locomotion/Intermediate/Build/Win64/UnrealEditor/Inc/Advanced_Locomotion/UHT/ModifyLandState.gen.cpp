// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/ModifyLandState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeModifyLandState() {}

// ********** Begin Cross Module References ********************************************************
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_UModifyLandState();
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_UModifyLandState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_Advanced_Locomotion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UModifyLandState *********************************************************
void UModifyLandState::StaticRegisterNativesUModifyLandState()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UModifyLandState;
UClass* UModifyLandState::GetPrivateStaticClass()
{
	using TClass = UModifyLandState;
	if (!Z_Registration_Info_UClass_UModifyLandState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ModifyLandState"),
			Z_Registration_Info_UClass_UModifyLandState.InnerSingleton,
			StaticRegisterNativesUModifyLandState,
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
	return Z_Registration_Info_UClass_UModifyLandState.InnerSingleton;
}
UClass* Z_Construct_UClass_UModifyLandState_NoRegister()
{
	return UModifyLandState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UModifyLandState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/ModifyLandState.h" },
		{ "ModuleRelativePath", "Public/Animation/ModifyLandState.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModifyLandState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModifyLandState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_Advanced_Locomotion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyLandState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModifyLandState_Statics::ClassParams = {
	&UModifyLandState::StaticClass,
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
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModifyLandState_Statics::Class_MetaDataParams), Z_Construct_UClass_UModifyLandState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModifyLandState()
{
	if (!Z_Registration_Info_UClass_UModifyLandState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModifyLandState.OuterSingleton, Z_Construct_UClass_UModifyLandState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModifyLandState.OuterSingleton;
}
UModifyLandState::UModifyLandState(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModifyLandState);
UModifyLandState::~UModifyLandState() {}
// ********** End Class UModifyLandState ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_ModifyLandState_h__Script_Advanced_Locomotion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModifyLandState, UModifyLandState::StaticClass, TEXT("UModifyLandState"), &Z_Registration_Info_UClass_UModifyLandState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModifyLandState), 196585374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_ModifyLandState_h__Script_Advanced_Locomotion_1784242442(TEXT("/Script/Advanced_Locomotion"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_ModifyLandState_h__Script_Advanced_Locomotion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Animation_ModifyLandState_h__Script_Advanced_Locomotion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
