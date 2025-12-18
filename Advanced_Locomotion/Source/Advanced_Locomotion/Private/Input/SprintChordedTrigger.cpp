#include "Input/SprintChordedTrigger.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"

ETriggerState USprintChordedTrigger::UpdateState(const UEnhancedPlayerInput* PlayerInput,
                                                 FInputActionValue ModifiedValue, float DeltaTime)
{
	if (!MoveAction || !SprintAction)
	{
		return ETriggerState::None;
	}
	
	FVector2D MoveValue = PlayerInput->GetActionValue(MoveAction).Get<FVector2D>();
	bool bIsSprinting = PlayerInput->GetActionValue(SprintAction).Get<bool>();
	
	if (MoveValue.Size() > 0.f && bIsSprinting)
	{
		return ETriggerState::Triggered;
	}
	
	return ETriggerState();
}
