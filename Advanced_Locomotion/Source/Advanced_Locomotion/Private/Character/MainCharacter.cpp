#include "Character/MainCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

AMainCharacter::AMainCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 350.f;
	CameraBoom->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;
}

void AMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMainCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMainCharacter::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AMainCharacter::Turn);
	PlayerInputComponent->BindAxis("Lookup", this, &AMainCharacter::Lookup);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
}

void AMainCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AMainCharacter::MoveForward(float Value)
{
	if (GetController() == nullptr || Value == 0.f) return;

	const FRotator Rotation = GetController()->GetControlRotation();
	const FRotator YawRotation {0.f, Rotation.Yaw, 0.f };

	const FVector ForwardDirection { FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X) };

	AddMovementInput(ForwardDirection, Value);
}

void AMainCharacter::MoveRight(float Value)
{
	if (GetController() == nullptr || Value == 0.f) return;

	const FRotator Rotation = GetController()->GetControlRotation();
	const FRotator YawRotation {0.f, Rotation.Yaw, 0.f };

	const FVector RightDirection { FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y) };

	AddMovementInput(RightDirection, Value);
}

void AMainCharacter::Turn(float Value)
{
	if (GetController() == nullptr || Value == 0.f) return;

	// Mouse
	AddControllerYawInput(Value);

	// Gamepad
	// AddControllerYawInput(Value * 50.f * GetWorld()->GetDeltaSeconds());
}

void AMainCharacter::Lookup(float Value)
{
	if (GetController() == nullptr || Value == 0.f) return;

	// Mouse
	AddControllerPitchInput(Value);
}