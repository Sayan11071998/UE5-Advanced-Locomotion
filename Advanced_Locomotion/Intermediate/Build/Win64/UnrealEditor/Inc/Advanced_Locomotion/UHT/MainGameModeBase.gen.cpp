// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameMode/MainGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_AMainGameModeBase();
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_AMainGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Advanced_Locomotion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMainGameModeBase ********************************************************
void AMainGameModeBase::StaticRegisterNativesAMainGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMainGameModeBase;
UClass* AMainGameModeBase::GetPrivateStaticClass()
{
	using TClass = AMainGameModeBase;
	if (!Z_Registration_Info_UClass_AMainGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainGameModeBase"),
			Z_Registration_Info_UClass_AMainGameModeBase.InnerSingleton,
			StaticRegisterNativesAMainGameModeBase,
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
	return Z_Registration_Info_UClass_AMainGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainGameModeBase_NoRegister()
{
	return AMainGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/MainGameModeBase.h" },
		{ "ModuleRelativePath", "Public/GameMode/MainGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Advanced_Locomotion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainGameModeBase_Statics::ClassParams = {
	&AMainGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMainGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainGameModeBase.OuterSingleton, Z_Construct_UClass_AMainGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainGameModeBase.OuterSingleton;
}
AMainGameModeBase::AMainGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameModeBase);
AMainGameModeBase::~AMainGameModeBase() {}
// ********** End Class AMainGameModeBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h__Script_Advanced_Locomotion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainGameModeBase, AMainGameModeBase::StaticClass, TEXT("AMainGameModeBase"), &Z_Registration_Info_UClass_AMainGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainGameModeBase), 914879031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h__Script_Advanced_Locomotion_1109638066(TEXT("/Script/Advanced_Locomotion"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h__Script_Advanced_Locomotion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_GameMode_MainGameModeBase_h__Script_Advanced_Locomotion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
