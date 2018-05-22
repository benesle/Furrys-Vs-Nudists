// Fill out your copyright notice in the Description page of Project Settings.

#include "FCharacter.h"
#include "FProjectile.h"
#include "Engine/World.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/Decalcomponent.h"
#include "Materials/Material.h"
#include "Engine/World.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/UObjectGlobals.h"



// Sets default values
AFCharacter::AFCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	// Create a decal in the world to show the cursor's location
	CursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	CursorToWorld->SetupAttachment(RootComponent);
	//Hardcoded path
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/Materials/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
	{
		CursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	}
	CursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	CursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());

}

// Called when the game starts or when spawned
void AFCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Show system cursor. Should probably be false
	GetWorld()->GetFirstPlayerController()->bShowMouseCursor = true;

}

// Called every frame
void AFCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	/// Move the cursor
	FHitResult Hit;
	bool HitResult = false;

	///Using "ByChannel" to get only what I want - the World Static Meshes
	HitResult = GetWorld()->GetFirstPlayerController()->GetHitResultUnderCursorByChannel(UEngineTypes::ConvertToTraceType(ECC_WorldStatic), true, Hit);

	if (HitResult)
	{
		///Updates cursor
		FVector CursorFV = Hit.ImpactNormal;
		FRotator CursorR = CursorFV.Rotation();
		CursorToWorld->SetWorldLocation(Hit.Location);
		CursorToWorld->SetWorldRotation(CursorR);

		///Set the new direction of the pawn:
		FVector CursorLocation = Hit.Location;
		UE_LOG(LogTemp, Warning, TEXT("Hit location %s!"), *Hit.Location.ToString());
		///Set Z to a little above ground
		FVector TempLocation = FVector(CursorLocation.X, CursorLocation.Y, 30.f);

		///Pure vector math
		FVector NewDirection = TempLocation - GetActorLocation();
		NewDirection.Z = 0.f;
		NewDirection.Normalize();
		SetActorRotation(NewDirection.Rotation());
	}

}

// Called to bind functionality to input
void AFCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Up", this, &AFCharacter::Up);
	PlayerInputComponent->BindAxis("Right", this, &AFCharacter::Right);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AFCharacter::OnStartJump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &AFCharacter::OnStopJump);
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AFCharacter::OnFire);
}

void AFCharacter::Up(float amount)
{
	if (Controller && amount) {
		AddMovementInput(GetActorForwardVector(), amount);
	}
}

void AFCharacter::Right(float amount)
{
	if (Controller && amount) {
		AddMovementInput(GetActorRightVector(), amount);
	}
}

void AFCharacter::OnStartJump()
{
	bPressedJump = true;
}
void AFCharacter::OnStopJump()
{
	bPressedJump = false;
}

void AFCharacter::OnFire()
//{
//	// try and fire a projectile
//	if (ProjectileClass != NULL)
//	{
//		// Get the camera transform
//		FVector CameraLoc;
//		FRotator CameraRot;
//		GetActorEyesViewPoint(CameraLoc, CameraRot);
//		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the camera to find the final muzzle position
//		FVector const MuzzleLocation = CameraLoc + FTransform(CameraRot).TransformVector(MuzzleOffset);
//		FRotator MuzzleRotation = CameraRot;
//		MuzzleRotation.Pitch += 10.0f;          // skew the aim upwards a bit
//		UWorld* const World = GetWorld();
//		if (World)
//		{
//			FActorSpawnParameters SpawnParams;
//			SpawnParams.Owner = this;
//			SpawnParams.Instigator = Instigator;
//			// spawn the projectile at the muzzle
//			AFProjectile* const Projectile = World->SpawnActor<AFProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
//			if (Projectile)
//			{
//				// find launch direction
//				FVector const LaunchDir = MuzzleRotation.Vector();
//				Projectile->InitVelocity(LaunchDir);

				{
	// Get the coordinates of the mouse from our controller  
	float LocationX;
	float LocationY;
	APlayerController* PlayerController = Cast<APlayerController>(GetController());
	PlayerController->GetMousePosition(LocationX, LocationY);
	FVector2D MousePosition(LocationX, LocationY);


	FVector LaunchDir;

	FHitResult Hit;
	//Controller->CastToPlayerController()->GetHitResultUnderCursor(ECC_Visibility, false, Hit);
	Controller->CastToPlayerController()->GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	if (Hit.bBlockingHit) {
		if (Hit.Actor != NULL) {

			LaunchDir = Hit.ImpactPoint;
		}
	}

	// try and fire a projectile
	if (ProjectileClass != NULL)
	{
		// Get the camera transform
		FVector ActorLocation;
		FRotator ActorRotation;
		GetActorEyesViewPoint(ActorLocation, ActorRotation);
		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the camera to find the final muzzle position
		FVector const MuzzleLocation = ActorLocation + FTransform(ActorRotation).TransformVector(MuzzleOffset);
		FRotator MuzzleRotation = ActorRotation;
		MuzzleRotation.Pitch += 0.0f;          // skew the aim upwards a bit
		UWorld* const World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;
			// spawn the projectile at the muzzle
			AFProjectile* const Projectile = World->SpawnActor<AFProjectile>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// find launch direction
				FVector const LaunchDir = (Hit.ImpactPoint - MuzzleLocation).GetSafeNormal();
				//Projectile->InitVelocity(LaunchDir);
				Projectile->InitVelocity(LaunchDir);
			}
		}
	}
} 




//			}
//		}
//	}
//}
