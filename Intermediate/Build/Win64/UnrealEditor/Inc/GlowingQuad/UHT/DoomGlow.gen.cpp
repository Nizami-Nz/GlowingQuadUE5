// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlowingQuad/Public/DoomGlow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoomGlow() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	GLOWINGQUAD_API UClass* Z_Construct_UClass_ADoomGlow();
	GLOWINGQUAD_API UClass* Z_Construct_UClass_ADoomGlow_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GlowingQuad();
// End Cross Module References
	DEFINE_FUNCTION(ADoomGlow::execSetMaterials)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewGlowMaterial);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewQuadMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterials(Z_Param_NewGlowMaterial,Z_Param_NewQuadMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoomGlow::execSetQuadPoints)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_NewQuadPoints);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuadPoints(Z_Param_Out_NewQuadPoints);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADoomGlow::execSetQuadSize)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuadSize(Z_Param_NewSize);
		P_NATIVE_END;
	}
	void ADoomGlow::StaticRegisterNativesADoomGlow()
	{
		UClass* Class = ADoomGlow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMaterials", &ADoomGlow::execSetMaterials },
			{ "SetQuadPoints", &ADoomGlow::execSetQuadPoints },
			{ "SetQuadSize", &ADoomGlow::execSetQuadSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics
	{
		struct DoomGlow_eventSetMaterials_Parms
		{
			UMaterialInterface* NewGlowMaterial;
			UMaterialInterface* NewQuadMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGlowMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewQuadMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::NewProp_NewGlowMaterial = { "NewGlowMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DoomGlow_eventSetMaterials_Parms, NewGlowMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::NewProp_NewQuadMaterial = { "NewQuadMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DoomGlow_eventSetMaterials_Parms, NewQuadMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::NewProp_NewGlowMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::NewProp_NewQuadMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Something" },
		{ "Comment", "// Updates the materials for the procedural mesh component\n// This regenerates the procedural mesh, so might be expensive\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "Updates the materials for the procedural mesh component\nThis regenerates the procedural mesh, so might be expensive" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoomGlow, nullptr, "SetMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::DoomGlow_eventSetMaterials_Parms), Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoomGlow_SetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoomGlow_SetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics
	{
		struct DoomGlow_eventSetQuadPoints_Parms
		{
			TArray<FVector> NewQuadPoints;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewQuadPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewQuadPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewQuadPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::NewProp_NewQuadPoints_Inner = { "NewQuadPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::NewProp_NewQuadPoints_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::NewProp_NewQuadPoints = { "NewQuadPoints", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DoomGlow_eventSetQuadPoints_Parms, NewQuadPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::NewProp_NewQuadPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::NewProp_NewQuadPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::NewProp_NewQuadPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::NewProp_NewQuadPoints,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::Function_MetaDataParams[] = {
		{ "Category", "Something" },
		{ "Comment", "// Manually set the quad points. Expects 4 points. The index buffer for the quad is {0,1,2, 0,2,3}.\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "Manually set the quad points. Expects 4 points. The index buffer for the quad is {0,1,2, 0,2,3}." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoomGlow, nullptr, "SetQuadPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::DoomGlow_eventSetQuadPoints_Parms), Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoomGlow_SetQuadPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoomGlow_SetQuadPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics
	{
		struct DoomGlow_eventSetQuadSize_Parms
		{
			FVector2D NewSize;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::NewProp_NewSize = { "NewSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DoomGlow_eventSetQuadSize_Parms, NewSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::NewProp_NewSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Something" },
		{ "Comment", "// Updates the quad size and points\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "Updates the quad size and points" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADoomGlow, nullptr, "SetQuadSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::DoomGlow_eventSetQuadSize_Parms), Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADoomGlow_SetQuadSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADoomGlow_SetQuadSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoomGlow);
	UClass* Z_Construct_UClass_ADoomGlow_NoRegister()
	{
		return ADoomGlow::StaticClass();
	}
	struct Z_Construct_UClass_ADoomGlow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlowColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FillColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GlowSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGlowSizeIgnoresScale_MetaData[];
#endif
		static void NewProp_bGlowSizeIgnoresScale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlowSizeIgnoresScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuadSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBottom_MetaData[];
#endif
		static void NewProp_bShowBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBottom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GlowMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GlowMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuadMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleFadeRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AngleFadeRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFadeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceFadeCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTickInViewports_MetaData[];
#endif
		static void NewProp_bTickInViewports_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTickInViewports;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralMeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralMeshComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebugEdges_MetaData[];
#endif
		static void NewProp_bDrawDebugEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugEdges;
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuadPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuadPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuadPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoomGlow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GlowingQuad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADoomGlow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADoomGlow_SetMaterials, "SetMaterials" }, // 17800368
		{ &Z_Construct_UFunction_ADoomGlow_SetQuadPoints, "SetQuadPoints" }, // 3523645239
		{ &Z_Construct_UFunction_ADoomGlow_SetQuadSize, "SetQuadSize" }, // 1760446342
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DoomGlow.h" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowColor_MetaData[] = {
		{ "Category", "Something" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowColor = { "GlowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, GlowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_FillColor_MetaData[] = {
		{ "Category", "Something" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_FillColor = { "FillColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, FillColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_FillColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_FillColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowSize_MetaData[] = {
		{ "Category", "Something" },
		{ "Comment", "// The width of the glow effect in local space\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "The width of the glow effect in local space" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowSize = { "GlowSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, GlowSize), METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_bGlowSizeIgnoresScale_MetaData[] = {
		{ "Category", "Something" },
		{ "Comment", "// Should the glow size ignore actor's scale and always be in world space units?\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "Should the glow size ignore actor's scale and always be in world space units?" },
	};
#endif
	void Z_Construct_UClass_ADoomGlow_Statics::NewProp_bGlowSizeIgnoresScale_SetBit(void* Obj)
	{
		((ADoomGlow*)Obj)->bGlowSizeIgnoresScale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_bGlowSizeIgnoresScale = { "bGlowSizeIgnoresScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADoomGlow), &Z_Construct_UClass_ADoomGlow_Statics::NewProp_bGlowSizeIgnoresScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bGlowSizeIgnoresScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bGlowSizeIgnoresScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadSize_MetaData[] = {
		{ "Category", "Something" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadSize = { "QuadSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, QuadSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_bShowBottom_MetaData[] = {
		{ "Category", "Something" },
		{ "Comment", "// One-sided or two-sided quad\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "One-sided or two-sided quad" },
	};
#endif
	void Z_Construct_UClass_ADoomGlow_Statics::NewProp_bShowBottom_SetBit(void* Obj)
	{
		((ADoomGlow*)Obj)->bShowBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_bShowBottom = { "bShowBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADoomGlow), &Z_Construct_UClass_ADoomGlow_Statics::NewProp_bShowBottom_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bShowBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bShowBottom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowMaterial_MetaData[] = {
		{ "Category", "Something" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowMaterial = { "GlowMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, GlowMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadMaterial_MetaData[] = {
		{ "Category", "Something" },
		{ "Comment", "// If this is the same as GlowMaterial, they will be drawn as one mesh\n// If this material is different, the quad will be drawn as a separate section\n// If this material is null, the quad will not be drawn\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "If this is the same as GlowMaterial, they will be drawn as one mesh\nIf this material is different, the quad will be drawn as a separate section\nIf this material is null, the quad will not be drawn" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadMaterial = { "QuadMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, QuadMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_AngleFadeRange_MetaData[] = {
		{ "Category", "Something" },
		{ "Comment", "// Glow will fade from 1 to 0 when the cosine of the glancing angle goes from Y to X\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "Glow will fade from 1 to 0 when the cosine of the glancing angle goes from Y to X" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_AngleFadeRange = { "AngleFadeRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, AngleFadeRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_AngleFadeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_AngleFadeRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_DistanceFadeCurve_MetaData[] = {
		{ "Category", "Something" },
		{ "Comment", "// Use this to fade the Glow Size depending on the distance between the camera and the center of the quad\n" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
		{ "ToolTip", "Use this to fade the Glow Size depending on the distance between the camera and the center of the quad" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_DistanceFadeCurve = { "DistanceFadeCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, DistanceFadeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_DistanceFadeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_DistanceFadeCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_bTickInViewports_MetaData[] = {
		{ "Category", "Something" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	void Z_Construct_UClass_ADoomGlow_Statics::NewProp_bTickInViewports_SetBit(void* Obj)
	{
		((ADoomGlow*)Obj)->bTickInViewports = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_bTickInViewports = { "bTickInViewports", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADoomGlow), &Z_Construct_UClass_ADoomGlow_Statics::NewProp_bTickInViewports_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bTickInViewports_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bTickInViewports_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_ProceduralMeshComp_MetaData[] = {
		{ "Category", "Something" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_ProceduralMeshComp = { "ProceduralMeshComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, ProceduralMeshComp), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_ProceduralMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_ProceduralMeshComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_bDrawDebugEdges_MetaData[] = {
		{ "Category", "Something" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	void Z_Construct_UClass_ADoomGlow_Statics::NewProp_bDrawDebugEdges_SetBit(void* Obj)
	{
		((ADoomGlow*)Obj)->bDrawDebugEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_bDrawDebugEdges = { "bDrawDebugEdges", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ADoomGlow), &Z_Construct_UClass_ADoomGlow_Statics::NewProp_bDrawDebugEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bDrawDebugEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_bDrawDebugEdges_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadPoints_Inner = { "QuadPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadPoints_MetaData[] = {
		{ "Category", "Something" },
		{ "ModuleRelativePath", "Public/DoomGlow.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadPoints = { "QuadPoints", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADoomGlow, QuadPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoomGlow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_FillColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_bGlowSizeIgnoresScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_bShowBottom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_GlowMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_AngleFadeRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_DistanceFadeCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_bTickInViewports,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_ProceduralMeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_bDrawDebugEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoomGlow_Statics::NewProp_QuadPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoomGlow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoomGlow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoomGlow_Statics::ClassParams = {
		&ADoomGlow::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADoomGlow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoomGlow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoomGlow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoomGlow()
	{
		if (!Z_Registration_Info_UClass_ADoomGlow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoomGlow.OuterSingleton, Z_Construct_UClass_ADoomGlow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoomGlow.OuterSingleton;
	}
	template<> GLOWINGQUAD_API UClass* StaticClass<ADoomGlow>()
	{
		return ADoomGlow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoomGlow);
	ADoomGlow::~ADoomGlow() {}
	struct Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_DoomGlow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_DoomGlow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoomGlow, ADoomGlow::StaticClass, TEXT("ADoomGlow"), &Z_Registration_Info_UClass_ADoomGlow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoomGlow), 735319567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_DoomGlow_h_602833951(TEXT("/Script/GlowingQuad"),
		Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_DoomGlow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_DoomGlow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
