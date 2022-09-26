// Fill out your copyright notice in the Description page of Project Settings.


#include "PCC_Character.h"

// Sets default values
APCC_Character::APCC_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APCC_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

void APCC_Character::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector() * value);
}

void APCC_Character::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector() * value);
}

void APCC_Character::Jump()
{
	Super::Jump();
}

void APCC_Character::StopJumping()
{
	Super::Jump();
}

void APCC_Character::AddControllerPitchInput(float Val)
{
	Super::AddControllerPitchInput(b_isYLookInverted ? -Val : Val);
}

// Called every frame
void APCC_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APCC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &APCC_Character::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &APCC_Character::MoveRight );

	//Rotation - Camera
	PlayerInputComponent->BindAxis("LookUp", this, &APCC_Character::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookRight", this, &APCC_Character::AddControllerYawInput);


	//Jumpiong
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APCC_Character::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APCC_Character::StopJumping);

}

