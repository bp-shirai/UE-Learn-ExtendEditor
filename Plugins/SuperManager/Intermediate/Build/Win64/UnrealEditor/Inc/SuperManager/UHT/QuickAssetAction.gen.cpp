// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssetActions/QuickAssetAction.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuickAssetAction() {}

// ********** Begin Cross Module References ********************************************************
BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction();
SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_SuperManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuickAssetAction Function TestFunc **************************************
struct Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "TestFunc", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuickAssetAction_TestFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_TestFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickAssetAction::execTestFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestFunc();
	P_NATIVE_END;
}
// ********** End Class UQuickAssetAction Function TestFunc ****************************************

// ********** Begin Class UQuickAssetAction ********************************************************
void UQuickAssetAction::StaticRegisterNativesUQuickAssetAction()
{
	UClass* Class = UQuickAssetAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TestFunc", &UQuickAssetAction::execTestFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UQuickAssetAction;
UClass* UQuickAssetAction::GetPrivateStaticClass()
{
	using TClass = UQuickAssetAction;
	if (!Z_Registration_Info_UClass_UQuickAssetAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuickAssetAction"),
			Z_Registration_Info_UClass_UQuickAssetAction.InnerSingleton,
			StaticRegisterNativesUQuickAssetAction,
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
	return Z_Registration_Info_UClass_UQuickAssetAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UQuickAssetAction_NoRegister()
{
	return UQuickAssetAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UQuickAssetAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetActions/QuickAssetAction.h" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickAssetAction_TestFunc, "TestFunc" }, // 3209115829
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickAssetAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UQuickAssetAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
	(UObject* (*)())Z_Construct_UPackage__Script_SuperManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickAssetAction_Statics::ClassParams = {
	&UQuickAssetAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuickAssetAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UQuickAssetAction()
{
	if (!Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton, Z_Construct_UClass_UQuickAssetAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton;
}
UQuickAssetAction::UQuickAssetAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickAssetAction);
UQuickAssetAction::~UQuickAssetAction() {}
// ********** End Class UQuickAssetAction **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Learn_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h__Script_SuperManager_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UQuickAssetAction, UQuickAssetAction::StaticClass, TEXT("UQuickAssetAction"), &Z_Registration_Info_UClass_UQuickAssetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickAssetAction), 184180765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learn_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h__Script_SuperManager_3368519224(TEXT("/Script/SuperManager"),
	Z_CompiledInDeferFile_FID_Learn_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h__Script_SuperManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learn_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h__Script_SuperManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
