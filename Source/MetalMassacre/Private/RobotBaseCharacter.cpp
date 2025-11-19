// Fill out your copyright notice in the Description page of Project Settings.


#include "RobotBaseCharacter.h"

// Sets default values
ARobotBaseCharacter::ARobotBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARobotBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARobotBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARobotBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

