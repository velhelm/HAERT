// Fill out your copyright notice in the Description page of Project Settings.

#include "UnrealTest.h"
#include "Enemy_Pawn.h"


// Sets default values
AEnemy_Pawn::AEnemy_Pawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AEnemy_Pawn::BeginPlay()
{
	Super::BeginPlay();
	
}


void AEnemy_Pawn::StruckByRaycast(int32 Damage, FVector RelativeHitLocation)
{
	_health -= Damage;
	if (_health <= 0)
	{
		Kill();
	}
}

void AEnemy_Pawn::Kill()
{
	this->Destroy();
}