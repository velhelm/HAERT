// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTest.h"
#include "SomePawn.h"


// Sets default values
ASomePawn::ASomePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASomePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASomePawn::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ASomePawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

