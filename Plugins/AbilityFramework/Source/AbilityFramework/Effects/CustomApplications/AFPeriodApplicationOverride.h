// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Effects/AFEffectCustomApplication.h"
#include "AFPeriodApplicationOverride.generated.h"

/**
 * If effect of the same class already exist it will be removed and new effect will be appllied.
 */
UCLASS(meta = (DisplayName = "Periodic Override"))
class ABILITYFRAMEWORK_API UAFPeriodApplicationOverride : public UAFEffectCustomApplication
{
	GENERATED_BODY()
public:
	virtual bool ApplyEffect(const FGAEffectHandle& InHandle, struct FGAEffect* EffectIn,
		FGAEffectProperty& InProperty, struct FGAEffectContainer* InContainer,
		const FGAEffectContext& InContext,
		const FAFFunctionModifier& Modifier = FAFFunctionModifier());
	virtual void ExecuteEffect(const FGAEffectHandle& InHandle,
		FGAEffectProperty& InProperty,
		const FGAEffectContext& InContext,
		const FAFFunctionModifier& Modifier = FAFFunctionModifier())
	{};
	virtual bool ShowPeriod() override
	{
		return true;
	}
	virtual bool ShowDuration() override
	{
		return true;
	}
	
};
