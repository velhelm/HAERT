// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Enemy_Pawn.generated.h"

UCLASS(Blueprintable)
class UNREALTEST_API AEnemy_Pawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AEnemy_Pawn();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
		void StruckByRaycast(int32 Damage, FVector RelativeHitLocation = FVector(0, 0, 0));

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = "true"))
		int32 startingHealth;

	UFUNCTION(BlueprintImplementableEvent, Category = "Damage")
		void KillMe();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health", meta = (AllowPrivateAccess = "true"))
	int32 Health;


};
