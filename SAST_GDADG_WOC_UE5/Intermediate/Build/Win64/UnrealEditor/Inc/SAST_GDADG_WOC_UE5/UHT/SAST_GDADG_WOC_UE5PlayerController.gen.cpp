// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SAST_GDADG_WOC_UE5/SAST_GDADG_WOC_UE5PlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAST_GDADG_WOC_UE5PlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SAST_GDADG_WOC_UE5_API UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController();
SAST_GDADG_WOC_UE5_API UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SAST_GDADG_WOC_UE5();
// End Cross Module References

// Begin Class ASAST_GDADG_WOC_UE5PlayerController
void ASAST_GDADG_WOC_UE5PlayerController::StaticRegisterNativesASAST_GDADG_WOC_UE5PlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAST_GDADG_WOC_UE5PlayerController);
UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_NoRegister()
{
	return ASAST_GDADG_WOC_UE5PlayerController::StaticClass();
}
struct Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SAST_GDADG_WOC_UE5PlayerController.h" },
		{ "ModuleRelativePath", "SAST_GDADG_WOC_UE5PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "SAST_GDADG_WOC_UE5PlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAST_GDADG_WOC_UE5PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASAST_GDADG_WOC_UE5PlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SAST_GDADG_WOC_UE5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::ClassParams = {
	&ASAST_GDADG_WOC_UE5PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController()
{
	if (!Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5PlayerController.OuterSingleton, Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5PlayerController.OuterSingleton;
}
template<> SAST_GDADG_WOC_UE5_API UClass* StaticClass<ASAST_GDADG_WOC_UE5PlayerController>()
{
	return ASAST_GDADG_WOC_UE5PlayerController::StaticClass();
}
ASAST_GDADG_WOC_UE5PlayerController::ASAST_GDADG_WOC_UE5PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASAST_GDADG_WOC_UE5PlayerController);
ASAST_GDADG_WOC_UE5PlayerController::~ASAST_GDADG_WOC_UE5PlayerController() {}
// End Class ASAST_GDADG_WOC_UE5PlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5PlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASAST_GDADG_WOC_UE5PlayerController, ASAST_GDADG_WOC_UE5PlayerController::StaticClass, TEXT("ASAST_GDADG_WOC_UE5PlayerController"), &Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAST_GDADG_WOC_UE5PlayerController), 1029061454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5PlayerController_h_1925370782(TEXT("/Script/SAST_GDADG_WOC_UE5"),
	Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5PlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
