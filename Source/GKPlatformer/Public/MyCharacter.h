// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystem/CharacterAttribute.h"
#include "MyCharacter.generated.h"


UCLASS()
class GKPLATFORMER_API AMyCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadOnly)
	UAbilitySystemComponent* AbilitySystemComponent;
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	AMyCharacter();

	UPROPERTY()
	UCharacterAttribute* CharacterAttribute;

	virtual void PossessedBy(AController* NewController) override;
	
};
