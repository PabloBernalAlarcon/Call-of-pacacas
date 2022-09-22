// Fill out your copyright notice in the Description page of Project Settings.


#include "PCC_Door.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
APCC_Door::APCC_Door()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DoorRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DoorRoot"));
	RootComponent = DoorRootComponent;

	DoorFrameComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrame"));
	DoorFrameComponent->SetupAttachment(RootComponent); 

	DoorComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	DoorComponent->SetupAttachment(RootComponent);

	OpenAngle = -90.0f;
}

// Called when the game starts or when spawned
void APCC_Door::BeginPlay()
{
	Super::BeginPlay();
	OpenDoor();
	
}

// Called every frame
void APCC_Door::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APCC_Door::OpenDoor()
{
	FRotator rotico = FRotator(0.0f, OpenAngle, 0.0f);
	DoorComponent->SetRelativeRotation(rotico);
}

