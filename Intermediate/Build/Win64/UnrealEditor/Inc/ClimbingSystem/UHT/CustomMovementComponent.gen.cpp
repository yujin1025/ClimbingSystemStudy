// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClimbingSystem/Public/Components/CustomMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMovementComponent() {}

// Begin Cross Module References
CLIMBINGSYSTEM_API UClass* Z_Construct_UClass_UCustomMovementComponent();
CLIMBINGSYSTEM_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
UPackage* Z_Construct_UPackage__Script_ClimbingSystem();
// End Cross Module References

// Begin Class UCustomMovementComponent
void UCustomMovementComponent::StaticRegisterNativesUCustomMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomMovementComponent);
UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister()
{
	return UCustomMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UCustomMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Components/CustomMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCustomMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ClimbingSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams = {
	&UCustomMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCustomMovementComponent()
{
	if (!Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton, Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCustomMovementComponent.OuterSingleton;
}
template<> CLIMBINGSYSTEM_API UClass* StaticClass<UCustomMovementComponent>()
{
	return UCustomMovementComponent::StaticClass();
}
UCustomMovementComponent::UCustomMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMovementComponent);
UCustomMovementComponent::~UCustomMovementComponent() {}
// End Class UCustomMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCustomMovementComponent, UCustomMovementComponent::StaticClass, TEXT("UCustomMovementComponent"), &Z_Registration_Info_UClass_UCustomMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomMovementComponent), 1396467414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_1207241675(TEXT("/Script/ClimbingSystem"),
	Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BootCamp_Udemy_ClimbingSystem_Source_ClimbingSystem_Public_Components_CustomMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
