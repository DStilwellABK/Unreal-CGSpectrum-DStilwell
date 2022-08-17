// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/DoorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorActor() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_ADoorActor_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_ADoorActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ADoorActor::StaticRegisterNativesADoorActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorActor);
	UClass* Z_Construct_UClass_ADoorActor_NoRegister()
	{
		return ADoorActor::StaticClass();
	}
	struct Z_Construct_UClass_ADoorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originalRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_originalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startDoorOpen_MetaData[];
#endif
		static void NewProp_startDoorOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_startDoorOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRotationTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentRotationTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoorActor.h" },
		{ "ModuleRelativePath", "Public/DoorActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_DesiredRotation_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "ModuleRelativePath", "Public/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_DesiredRotation = { "DesiredRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorActor, DesiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_DesiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_DesiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_originalRotation_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "ModuleRelativePath", "Public/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_originalRotation = { "originalRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorActor, originalRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_originalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_originalRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_startDoorOpen_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "ModuleRelativePath", "Public/DoorActor.h" },
	};
#endif
	void Z_Construct_UClass_ADoorActor_Statics::NewProp_startDoorOpen_SetBit(void* Obj)
	{
		((ADoorActor*)Obj)->startDoorOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_startDoorOpen = { "startDoorOpen", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADoorActor), &Z_Construct_UClass_ADoorActor_Statics::NewProp_startDoorOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_startDoorOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_startDoorOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_CurrentRotationTime_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "ModuleRelativePath", "Public/DoorActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_CurrentRotationTime = { "CurrentRotationTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorActor, CurrentRotationTime), METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_CurrentRotationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_CurrentRotationTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_DesiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_originalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_startDoorOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_CurrentRotationTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorActor_Statics::ClassParams = {
		&ADoorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorActor()
	{
		if (!Z_Registration_Info_UClass_ADoorActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorActor.OuterSingleton, Z_Construct_UClass_ADoorActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorActor.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<ADoorActor>()
	{
		return ADoorActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorActor);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorActor, ADoorActor::StaticClass, TEXT("ADoorActor"), &Z_Registration_Info_UClass_ADoorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorActor), 534124335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_353677061(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
