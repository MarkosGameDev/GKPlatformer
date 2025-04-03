// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "Flag.generated.h"

UCLASS()
class GKPLATFORMER_API AFlag : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFlag();
	
	UPROPERTY(VisibleAnywhere)
	USceneComponent* RootSceneComponent;
	
	UPROPERTY(EditAnywhere)
	UCapsuleComponent* Collider;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Flag;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* Cone;
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
