// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PCC_Moving_Platform.generated.h"

class UStaticMeshComponent;
class USceneComponent;

UCLASS()
class PACACAS_API APCC_Moving_Platform : public AActor
{
	GENERATED_BODY() 
protected:
	//Components

	UPROPERTY(VisibleAnywhere, Category = "Components")
		USceneComponent* PlatformRootComponent;

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
		UStaticMeshComponent* PlatformMeshComponent;

protected:
	//variables
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform")
		bool bIsGoingUp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform")
		float speed;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform")
		float minHeight;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Platform")
		float maxHeight;

public:	
	// Sets default values for this actor's properties
	APCC_Moving_Platform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Movement")
		void Move();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
