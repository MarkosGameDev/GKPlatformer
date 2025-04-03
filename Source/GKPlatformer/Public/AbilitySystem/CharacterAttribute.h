// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "CharacterAttribute.generated.h"

/**
 * 
 */

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

UCLASS()
class GKPLATFORMER_API UCharacterAttribute : public UAttributeSet
{
	GENERATED_BODY()

	public:

	UPROPERTY(BlueprintReadOnly, Category = "Health")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UCharacterAttribute, Health)

	UPROPERTY(BlueprintReadOnly, Category = "GoldCoin")
	FGameplayAttributeData GoldCoin;
	ATTRIBUTE_ACCESSORS(UCharacterAttribute, GoldCoin)

	UPROPERTY(BlueprintReadOnly, Category = "SilverCoin")
	FGameplayAttributeData SilverCoin;
	ATTRIBUTE_ACCESSORS(UCharacterAttribute, SilverCoin)
	

	
};
