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
	DOORPROJECT_API UClass* Z_Construct_UClass_ATriggerBoxActor_NoRegister();
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorActor_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "DoorActor" },
		{ "Comment", "//UPROPERTY(EditAnywhere)\n//\x09""FRotator closeDoorRotation = FRotator::ZeroRotator;\n//UPROPERTY(EditAnywhere)\n//\x09""FRotator openDoorRotation = FRotator::ZeroRotator;\n//void BindToInput();\n" },
		{ "ModuleRelativePath", "Public/DoorActor.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere)\n       FRotator closeDoorRotation = FRotator::ZeroRotator;\nUPROPERTY(EditAnywhere)\n       FRotator openDoorRotation = FRotator::ZeroRotator;\nvoid BindToInput();" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorActor_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorActor, TriggerBox), Z_Construct_UClass_ATriggerBoxActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoorActor_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorActor_Statics::NewProp_TriggerBox_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorActor_Statics::NewProp_TriggerBox,
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
		{ Z_Construct_UClass_ADoorActor, ADoorActor::StaticClass, TEXT("ADoorActor"), &Z_Registration_Info_UClass_ADoorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorActor), 1611106728U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_1193189556(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_DoorActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
