// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVESUSFX2026_Amigo_generated_h
#error "Amigo.generated.h already included, missing '#pragma once' in Amigo.h"
#endif
#define NAVESUSFX2026_Amigo_generated_h

#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_SPARSE_DATA
#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_RPC_WRAPPERS
#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UAmigo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UAmigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UAmigo(UAmigo&&); \
	NAVESUSFX2026_API UAmigo(const UAmigo&); \
public:


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NAVESUSFX2026_API UAmigo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NAVESUSFX2026_API UAmigo(UAmigo&&); \
	NAVESUSFX2026_API UAmigo(const UAmigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NAVESUSFX2026_API, UAmigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAmigo); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAmigo)


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAmigo(); \
	friend struct Z_Construct_UClass_UAmigo_Statics; \
public: \
	DECLARE_CLASS(UAmigo, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/NavesUSFX2026"), NAVESUSFX2026_API) \
	DECLARE_SERIALIZER(UAmigo)


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_GENERATED_UINTERFACE_BODY() \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_GENERATED_UINTERFACE_BODY() \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAmigo() {} \
public: \
	typedef UAmigo UClassType; \
	typedef IAmigo ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IAmigo() {} \
public: \
	typedef UAmigo UClassType; \
	typedef IAmigo ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_10_PROLOG
#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_SPARSE_DATA \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_RPC_WRAPPERS \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_SPARSE_DATA \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVESUSFX2026_API UClass* StaticClass<class UAmigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NAVESUSFX2P_Source_NavesUSFX2026_Amigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
