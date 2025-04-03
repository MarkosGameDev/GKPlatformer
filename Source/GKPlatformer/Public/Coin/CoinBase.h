// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "CoinBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDestroyed);

UCLASS()
class GKPLATFORMER_API ACoinBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACoinBase();

	UPROPERTY(EditAnywhere)
	UCapsuleComponent* Collider;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	UPROPERTY(BlueprintAssignable)
	FOnDestroyed OnCoinDestroyed;
	
protected:

	UFUNCTION()
	void HandleOnCoinDestroy(UPrimitiveComponent* PrimitiveComponent, AActor* Actor, UPrimitiveComponent* PrimitiveComponent1, int I, bool bArg, const FHitResult& HitResult);
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;




};
