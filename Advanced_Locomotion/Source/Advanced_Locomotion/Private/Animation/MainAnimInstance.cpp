#include "Animation/MainAnimInstance.h"
#include "Character/MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UMainAnimInstance::NativeInitializeAnimation()
{
	MainCharacter = Cast<AMainCharacter>(TryGetPawnOwner());
	
	CharacterRotationYaw = 0.f;
	LastCharacterRotationYaw = 0.f;
	RootRotationYaw = 0.f;
}

void UMainAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	if (MainCharacter)
	{
		FVector Velocity = MainCharacter->GetVelocity();
		Velocity.Z = 0;
		
		Speed = Velocity.Size();
		bIsAccelerating = MainCharacter->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0.f;
		bIsInAir = MainCharacter->GetCharacterMovement()->IsFalling();
		
		FRotator BaseAimRotation = MainCharacter->GetBaseAimRotation();
		FRotator MovementRotation = UKismetMathLibrary::MakeRotFromX(MainCharacter->GetVelocity());
		
		MovementYawDelta = UKismetMathLibrary::NormalizedDeltaRotator(MovementRotation, BaseAimRotation).Yaw;
		
		if (MainCharacter->GetVelocity().Size() > 0.f)
		{
			LastMovementYawDelta = MovementYawDelta;
		}
		
		// Turn-in Place
		if (Speed > 0.f || bIsInAir)
		{
			RootRotationYaw = 0.f;
			CharacterRotationYaw = MainCharacter->GetActorRotation().Yaw;
			LastCharacterRotationYaw = CharacterRotationYaw;
			
			LastTurningCurve = 0.f;
			TurningCurve = 0.f;
		}
		else
		{
			LastCharacterRotationYaw = CharacterRotationYaw;
			CharacterRotationYaw = MainCharacter->GetActorRotation().Yaw;
		
			const float CharacterRotationYawDelta = CharacterRotationYaw - LastCharacterRotationYaw;
			RootRotationYaw -= UKismetMathLibrary::NormalizeAxis(RootRotationYaw - CharacterRotationYawDelta);
		
			IsTurning = GetCurveValue(FName(TEXT("IsTurning")));
		
			if (IsTurning > 0.f)
			{
				LastTurningCurve = TurningCurve;
				TurningCurve = GetCurveValue(FName(TEXT("Turning")));
			
				const float TurningCurveDelta = TurningCurve - LastTurningCurve;
				RootRotationYaw > 0.f ? RootRotationYaw -= TurningCurveDelta : RootRotationYaw += TurningCurveDelta;
			
				if (FMath::Abs(RootRotationYaw) > 90.f)
				{
					const float AdditionalRootRotationYaw = FMath::Abs(RootRotationYaw) - 90.f;
					RootRotationYaw > 0.f ? RootRotationYaw -= AdditionalRootRotationYaw : RootRotationYaw += AdditionalRootRotationYaw;
				}
			}
		}
		
		CalculateLeanYawDelta(DeltaSeconds);
		
		bShouldTurnHips = FMath::Abs(MovementYawDelta) < 55.f && bIsAccelerating;
		bShouldRunBackward = FMath::Abs(MovementYawDelta) > 125.f && bIsAccelerating;
	}
}

void UMainAnimInstance::CalculateLeanYawDelta(float DeltaSeconds)
{
	LeanLastCharacterRotation = LeanCharacterRotation;
	LeanCharacterRotation = MainCharacter->GetActorRotation();
	
	const float LeanTarget =
		UKismetMathLibrary::NormalizedDeltaRotator(LeanCharacterRotation, LeanLastCharacterRotation).Yaw / DeltaSeconds;
	
	LeanYawDelta = FMath::Clamp(FMath::FInterpTo(LeanYawDelta, LeanTarget, DeltaSeconds, 6.f), -90.f, 90.f);
}