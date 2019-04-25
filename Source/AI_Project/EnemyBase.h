// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyBase.generated.h"

UCLASS()
class AI_PROJECT_API AEnemyBase : public ACharacter
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	AEnemyBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};

// 敵のステート
UENUM(BlueprintType)
enum class EEnemyState : uint8
{
	ES_IDLE      UMETA(DisplayName="IDLE"),
	ES_MOVE    UMETA(DisplayName="MOVE"),
	ES_ATTACK UMETA(DisplayName="ATTACK"),
	ES_ESCAPE UMETA(DisplayName="Escape"),
};
