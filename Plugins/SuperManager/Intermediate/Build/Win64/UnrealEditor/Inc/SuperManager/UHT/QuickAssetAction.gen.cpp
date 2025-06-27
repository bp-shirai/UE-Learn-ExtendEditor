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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction();
SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_SuperManager();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UQuickAssetAction Function AddPrefixes ***********************************
struct Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "AddPrefixes", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuickAssetAction_AddPrefixes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickAssetAction::execAddPrefixes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPrefixes();
	P_NATIVE_END;
}
// ********** End Class UQuickAssetAction Function AddPrefixes *************************************

// ********** Begin Class UQuickAssetAction Function DuplicateAsset ********************************
struct Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics
{
	struct QuickAssetAction_eventDuplicateAsset_Parms
	{
		int32 NumOfDuplicates;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfDuplicates;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::NewProp_NumOfDuplicates = { "NumOfDuplicates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuickAssetAction_eventDuplicateAsset_Parms, NumOfDuplicates), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::NewProp_NumOfDuplicates,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "DuplicateAsset", Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::QuickAssetAction_eventDuplicateAsset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::QuickAssetAction_eventDuplicateAsset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickAssetAction::execDuplicateAsset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumOfDuplicates);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DuplicateAsset(Z_Param_NumOfDuplicates);
	P_NATIVE_END;
}
// ********** End Class UQuickAssetAction Function DuplicateAsset **********************************

// ********** Begin Class UQuickAssetAction Function RemoveUnusedAssets ****************************
struct Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "RemoveUnusedAssets", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UQuickAssetAction::execRemoveUnusedAssets)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveUnusedAssets();
	P_NATIVE_END;
}
// ********** End Class UQuickAssetAction Function RemoveUnusedAssets ******************************

// ********** Begin Class UQuickAssetAction ********************************************************
void UQuickAssetAction::StaticRegisterNativesUQuickAssetAction()
{
	UClass* Class = UQuickAssetAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPrefixes", &UQuickAssetAction::execAddPrefixes },
		{ "DuplicateAsset", &UQuickAssetAction::execDuplicateAsset },
		{ "RemoveUnusedAssets", &UQuickAssetAction::execRemoveUnusedAssets },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrefixMap_MetaData[] = {
		{ "Category", "QuickAssetAction" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PrefixMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PrefixMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PrefixMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickAssetAction_AddPrefixes, "AddPrefixes" }, // 3189916729
		{ &Z_Construct_UFunction_UQuickAssetAction_DuplicateAsset, "DuplicateAsset" }, // 3691833901
		{ &Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets, "RemoveUnusedAssets" }, // 3528344412
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickAssetAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuickAssetAction_Statics::NewProp_PrefixMap_ValueProp = { "PrefixMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuickAssetAction_Statics::NewProp_PrefixMap_Key_KeyProp = { "PrefixMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UQuickAssetAction_Statics::NewProp_PrefixMap = { "PrefixMap", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UQuickAssetAction, PrefixMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrefixMap_MetaData), NewProp_PrefixMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuickAssetAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickAssetAction_Statics::NewProp_PrefixMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickAssetAction_Statics::NewProp_PrefixMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuickAssetAction_Statics::NewProp_PrefixMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UQuickAssetAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::PropPointers),
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
		{ Z_Construct_UClass_UQuickAssetAction, UQuickAssetAction::StaticClass, TEXT("UQuickAssetAction"), &Z_Registration_Info_UClass_UQuickAssetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickAssetAction), 4071950003U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Learn_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h__Script_SuperManager_3042437028(TEXT("/Script/SuperManager"),
	Z_CompiledInDeferFile_FID_Learn_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h__Script_SuperManager_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Learn_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h__Script_SuperManager_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
