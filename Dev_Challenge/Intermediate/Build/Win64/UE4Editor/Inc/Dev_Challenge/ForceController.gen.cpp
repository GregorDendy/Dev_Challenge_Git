// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dev_Challenge/Public/ForceController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceController() {}
// Cross Module References
	DEV_CHALLENGE_API UClass* Z_Construct_UClass_AForceController_NoRegister();
	DEV_CHALLENGE_API UClass* Z_Construct_UClass_AForceController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dev_Challenge();
	DEV_CHALLENGE_API UFunction* Z_Construct_UFunction_AForceController_CheckIfClickingMarble();
	DEV_CHALLENGE_API UFunction* Z_Construct_UFunction_AForceController_HitBall();
	DEV_CHALLENGE_API UClass* Z_Construct_UClass_AMarble_NoRegister();
// End Cross Module References
	void AForceController::StaticRegisterNativesAForceController()
	{
		UClass* Class = AForceController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckIfClickingMarble", &AForceController::execCheckIfClickingMarble },
			{ "HitBall", &AForceController::execHitBall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics
	{
		struct ForceController_eventCheckIfClickingMarble_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ForceController_eventCheckIfClickingMarble_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ForceController_eventCheckIfClickingMarble_Parms), &Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/ForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AForceController, nullptr, "CheckIfClickingMarble", sizeof(ForceController_eventCheckIfClickingMarble_Parms), Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AForceController_CheckIfClickingMarble()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AForceController_CheckIfClickingMarble_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AForceController_HitBall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AForceController_HitBall_Statics::Function_MetaDataParams[] = {
		{ "Category", "Ball" },
		{ "ModuleRelativePath", "Public/ForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AForceController_HitBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AForceController, nullptr, "HitBall", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AForceController_HitBall_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AForceController_HitBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AForceController_HitBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AForceController_HitBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AForceController_NoRegister()
	{
		return AForceController::StaticClass();
	}
	struct Z_Construct_UClass_AForceController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_marble_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_marble;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AForceController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dev_Challenge,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AForceController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AForceController_CheckIfClickingMarble, "CheckIfClickingMarble" }, // 3456165799
		{ &Z_Construct_UFunction_AForceController_HitBall, "HitBall" }, // 2411083578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForceController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ForceController.h" },
		{ "ModuleRelativePath", "Public/ForceController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForceController_Statics::NewProp_PowerMultiplier_MetaData[] = {
		{ "Category", "Marble" },
		{ "ModuleRelativePath", "Public/ForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AForceController_Statics::NewProp_PowerMultiplier = { "PowerMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForceController, PowerMultiplier), METADATA_PARAMS(Z_Construct_UClass_AForceController_Statics::NewProp_PowerMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AForceController_Statics::NewProp_PowerMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AForceController_Statics::NewProp_marble_MetaData[] = {
		{ "Category", "Marble" },
		{ "ModuleRelativePath", "Public/ForceController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AForceController_Statics::NewProp_marble = { "marble", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AForceController, marble), Z_Construct_UClass_AMarble_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AForceController_Statics::NewProp_marble_MetaData, ARRAY_COUNT(Z_Construct_UClass_AForceController_Statics::NewProp_marble_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AForceController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForceController_Statics::NewProp_PowerMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AForceController_Statics::NewProp_marble,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AForceController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AForceController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AForceController_Statics::ClassParams = {
		&AForceController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AForceController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AForceController_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AForceController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AForceController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AForceController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AForceController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AForceController, 203020045);
	template<> DEV_CHALLENGE_API UClass* StaticClass<AForceController>()
	{
		return AForceController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AForceController(Z_Construct_UClass_AForceController, &AForceController::StaticClass, TEXT("/Script/Dev_Challenge"), TEXT("AForceController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AForceController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
