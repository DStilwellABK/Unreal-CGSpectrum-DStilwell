// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/HudWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudWidget() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_UHudWidget_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_UHudWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
// End Cross Module References
	void UHudWidget::StaticRegisterNativesUHudWidget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHudWidget);
	UClass* Z_Construct_UClass_UHudWidget_NoRegister()
	{
		return UHudWidget::StaticClass();
	}
	struct Z_Construct_UClass_UHudWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HudWidget.h" },
		{ "ModuleRelativePath", "Public/HudWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHudWidget_Statics::ClassParams = {
		&UHudWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudWidget()
	{
		if (!Z_Registration_Info_UClass_UHudWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHudWidget.OuterSingleton, Z_Construct_UClass_UHudWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHudWidget.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<UHudWidget>()
	{
		return UHudWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudWidget);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_HudWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_HudWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHudWidget, UHudWidget::StaticClass, TEXT("UHudWidget"), &Z_Registration_Info_UClass_UHudWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHudWidget), 668267107U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_HudWidget_h_2999361364(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_HudWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_HudWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
