#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "MainAnimInstance.generated.h"

class AMainCharacter;

UCLASS()
class ADVANCED_LOCOMOTION_API UMainAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
protected:
	void CalculateLeanYawDelta(float DeltaSeconds);
	
private:
	TObjectPtr<AMainCharacter> MainCharacter = nullptr;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float Speed;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsAccelerating;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	bool bIsInAir;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float MovementYawDelta;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement", meta = (AllowPrivateAccess = "true"))
	float LastMovementYawDelta;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Turn-in Place", meta = (AllowPrivateAccess = "true"))
	float RootRotationYaw;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Lean", meta = (AllowPrivateAccess = "true"))
	float LeanYawDelta;
	
	float CharacterRotationYaw;
	float LastCharacterRotationYaw;
	
	float IsTurning;
	float TurningCurve;
	float LastTurningCurve;
	
	FRotator LeanCharacterRotation;
	FRotator LeanLastCharacterRotation;
};