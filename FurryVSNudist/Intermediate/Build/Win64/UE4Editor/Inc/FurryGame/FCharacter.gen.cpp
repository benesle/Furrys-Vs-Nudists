// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCharacter() {}
// Cross Module References
	FURRYGAME_API UClass* Z_Construct_UClass_AFCharacter_NoRegister();
	FURRYGAME_API UClass* Z_Construct_UClass_AFCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_FurryGame();
	FURRYGAME_API UFunction* Z_Construct_UFunction_AFCharacter_OnFire();
	FURRYGAME_API UFunction* Z_Construct_UFunction_AFCharacter_OnStartJump();
	FURRYGAME_API UFunction* Z_Construct_UFunction_AFCharacter_OnStopJump();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FURRYGAME_API UClass* Z_Construct_UClass_AFProjectile_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFCharacter::StaticRegisterNativesAFCharacter()
	{
		UClass* Class = AFCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnFire", &AFCharacter::execOnFire },
			{ "OnStartJump", &AFCharacter::execOnStartJump },
			{ "OnStopJump", &AFCharacter::execOnStopJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AFCharacter_OnFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FCharacter.h" },
				{ "ToolTip", "handles firing" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCharacter, "OnFire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFCharacter_OnStartJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FCharacter.h" },
				{ "ToolTip", "sets jump flag when key is pressed" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCharacter, "OnStartJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AFCharacter_OnStopJump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "FCharacter.h" },
				{ "ToolTip", "clears jump flag when key is released" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AFCharacter, "OnStopJump", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFCharacter_NoRegister()
	{
		return AFCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AFCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_FurryGame,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AFCharacter_OnFire, "OnFire" }, // 3960130099
				{ &Z_Construct_UFunction_AFCharacter_OnStartJump, "OnStartJump" }, // 2124837013
				{ &Z_Construct_UFunction_AFCharacter_OnStopJump, "OnStopJump" }, // 3897427473
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "FCharacter.h" },
				{ "ModuleRelativePath", "FCharacter.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_YawSpeed_MetaData[] = {
				{ "Category", "Pawn Setup" },
				{ "ModuleRelativePath", "FCharacter.h" },
				{ "ToolTip", "The speed of pawn rotation" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_YawSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "YawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AFCharacter, YawSpeed), METADATA_PARAMS(NewProp_YawSpeed_MetaData, ARRAY_COUNT(NewProp_YawSpeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Pawn Setup" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "FCharacter.h" },
				{ "ToolTip", "A decal that projects to the cursor location." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld = { UE4CodeGen_Private::EPropertyClass::Object, "CursorToWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AFCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(NewProp_CursorToWorld_MetaData, ARRAY_COUNT(NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[] = {
				{ "Category", "Projectile" },
				{ "ModuleRelativePath", "FCharacter.h" },
				{ "ToolTip", "Projectile class to spawn" },
			};
#endif
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_ProjectileClass = { UE4CodeGen_Private::EPropertyClass::Class, "ProjectileClass", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000010001, 1, nullptr, STRUCT_OFFSET(AFCharacter, ProjectileClass), Z_Construct_UClass_AFProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(NewProp_ProjectileClass_MetaData, ARRAY_COUNT(NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[] = {
				{ "Category", "Gameplay" },
				{ "ModuleRelativePath", "FCharacter.h" },
				{ "ToolTip", "Gun muzzle's offset from the camera location" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "MuzzleOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AFCharacter, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_MuzzleOffset_MetaData, ARRAY_COUNT(NewProp_MuzzleOffset_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_YawSpeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CursorToWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjectileClass,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MuzzleOffset,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFCharacter, 2833672093);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFCharacter(Z_Construct_UClass_AFCharacter, &AFCharacter::StaticClass, TEXT("/Script/FurryGame"), TEXT("AFCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
