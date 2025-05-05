// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GlowingQuad/Public/GlowUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlowUtils() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	GLOWINGQUAD_API UClass* Z_Construct_UClass_UGlowUtils();
	GLOWINGQUAD_API UClass* Z_Construct_UClass_UGlowUtils_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GlowingQuad();
// End Cross Module References
	DEFINE_FUNCTION(UGlowUtils::execGenerateSplitGlowMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_TARRAY_REF(int32,Z_Param_Out_FillIndexBuffer);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_FillVertexBuffer);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_FillColorBuffer);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_FillUV1);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_FillUV2);
		P_GET_TARRAY_REF(int32,Z_Param_Out_GlowIndexBuffer);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_GlowVertexBuffer);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_GlowColorBuffer);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GlowUV1);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_GlowUV2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Eps);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlowUtils::GenerateSplitGlowMesh(Z_Param_Out_Points,Z_Param_Out_FillIndexBuffer,Z_Param_Out_FillVertexBuffer,Z_Param_Out_FillColorBuffer,Z_Param_Out_FillUV1,Z_Param_Out_FillUV2,Z_Param_Out_GlowIndexBuffer,Z_Param_Out_GlowVertexBuffer,Z_Param_Out_GlowColorBuffer,Z_Param_Out_GlowUV1,Z_Param_Out_GlowUV2,Z_Param_Eps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGlowUtils::execGenerateGlowMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Points);
		P_GET_TARRAY_REF(int32,Z_Param_Out_IndexBuffer);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_VertexBuffer);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ColorBuffer);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV2);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Eps);
		P_FINISH;
		P_NATIVE_BEGIN;
		UGlowUtils::GenerateGlowMesh(Z_Param_Out_Points,Z_Param_Out_IndexBuffer,Z_Param_Out_VertexBuffer,Z_Param_Out_ColorBuffer,Z_Param_Out_UV1,Z_Param_Out_UV2,Z_Param_Eps);
		P_NATIVE_END;
	}
	void UGlowUtils::StaticRegisterNativesUGlowUtils()
	{
		UClass* Class = UGlowUtils::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateGlowMesh", &UGlowUtils::execGenerateGlowMesh },
			{ "GenerateSplitGlowMesh", &UGlowUtils::execGenerateSplitGlowMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics
	{
		struct GlowUtils_eventGenerateGlowMesh_Parms
		{
			TArray<FVector> Points;
			TArray<int32> IndexBuffer;
			TArray<FVector> VertexBuffer;
			TArray<FLinearColor> ColorBuffer;
			TArray<FVector2D> UV1;
			TArray<FVector2D> UV2;
			float Eps;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_IndexBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColorBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV1_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_UV2_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UV2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Eps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateGlowMesh_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_IndexBuffer_Inner = { "IndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_IndexBuffer = { "IndexBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateGlowMesh_Parms, IndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_VertexBuffer_Inner = { "VertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_VertexBuffer = { "VertexBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateGlowMesh_Parms, VertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_ColorBuffer_Inner = { "ColorBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_ColorBuffer = { "ColorBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateGlowMesh_Parms, ColorBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV1_Inner = { "UV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateGlowMesh_Parms, UV1), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV2_Inner = { "UV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateGlowMesh_Parms, UV2), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Eps = { "Eps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateGlowMesh_Parms, Eps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_IndexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_IndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_VertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_VertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_ColorBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_ColorBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_UV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::NewProp_Eps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Something" },
		{ "CPP_Default_Eps", "0.100000" },
		{ "ModuleRelativePath", "Public/GlowUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlowUtils, nullptr, "GenerateGlowMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::GlowUtils_eventGenerateGlowMesh_Parms), Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics
	{
		struct GlowUtils_eventGenerateSplitGlowMesh_Parms
		{
			TArray<FVector> Points;
			TArray<int32> FillIndexBuffer;
			TArray<FVector> FillVertexBuffer;
			TArray<FLinearColor> FillColorBuffer;
			TArray<FVector2D> FillUV1;
			TArray<FVector2D> FillUV2;
			TArray<int32> GlowIndexBuffer;
			TArray<FVector> GlowVertexBuffer;
			TArray<FLinearColor> GlowColorBuffer;
			TArray<FVector2D> GlowUV1;
			TArray<FVector2D> GlowUV2;
			float Eps;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_FillIndexBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FillIndexBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillVertexBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FillVertexBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillColorBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FillColorBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillUV1_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FillUV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FillUV2_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FillUV2;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_GlowIndexBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlowIndexBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlowVertexBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlowVertexBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlowColorBuffer_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlowColorBuffer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlowUV1_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlowUV1;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GlowUV2_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GlowUV2;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Eps;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Points_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Points_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillIndexBuffer_Inner = { "FillIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillIndexBuffer = { "FillIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, FillIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillVertexBuffer_Inner = { "FillVertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillVertexBuffer = { "FillVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, FillVertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillColorBuffer_Inner = { "FillColorBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillColorBuffer = { "FillColorBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, FillColorBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV1_Inner = { "FillUV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV1 = { "FillUV1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, FillUV1), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV2_Inner = { "FillUV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV2 = { "FillUV2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, FillUV2), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowIndexBuffer_Inner = { "GlowIndexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowIndexBuffer = { "GlowIndexBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, GlowIndexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowVertexBuffer_Inner = { "GlowVertexBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowVertexBuffer = { "GlowVertexBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, GlowVertexBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowColorBuffer_Inner = { "GlowColorBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowColorBuffer = { "GlowColorBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, GlowColorBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV1_Inner = { "GlowUV1", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV1 = { "GlowUV1", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, GlowUV1), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV2_Inner = { "GlowUV2", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV2 = { "GlowUV2", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, GlowUV2), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Eps = { "Eps", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GlowUtils_eventGenerateSplitGlowMesh_Parms, Eps), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillIndexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillVertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillVertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillColorBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillColorBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_FillUV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowIndexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowIndexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowVertexBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowVertexBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowColorBuffer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowColorBuffer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV1_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV2_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_GlowUV2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::NewProp_Eps,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Something" },
		{ "CPP_Default_Eps", "0.100000" },
		{ "ModuleRelativePath", "Public/GlowUtils.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGlowUtils, nullptr, "GenerateSplitGlowMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::GlowUtils_eventGenerateSplitGlowMesh_Parms), Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGlowUtils);
	UClass* Z_Construct_UClass_UGlowUtils_NoRegister()
	{
		return UGlowUtils::StaticClass();
	}
	struct Z_Construct_UClass_UGlowUtils_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGlowUtils_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GlowingQuad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGlowUtils_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGlowUtils_GenerateGlowMesh, "GenerateGlowMesh" }, // 3372815863
		{ &Z_Construct_UFunction_UGlowUtils_GenerateSplitGlowMesh, "GenerateSplitGlowMesh" }, // 2098302315
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGlowUtils_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GlowUtils.h" },
		{ "ModuleRelativePath", "Public/GlowUtils.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGlowUtils_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGlowUtils>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGlowUtils_Statics::ClassParams = {
		&UGlowUtils::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGlowUtils_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGlowUtils_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGlowUtils()
	{
		if (!Z_Registration_Info_UClass_UGlowUtils.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGlowUtils.OuterSingleton, Z_Construct_UClass_UGlowUtils_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGlowUtils.OuterSingleton;
	}
	template<> GLOWINGQUAD_API UClass* StaticClass<UGlowUtils>()
	{
		return UGlowUtils::StaticClass();
	}
	UGlowUtils::UGlowUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGlowUtils);
	UGlowUtils::~UGlowUtils() {}
	struct Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_GlowUtils_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_GlowUtils_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGlowUtils, UGlowUtils::StaticClass, TEXT("UGlowUtils"), &Z_Registration_Info_UClass_UGlowUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGlowUtils), 2701893342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_GlowUtils_h_1405921776(TEXT("/Script/GlowingQuad"),
		Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_GlowUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IDM_Compressed_GlowingQuad_main_newversion_HostProject_Plugins_GlowingQuad_Source_GlowingQuad_Public_GlowUtils_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
