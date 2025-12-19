#include "Animation/ModifyLandState.h"
#include "Character/MainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

void UModifyLandState::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (!IsValid(Cast<AMainCharacter>(MeshComp->GetOwner()))) return;
	
	AMainCharacter* MainCharacter = Cast<AMainCharacter>(MeshComp->GetOwner());
	
	if (MainCharacter)
	{
		MainCharacter->GetCharacterMovement()->BrakingDecelerationWalking =
			MainCharacter->GetCharacterMovement()->MaxWalkSpeed * 5.f;
		
		MainCharacter->GetCharacterMovement()->GroundFriction = 20.f;
	}
}