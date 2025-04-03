// Fill out your copyright notice in the Description page of Project Settings.


#include "Player/CombatMech.h"

// Sets default values
ACombatMech::ACombatMech()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACombatMech::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACombatMech::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACombatMech::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

