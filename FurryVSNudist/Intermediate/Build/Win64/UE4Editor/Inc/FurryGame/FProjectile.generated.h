// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FURRYGAME_FProjectile_generated_h
#error "FProjectile.generated.h already included, missing '#pragma once' in FProjectile.h"
#endif
#define FURRYGAME_FProjectile_generated_h

#define FurryGame_Source_FurryGame_FProjectile_h_15_RPC_WRAPPERS
#define FurryGame_Source_FurryGame_FProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FurryGame_Source_FurryGame_FProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFProjectile(); \
	friend FURRYGAME_API class UClass* Z_Construct_UClass_AFProjectile(); \
public: \
	DECLARE_CLASS(AFProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FurryGame"), NO_API) \
	DECLARE_SERIALIZER(AFProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FurryGame_Source_FurryGame_FProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFProjectile(); \
	friend FURRYGAME_API class UClass* Z_Construct_UClass_AFProjectile(); \
public: \
	DECLARE_CLASS(AFProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FurryGame"), NO_API) \
	DECLARE_SERIALIZER(AFProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FurryGame_Source_FurryGame_FProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFProjectile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFProjectile(AFProjectile&&); \
	NO_API AFProjectile(const AFProjectile&); \
public:


#define FurryGame_Source_FurryGame_FProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFProjectile(AFProjectile&&); \
	NO_API AFProjectile(const AFProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFProjectile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFProjectile)


#define FurryGame_Source_FurryGame_FProjectile_h_15_PRIVATE_PROPERTY_OFFSET
#define FurryGame_Source_FurryGame_FProjectile_h_12_PROLOG
#define FurryGame_Source_FurryGame_FProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurryGame_Source_FurryGame_FProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FurryGame_Source_FurryGame_FProjectile_h_15_RPC_WRAPPERS \
	FurryGame_Source_FurryGame_FProjectile_h_15_INCLASS \
	FurryGame_Source_FurryGame_FProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FurryGame_Source_FurryGame_FProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurryGame_Source_FurryGame_FProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FurryGame_Source_FurryGame_FProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FurryGame_Source_FurryGame_FProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FurryGame_Source_FurryGame_FProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FurryGame_Source_FurryGame_FProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
