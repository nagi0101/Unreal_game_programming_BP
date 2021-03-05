// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestCharacter.generated.h"

UCLASS()
class CPPPROJECT_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()
		/** MorphIntoGiant() �Լ����� ����� ���� */
		UPROPERTY(EditAnywhere, Category = "Test")
		float GianticScale;
	/** ĳ���� ũ�� ���� */
	UFUNCTION(BlueprintCallable, Category = "Test")
		void MorphIntoGiant();

public:
	// Sets default values for this character's properties
	ATestCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
