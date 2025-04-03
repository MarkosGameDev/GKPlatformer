// Fill out your copyright notice in the Description page of Project Settings.


#include "Flag/Flag.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AFlag::AFlag()
{

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	RootComponent = RootSceneComponent;

	Flag = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Flag"));
	Flag->SetupAttachment(RootComponent);
	
	Cone = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Cone"));
	Cone->SetupAttachment(RootComponent);
	
 	Collider = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
	Collider->SetupAttachment(Cone);
	
	
}


void AFlag::BeginPlay()
{
	Super::BeginPlay();
	
}


