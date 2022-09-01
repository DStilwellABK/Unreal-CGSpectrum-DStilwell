// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AiPrototyping/AiPrototypingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAiPrototypingGameMode() {}
// Cross Module References
	AIPROTOTYPING_API UClass* Z_Construct_UClass_AAiPrototypingGameMode_NoRegister();
	AIPROTOTYPING_API UClass* Z_Construct_UClass_AAiPrototypingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AiPrototyping();
// End Cross Module References
	void AAiPrototypingGameMode::StaticRegisterNativesAAiPrototypingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAiPrototypingGameMode);
	UClass* Z_Construct_UClass_AAiPrototypingGameMode_NoRegister()
	{
		return AAiPrototypingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAiPrototypingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAiPrototypingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AiPrototyping,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAiPrototypingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AiPrototypingGameMode.h" },
		{ "ModuleRelativePath", "AiPrototypingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAiPrototypingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAiPrototypingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAiPrototypingGameMode_Statics::ClassParams = {
		&AAiPrototypingGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAiPrototypingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAiPrototypingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAiPrototypingGameMode()
	{
		if (!Z_Registration_Info_UClass_AAiPrototypingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAiPrototypingGameMode.OuterSingleton, Z_Construct_UClass_AAiPrototypingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAiPrototypingGameMode.OuterSingleton;
	}
	template<> AIPROTOTYPING_API UClass* StaticClass<AAiPrototypingGameMode>()
	{
		return AAiPrototypingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAiPrototypingGameMode);
	struct Z_CompiledInDeferFile_FID_AiPrototyping_Source_AiPrototyping_AiPrototypingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AiPrototyping_Source_AiPrototyping_AiPrototypingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAiPrototypingGameMode, AAiPrototypingGameMode::StaticClass, TEXT("AAiPrototypingGameMode"), &Z_Registration_Info_UClass_AAiPrototypingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAiPrototypingGameMode), 1762645463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AiPrototyping_Source_AiPrototyping_AiPrototypingGameMode_h_1939569369(TEXT("/Script/AiPrototyping"),
		Z_CompiledInDeferFile_FID_AiPrototyping_Source_AiPrototyping_AiPrototypingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AiPrototyping_Source_AiPrototyping_AiPrototypingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
