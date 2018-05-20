// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "FCharacter.generated.h"

class UDecalComponent;
class UShapeComponent;
class USceneComponent;
class AFProjectile;

UCLASS()
class FURRYGAME_API AFCharacter : public ACharacter
{
	GENERATED_BODY()




public:
	// Sets default values for this character's properties
	AFCharacter();


	

	bool DoTrace(FHitResult* RV_Hit, FCollisionQueryParams* RV_TraceParams);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Movement

	void Up(float amount);
	

	void Right(float amount);

	//sets jump flag when key is pressed
	UFUNCTION()
		void OnStartJump();
	//clears jump flag when key is released
	UFUNCTION()
		void OnStopJump();

	/** Gun muzzle's offset from the camera location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

	//handles firing
	UFUNCTION()
		void OnFire();


	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AFProjectile> ProjectileClass;

	///** A decal that projects to the cursor location. */
	//UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn Setup", meta = (AllowPrivateAccess = "true"))
	//	UDecalComponent* CursorToWorld;

	//UFUNCTION()
	//	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor *OtherActor, UPrimitiveComponent *OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult &SweepResult);


	//
private:

	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn Setup", meta = (AllowPrivateAccess = "true"))
		UDecalComponent* CursorToWorld;

	/**The speed of pawn rotation*/
	UPROPERTY(EditAnywhere, Category = "Pawn Setup")
		float YawSpeed = 0.3f;
	

};
