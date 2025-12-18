#pragma once

#include "CoreMinimal.h"
#include "InputTriggers.h"
#include "SprintChordedTrigger.generated.h"

UCLASS()
class ADVANCED_LOCOMOTION_API USprintChordedTrigger : public UInputTrigger
{
	GENERATED_BODY()
	
public:
	ETriggerState UpdateState(const UEnhancedPlayerInput* PlayerInput, FInputActionValue ModifiedValue, float DeltaTime);
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TObjectPtr<UInputAction> MoveAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	TObjectPtr<UInputAction> SprintAction;
};