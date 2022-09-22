// Fill out your copyright notice in the Description page of Project Settings.


#include "PCC_Moving_Platform.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
// Sets default values
APCC_Moving_Platform::APCC_Moving_Platform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PlatformRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("MovingPlatformRoot"));
	RootComponent = PlatformRootComponent;

	PlatformMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plaform"));
	PlatformMeshComponent->SetupAttachment(RootComponent);

	bIsGoingUp = true;
	maxHeight = 50.0f;
	minHeight = 0.0f;

	speed = 10.0f;

}

// Called when the game starts or when spawned
void APCC_Moving_Platform::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APCC_Moving_Platform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Move();

}

void APCC_Moving_Platform::Move()
{
	FVector upDirection = UKismetMathLibrary::GetUpVector(GetActorRotation());

	if (bIsGoingUp)
	{
		upDirection = upDirection;
	}
	else
	{
		upDirection *= -1;
	}

	FVector currentVelocity = upDirection * speed;
	FVector newPos = GetActorLocation() + currentVelocity;
	SetActorLocation(newPos);

	if ((bIsGoingUp && GetActorLocation().Z >= maxHeight)||
		(!bIsGoingUp && GetActorLocation().Z <= minHeight))
	{
		bIsGoingUp = !bIsGoingUp;
	}

}

