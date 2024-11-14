// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PuzzleCharacter.h"


APuzzleCharacter::APuzzleCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}


void APuzzleCharacter::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Character says hello!"));
}

// Called every frame
void APuzzleCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APuzzleCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

