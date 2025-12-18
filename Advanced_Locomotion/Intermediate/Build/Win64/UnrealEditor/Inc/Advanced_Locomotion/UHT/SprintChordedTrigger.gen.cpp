// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Input/SprintChordedTrigger.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSprintChordedTrigger() {}

// ********** Begin Cross Module References ********************************************************
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_USprintChordedTrigger();
ADVANCED_LOCOMOTION_API UClass* Z_Construct_UClass_USprintChordedTrigger_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger();
UPackage* Z_Construct_UPackage__Script_Advanced_Locomotion();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USprintChordedTrigger ****************************************************
void USprintChordedTrigger::StaticRegisterNativesUSprintChordedTrigger()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USprintChordedTrigger;
UClass* USprintChordedTrigger::GetPrivateStaticClass()
{
	using TClass = USprintChordedTrigger;
	if (!Z_Registration_Info_UClass_USprintChordedTrigger.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SprintChordedTrigger"),
			Z_Registration_Info_UClass_USprintChordedTrigger.InnerSingleton,
			StaticRegisterNativesUSprintChordedTrigger,
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
	return Z_Registration_Info_UClass_USprintChordedTrigger.InnerSingleton;
}
UClass* Z_Construct_UClass_USprintChordedTrigger_NoRegister()
{
	return USprintChordedTrigger::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USprintChordedTrigger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Input/SprintChordedTrigger.h" },
		{ "ModuleRelativePath", "Public/Input/SprintChordedTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/SprintChordedTrigger.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/Input/SprintChordedTrigger.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USprintChordedTrigger>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USprintChordedTrigger_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USprintChordedTrigger, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USprintChordedTrigger_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USprintChordedTrigger, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USprintChordedTrigger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprintChordedTrigger_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USprintChordedTrigger_Statics::NewProp_SprintAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USprintChordedTrigger_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USprintChordedTrigger_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputTrigger,
	(UObject* (*)())Z_Construct_UPackage__Script_Advanced_Locomotion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USprintChordedTrigger_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USprintChordedTrigger_Statics::ClassParams = {
	&USprintChordedTrigger::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USprintChordedTrigger_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USprintChordedTrigger_Statics::PropPointers),
	0,
	0x401030A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USprintChordedTrigger_Statics::Class_MetaDataParams), Z_Construct_UClass_USprintChordedTrigger_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USprintChordedTrigger()
{
	if (!Z_Registration_Info_UClass_USprintChordedTrigger.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USprintChordedTrigger.OuterSingleton, Z_Construct_UClass_USprintChordedTrigger_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USprintChordedTrigger.OuterSingleton;
}
USprintChordedTrigger::USprintChordedTrigger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USprintChordedTrigger);
USprintChordedTrigger::~USprintChordedTrigger() {}
// ********** End Class USprintChordedTrigger ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Input_SprintChordedTrigger_h__Script_Advanced_Locomotion_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USprintChordedTrigger, USprintChordedTrigger::StaticClass, TEXT("USprintChordedTrigger"), &Z_Registration_Info_UClass_USprintChordedTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USprintChordedTrigger), 749735241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Input_SprintChordedTrigger_h__Script_Advanced_Locomotion_1975123468(TEXT("/Script/Advanced_Locomotion"),
	Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Input_SprintChordedTrigger_h__Script_Advanced_Locomotion_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_sayan_Projects_UE5_Advanced_Locomotion_Advanced_Locomotion_Source_Advanced_Locomotion_Public_Input_SprintChordedTrigger_h__Script_Advanced_Locomotion_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
