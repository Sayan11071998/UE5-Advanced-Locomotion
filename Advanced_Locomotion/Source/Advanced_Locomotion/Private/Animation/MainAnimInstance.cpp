#include "Animation/MainAnimInstance.h"
#include "Character/MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

void UMainAnimInstance::NativeInitializeAnimation()
{
	MainCharacter = Cast<AMainCharacter>(TryGetPawnOwner());
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
	}
}