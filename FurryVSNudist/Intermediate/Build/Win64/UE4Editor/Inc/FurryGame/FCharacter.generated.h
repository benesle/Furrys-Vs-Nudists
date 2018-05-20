// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FURRYGAME_FCharacter_generated_h
#error "FCharacter.generated.h already included, missing '#pragma once' in FCharacter.h"
#endif
#define FURRYGAME_FCharacter_generated_h

#define FurryGame_Source_FurryGame_FCharacter_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartJump(); \
		P_NATIVE_END; \
	}


#define FurryGame_Source_FurryGame_FCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStopJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStopJump(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnStartJump) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnStartJump(); \
		P_NATIVE_END; \
	}


#define FurryGame_Source_FurryGame_FCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFCharacter(); \
	friend FURRYGAME_API class UClass* Z_Construct_UClass_AFCharacter(); \
public: \
	DECLARE_CLASS(AFCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FurryGame"), NO_API) \
	DECLARE_SERIALIZER(AFCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FurryGame_Source_FurryGame_FCharacter_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAFCharacter(); \
	friend FURRYGAME_API class UClass* Z_Construct_UClass_AFCharacter(); \
public: \
	DECLARE_CLASS(AFCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FurryGame"), NO_API) \
	DECLARE_SERIALIZER(AFCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FurryGame_Source_FurryGame_FCharacter_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFCharacter(AFCharacter&&); \
	NO_API AFCharacter(const AFCharacter&); \
public:


#define FurryGame_Source_FurryGame_FCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFCharacter(AFCharacter&&); \
	NO_API AFCharacter(const AFCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFCharacter)


#define FurryGame_Source_FurryGame_FCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AFCharacter, CursorToWorld); } \
	FORCEINLINE static uint32 __PPO__YawSpeed() { return STRUCT_OFFSET(AFCharacter, YawSpeed); }


#define FurryGame_Source_FurryGame_FCharacter_h_14_PROLOG
#define FurryGame_Source_FurryGame_FCharacter_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurryGame_Source_FurryGame_FCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FurryGame_Source_FurryGame_FCharacter_h_17_RPC_WRAPPERS \
	FurryGame_Source_FurryGame_FCharacter_h_17_INCLASS \
	FurryGame_Source_FurryGame_FCharacter_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FurryGame_Source_FurryGame_FCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FurryGame_Source_FurryGame_FCharacter_h_17_PRIVATE_PROPERTY_OFFSET \
	FurryGame_Source_FurryGame_FCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FurryGame_Source_FurryGame_FCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FurryGame_Source_FurryGame_FCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FurryGame_Source_FurryGame_FCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
