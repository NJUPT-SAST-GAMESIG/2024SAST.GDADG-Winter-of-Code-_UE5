// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SAST_GDADG_WOC_UE5/SAST_GDADG_WOC_UE5GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAST_GDADG_WOC_UE5GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SAST_GDADG_WOC_UE5_API UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode();
SAST_GDADG_WOC_UE5_API UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SAST_GDADG_WOC_UE5();
// End Cross Module References

// Begin Class ASAST_GDADG_WOC_UE5GameMode
void ASAST_GDADG_WOC_UE5GameMode::StaticRegisterNativesASAST_GDADG_WOC_UE5GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASAST_GDADG_WOC_UE5GameMode);
UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_NoRegister()
{
	return ASAST_GDADG_WOC_UE5GameMode::StaticClass();
}
struct Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SAST_GDADG_WOC_UE5GameMode.h" },
		{ "ModuleRelativePath", "SAST_GDADG_WOC_UE5GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASAST_GDADG_WOC_UE5GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SAST_GDADG_WOC_UE5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_Statics::ClassParams = {
	&ASAST_GDADG_WOC_UE5GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode()
{
	if (!Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5GameMode.OuterSingleton, Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5GameMode.OuterSingleton;
}
template<> SAST_GDADG_WOC_UE5_API UClass* StaticClass<ASAST_GDADG_WOC_UE5GameMode>()
{
	return ASAST_GDADG_WOC_UE5GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASAST_GDADG_WOC_UE5GameMode);
ASAST_GDADG_WOC_UE5GameMode::~ASAST_GDADG_WOC_UE5GameMode() {}
// End Class ASAST_GDADG_WOC_UE5GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASAST_GDADG_WOC_UE5GameMode, ASAST_GDADG_WOC_UE5GameMode::StaticClass, TEXT("ASAST_GDADG_WOC_UE5GameMode"), &Z_Registration_Info_UClass_ASAST_GDADG_WOC_UE5GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASAST_GDADG_WOC_UE5GameMode), 1653701402U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5GameMode_h_1427501242(TEXT("/Script/SAST_GDADG_WOC_UE5"),
	Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_2024SAST_GDADG_Winter_of_Code__UE5_SAST_GDADG_WOC_UE5_Source_SAST_GDADG_WOC_UE5_SAST_GDADG_WOC_UE5GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
