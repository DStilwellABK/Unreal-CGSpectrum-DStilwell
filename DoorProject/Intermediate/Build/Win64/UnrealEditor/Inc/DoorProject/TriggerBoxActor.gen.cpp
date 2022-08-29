// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DoorProject/Public/TriggerBoxActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBoxActor() {}
// Cross Module References
	DOORPROJECT_API UClass* Z_Construct_UClass_ATriggerBoxActor_NoRegister();
	DOORPROJECT_API UClass* Z_Construct_UClass_ATriggerBoxActor();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_DoorProject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerBoxActor::execEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_overlappedActor);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Event(Z_Param_overlappedActor,Z_Param_otherActor);
		P_NATIVE_END;
	}
	void ATriggerBoxActor::StaticRegisterNativesATriggerBoxActor()
	{
		UClass* Class = ATriggerBoxActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Event", &ATriggerBoxActor::execEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerBoxActor_Event_Statics
	{
		struct TriggerBoxActor_eventEvent_Parms
		{
			AActor* overlappedActor;
			AActor* otherActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::NewProp_overlappedActor = { "overlappedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBoxActor_eventEvent_Parms, overlappedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerBoxActor_eventEvent_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::NewProp_overlappedActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::NewProp_otherActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerBoxActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerBoxActor, nullptr, "Event", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::TriggerBoxActor_eventEvent_Parms), Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerBoxActor_Event()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATriggerBoxActor_Event_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerBoxActor);
	UClass* Z_Construct_UClass_ATriggerBoxActor_NoRegister()
	{
		return ATriggerBoxActor::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBoxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBoxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_DoorProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerBoxActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerBoxActor_Event, "Event" }, // 2576960122
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TriggerBoxActor.h" },
		{ "ModuleRelativePath", "Public/TriggerBoxActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBoxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBoxActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBoxActor_Statics::ClassParams = {
		&ATriggerBoxActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBoxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBoxActor()
	{
		if (!Z_Registration_Info_UClass_ATriggerBoxActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerBoxActor.OuterSingleton, Z_Construct_UClass_ATriggerBoxActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerBoxActor.OuterSingleton;
	}
	template<> DOORPROJECT_API UClass* StaticClass<ATriggerBoxActor>()
	{
		return ATriggerBoxActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBoxActor);
	struct Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerBoxActor, ATriggerBoxActor::StaticClass, TEXT("ATriggerBoxActor"), &Z_Registration_Info_UClass_ATriggerBoxActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerBoxActor), 211840982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_25534807(TEXT("/Script/DoorProject"),
		Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DoorProject_Source_DoorProject_Public_TriggerBoxActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
