// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingSystem/ClimbingSystemGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClimbingSystemGameMode() {}

// Begin Cross Module References
CLIMBINGSYSTEM_API UClass* Z_Construct_UClass_AClimbingSystemGameMode();
CLIMBINGSYSTEM_API UClass* Z_Construct_UClass_AClimbingSystemGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_ClimbingSystem();
// End Cross Module References

// Begin Class AClimbingSystemGameMode
void AClimbingSystemGameMode::StaticRegisterNativesAClimbingSystemGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClimbingSystemGameMode);
UClass* Z_Construct_UClass_AClimbingSystemGameMode_NoRegister()
{
	return AClimbingSystemGameMode::StaticClass();
}
struct Z_Construct_UClass_AClimbingSystemGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ClimbingSystemGameMode.h" },
		{ "ModuleRelativePath", "ClimbingSystemGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClimbingSystemGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AClimbingSystemGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingSystemGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClimbingSystemGameMode_Statics::ClassParams = {
	&AClimbingSystemGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClimbingSystemGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AClimbingSystemGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClimbingSystemGameMode()
{
	if (!Z_Registration_Info_UClass_AClimbingSystemGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClimbingSystemGameMode.OuterSingleton, Z_Construct_UClass_AClimbingSystemGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClimbingSystemGameMode.OuterSingleton;
}
template<> CLIMBINGSYSTEM_API UClass* StaticClass<AClimbingSystemGameMode>()
{
	return AClimbingSystemGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClimbingSystemGameMode);
AClimbingSystemGameMode::~AClimbingSystemGameMode() {}
// End Class AClimbingSystemGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_ClimbingSystemGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClimbingSystemGameMode, AClimbingSystemGameMode::StaticClass, TEXT("AClimbingSystemGameMode"), &Z_Registration_Info_UClass_AClimbingSystemGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClimbingSystemGameMode), 3714160052U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_ClimbingSystemGameMode_h_508216937(TEXT("/Script/ClimbingSystem"),
	Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_ClimbingSystemGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_ClimbingSystemGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
