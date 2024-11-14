// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PuzzleCharacter.generated.h"

UCLASS()
class PLATPHORMERPUZZLE_API APuzzleCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APuzzleCharacter();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	virtual void BeginPlay() override;

};
