// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTest.h"
#include "Enemy_Character.h"


// Sets default values
AEnemy_Character::AEnemy_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	currentHealth = startingHealth;

}

// Called when the game starts or when spawned
void AEnemy_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

