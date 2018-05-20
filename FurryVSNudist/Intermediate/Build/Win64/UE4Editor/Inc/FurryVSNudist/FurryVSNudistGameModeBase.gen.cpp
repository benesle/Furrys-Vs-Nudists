// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FurryVSNudistGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFurryVSNudistGameModeBase() {}
// Cross Module References
	FURRYVSNUDIST_API UClass* Z_Construct_UClass_AFurryVSNudistGameModeBase_NoRegister();
	FURRYVSNUDIST_API UClass* Z_Construct_UClass_AFurryVSNudistGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FurryVSNudist();
// End Cross Module References
	void AFurryVSNudistGameModeBase::StaticRegisterNativesAFurryVSNudistGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFurryVSNudistGameModeBase_NoRegister()
	{
		return AFurryVSNudistGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AFurryVSNudistGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FurryVSNudist,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FurryVSNudistGameModeBase.h" },
				{ "ModuleRelativePath", "FurryVSNudistGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFurryVSNudistGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFurryVSNudistGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFurryVSNudistGameModeBase, 715847295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFurryVSNudistGameModeBase(Z_Construct_UClass_AFurryVSNudistGameModeBase, &AFurryVSNudistGameModeBase::StaticClass, TEXT("/Script/FurryVSNudist"), TEXT("AFurryVSNudistGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFurryVSNudistGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
