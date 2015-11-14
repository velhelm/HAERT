// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTest.h"
#include "Enemy_Pawn.h"


// Sets default values
AEnemy_Pawn::AEnemy_Pawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy_Pawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AEnemy_Pawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_Pawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

