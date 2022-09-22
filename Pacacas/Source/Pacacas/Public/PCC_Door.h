// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PCC_Door.generated.h"

class USceneComponent;
class UStaticMeshComponent;

UCLASS()
class PACACAS_API APCC_Door : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APCC_Door();

	UPROPERTY(VisibleAnywhere, Category="Components")
	USceneComponent* DoorRootComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* DoorFrameComponent;

	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* DoorComponent;

	UPROPERTY(EditAnywhere, Category = "My door")
	float OpenAngle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void OpenDoor();

};
