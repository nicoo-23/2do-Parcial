// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavesUSFX2026/Public/DisparoAlienigena.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisparoAlienigena() {}
// Cross Module References
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ADisparoAlienigena_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_ADisparoAlienigena();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_NavesUSFX2026();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	NAVESUSFX2026_API UClass* Z_Construct_UClass_UDisparoEnemigo_NoRegister();
// End Cross Module References
	void ADisparoAlienigena::StaticRegisterNativesADisparoAlienigena()
	{
	}
	UClass* Z_Construct_UClass_ADisparoAlienigena_NoRegister()
	{
		return ADisparoAlienigena::StaticClass();
	}
	struct Z_Construct_UClass_ADisparoAlienigena_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshDisparo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshDisparo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADisparoAlienigena_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavesUSFX2026,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoAlienigena_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ADisparoAlienigena ? Producto Concreto del Factory Method\n *\n * Es el disparo especifico que crea AEnemigoAlienigena.\n * Implementa IDisparoEnemigo con su propio comportamiento.\n */" },
		{ "IncludePath", "DisparoAlienigena.h" },
		{ "ModuleRelativePath", "Public/DisparoAlienigena.h" },
		{ "ToolTip", "ADisparoAlienigena ? Producto Concreto del Factory Method\n\nEs el disparo especifico que crea AEnemigoAlienigena.\nImplementa IDisparoEnemigo con su propio comportamiento." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADisparoAlienigena_Statics::NewProp_MeshDisparo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisparoAlienigena.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADisparoAlienigena_Statics::NewProp_MeshDisparo = { "MeshDisparo", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADisparoAlienigena, MeshDisparo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADisparoAlienigena_Statics::NewProp_MeshDisparo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoAlienigena_Statics::NewProp_MeshDisparo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADisparoAlienigena_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADisparoAlienigena_Statics::NewProp_MeshDisparo,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADisparoAlienigena_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDisparoEnemigo_NoRegister, (int32)VTABLE_OFFSET(ADisparoAlienigena, IDisparoEnemigo), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADisparoAlienigena_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADisparoAlienigena>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADisparoAlienigena_Statics::ClassParams = {
		&ADisparoAlienigena::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADisparoAlienigena_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoAlienigena_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADisparoAlienigena_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADisparoAlienigena_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADisparoAlienigena()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADisparoAlienigena_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADisparoAlienigena, 1299157928);
	template<> NAVESUSFX2026_API UClass* StaticClass<ADisparoAlienigena>()
	{
		return ADisparoAlienigena::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADisparoAlienigena(Z_Construct_UClass_ADisparoAlienigena, &ADisparoAlienigena::StaticClass, TEXT("/Script/NavesUSFX2026"), TEXT("ADisparoAlienigena"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADisparoAlienigena);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
