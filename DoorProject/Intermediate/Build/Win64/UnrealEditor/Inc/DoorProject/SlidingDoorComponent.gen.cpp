// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/SlidingDoorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlidingDoorComponent() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_USlidingDoorComponent_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_USlidingDoorComponent();
	DOORPROJECT_API UClass* Z_Construct_UClass_UDoorInteractionComponent();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USlidingDoorComponent::StaticRegisterNativesUSlidingDoorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlidingDoorComponent);
	UClass* Z_Construct_UClass_USlidingDoorComponent_NoRegister()
	{
		return USlidingDoorComponent::StaticClass();
	}
	struct Z_Construct_UClass_USlidingDoorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionToMoveTo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositionToMoveTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USlidingDoorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDoorInteractionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlidingDoorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SlidingDoorComponent.h" },
		{ "ModuleRelativePath", "Public/SlidingDoorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USlidingDoorComponent_Statics::NewProp_PositionToMoveTo_MetaData[] = {
		{ "Category", "SlidingDoorComponent" },
		{ "ModuleRelativePath", "Public/SlidingDoorComponent.h" },
		{ "Tooltip", "Where should the door slide to?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlidingDoorComponent_Statics::NewProp_PositionToMoveTo = { "PositionToMoveTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USlidingDoorComponent, PositionToMoveTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USlidingDoorComponent_Statics::NewProp_PositionToMoveTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USlidingDoorComponent_Statics::NewProp_PositionToMoveTo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlidingDoorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlidingDoorComponent_Statics::NewProp_PositionToMoveTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USlidingDoorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlidingDoorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USlidingDoorComponent_Statics::ClassParams = {
		&USlidingDoorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USlidingDoorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USlidingDoorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USlidingDoorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USlidingDoorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USlidingDoorComponent()
	{
		if (!Z_Registration_Info_UClass_USlidingDoorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlidingDoorComponent.OuterSingleton, Z_Construct_UClass_USlidingDoorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USlidingDoorComponent.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<USlidingDoorComponent>()
	{
		return USlidingDoorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USlidingDoorComponent);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SlidingDoorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SlidingDoorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USlidingDoorComponent, USlidingDoorComponent::StaticClass, TEXT("USlidingDoorComponent"), &Z_Registration_Info_UClass_USlidingDoorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlidingDoorComponent), 3971520954U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SlidingDoorComponent_h_3215150090(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SlidingDoorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_SlidingDoorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
