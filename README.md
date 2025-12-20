# Advanced Locomotion System

A third-person character controller for Unreal Engine 5 with smooth animations, turn-in-place, inverse kinematics, and dynamic movement blending.

## Features

- **Smooth Movement**: Walking and sprinting with dynamic transitions
- **Turn-in-Place**: Realistic rotation when standing still using root motion
- **Inverse Kinematics**: Feet adapt to terrain for proper ground contact
- **Lean System**: Character leans based on rotation speed
- **Hip Rotation**: Contextual hip turning for different movement directions
- **Landing System**: Custom animation notify for landing behavior
- **Enhanced Input**: UE5's modern input system with custom sprint trigger

## Architecture

```
┌───────────────────────────────────────────────────────────┐
│                     Game Framework                        │
├───────────────────────────────────────────────────────────┤
│  MainGameModeBase                                         │
│  └─> Manages game rules and player spawning              │
└───────────────────────────────────────────────────────────┘
                            │
                            ▼
┌───────────────────────────────────────────────────────────┐
│                    Character Layer                        │
├───────────────────────────────────────────────────────────┤
│  MainCharacter (ACharacter)                               │
│  ├─> Camera System (SpringArm + Camera)                  │
│  ├─> Input Handling (Enhanced Input)                     │
│  ├─> Movement Logic                                      │
│  │   ├─> Walk Attributes                                 │
│  │   ├─> Sprint Attributes                               │
│  │   └─> Character Movement Component                    │
│  └─> Input Actions                                       │
│      ├─> Move                                            │
│      ├─> Look                                            │
│      ├─> Jump                                            │
│      └─> Sprint                                          │
└───────────────────────────────────────────────────────────┘
                            │
                            ▼
┌───────────────────────────────────────────────────────────┐
│                   Animation Layer                         │
├───────────────────────────────────────────────────────────┤
│  MainAnimInstance (UAnimInstance)                         │
│  ├─> Movement Tracking                                   │
│  │   ├─> Speed                                           │
│  │   ├─> Acceleration                                    │
│  │   └─> Air State                                       │
│  ├─> Direction Calculation                               │
│  │   ├─> Movement Yaw Delta                              │
│  │   └─> Relative Aim Direction                          │
│  ├─> Turn-in-Place Logic                                 │
│  │   ├─> Root Rotation Yaw                               │
│  │   ├─> Turning Curve Processing                        │
│  │   └─> 90° Rotation Clamping                           │
│  ├─> Lean System                                         │
│  │   └─> Dynamic Yaw Delta Interpolation                 │
│  └─> Hip Rotation Logic                                  │
│      ├─> Should Turn Hips                                │
│      └─> Should Run Backward                             │
└───────────────────────────────────────────────────────────┘
                            │
                            ▼
┌───────────────────────────────────────────────────────────┐
│              Animation Notify System                      │
├───────────────────────────────────────────────────────────┤
│  ModifyLandState (UAnimNotify)                            │
│  └─> Adjusts friction & braking on landing               │
└───────────────────────────────────────────────────────────┘

┌───────────────────────────────────────────────────────────┐
│                  Input System Layer                       │
├───────────────────────────────────────────────────────────┤
│  SprintChordedTrigger (UInputTrigger)                     │
│  └─> Custom trigger for Move + Sprint combination        │
└───────────────────────────────────────────────────────────┘
```

### System Flow

```
┌──────────────┐
│   Player     │
│    Input     │
└──────┬───────┘
       │
       ▼
┌─────────────────────────────────────────────┐
│     Enhanced Input System                   │
│  ┌────────────────────────────────────────┐ │
│  │  Input Mapping Context             │    │
│  │  ├─> Move Action                   │    │
│  │  ├─> Look Action                   │    │
│  │  ├─> Jump Action                   │    │
│  │  └─> Sprint Action                 │    │
│  │      └─> SprintChordedTrigger      │    │
│  └────────────────────────────────────────┘ │
└──────────────┬──────────────────────────────┘
              │
              ▼
┌─────────────────────────────────────────────┐
│         MainCharacter                       │
│  ┌────────────────────────────────────────┐ │
│  │  Movement Processing               │    │
│  │  ├─> AddMovementInput()            │    │
│  │  ├─> AddControllerRotation()       │    │
│  │  └─> CharacterMovementComponent    │    │
│  │      ├─> MaxWalkSpeed              │    │
│  │      ├─> BrakingDeceleration       │    │
│  │      └─> GroundFriction            │    │
│  └────────────────────────────────────────┘ │
└──────────────┬──────────────────────────────┘
              │
              ▼
┌────────────────────────────────────────────────┐
│         MainAnimInstance                        │
│  ┌────────────────────────────────────────────┐ │
│  │  NativeUpdateAnimation()               │    │
│  │  ├─> Calculate Speed & Direction       │    │
│  │  ├─> Process Turn-in-Place             │    │
│  │  ├─> Calculate Lean                    │    │
│  │  └─> Update Hip Rotation Logic         │    │
│  └────────────────────────────────────────────┘ │
└──────────────┬─────────────────────────────────┘
              │
              ▼
┌─────────────────────────────────────────────┐
│     Animation Blueprint                     │
│  ┌────────────────────────────────────────┐ │
│  │  State Machine                     │    │
│  │  ├─> Idle/Walk/Run Blendspace      │    │
│  │  ├─> Jump/Fall States              │    │
│  │  ├─> Turn-in-Place Animations      │    │
│  │  └─> Landing Animation             │    │
│  │      └─> ModifyLandState Notify    │    │
│  └────────────────────────────────────────┘ │
└─────────────────────────────────────────────┘
```

## Project Structure

```
Advanced_Locomotion/
├── Source/
│   └── Advanced_Locomotion/
│       ├── Public/
│       │   ├── Character/
│       │   │   └── MainCharacter.h
│       │   ├── Animation/
│       │   │   ├── MainAnimInstance.h
│       │   │   └── ModifyLandState.h
│       │   ├── GameMode/
│       │   │   └── MainGameModeBase.h
│       │   └── Input/
│       │       └── SprintChordedTrigger.h
│       └── Private/
│           ├── Character/
│           │   └── MainCharacter.cpp
│           ├── Animation/
│           │   ├── MainAnimInstance.cpp
│           │   └── ModifyLandState.cpp
│           ├── GameMode/
│           │   └── MainGameModeBase.cpp
│           └── Input/
│               └── SprintChordedTrigger.cpp
```

## Core Systems

### Character System

Handles player input and movement. Uses UE5's Enhanced Input System with custom triggers.

**Movement Attributes:**

| State | Max Speed | Braking Decel | Ground Friction |
|-------|-----------|---------------|-----------------|
| Walk  | 500       | 100           | 2.0             |
| Sprint| 800       | 360           | 5.5             |

<img width="1697" height="922" alt="Image" src="https://github.com/user-attachments/assets/52eac0e4-132f-4b4c-b1cd-e57c275ecb5f" />
*Input mapping context showing Move, Look, Jump, and Sprint actions*

<img width="1652" height="350" alt="Image" src="https://github.com/user-attachments/assets/26de3e75-87a4-4e3d-9fe2-ee709220d401" />
*Sprint action with custom chorded trigger configuration*

### Animation System

The animation instance calculates all movement-related values and drives the animation blueprint.

**Turn-in-Place Algorithm:**
```cpp
if (Speed == 0 && !bIsInAir) {
    // Calculate rotation delta
    RootRotationYaw -= NormalizeAxis(RootRotationYaw - CharacterRotationYawDelta)
    
    // Process turning curve from animation
    if (IsTurning > 0) {
        RootRotationYaw += TurningCurveDelta (with direction)
        
        // Clamp to 90° maximum
        if (Abs(RootRotationYaw) > 90°) {
            RootRotationYaw = ClampTo90°
        }
    }
}
```

**Lean System:**
- Calculates rotation velocity over time
- Smoothly interpolates to target lean angle
- Clamped between -90° and 90°
- Creates natural weight-shifting during turns

**Hip Rotation:**
- `bShouldTurnHips`: Activated when moving within 55° of aim direction
- `bShouldRunBackward`: Activated when moving opposite to aim (>125°)

<img width="931" height="737" alt="Image" src="https://github.com/user-attachments/assets/0a23a4f3-4eff-40ee-b2f6-6e29bcad310b" />
*Animation blueprint showing locomotion state machine with turn-in-place*

### Landing System

The `ModifyLandState` animation notify adjusts movement properties when landing:
- Increases braking deceleration (5x walk speed)
- Increases ground friction to 20.0
- Creates a punchy, responsive landing feel

### Custom Sprint Trigger

The `SprintChordedTrigger` requires both conditions:
- Movement input active (WASD)
- Sprint button held (Shift)

Only fires when both are true simultaneously.

## Usage

### Controls
- **WASD**: Move
- **Mouse**: Look around
- **Space**: Jump
- **Shift + WASD**: Sprint

### Animation Variables

Key variables exposed to the animation blueprint:

| Variable | Type | Description |
|----------|------|-------------|
| Speed | Float | Current movement speed |
| bIsAccelerating | Bool | Is character accelerating |
| bIsInAir | Bool | Is character airborne |
| MovementYawDelta | Float | Angle between movement and aim direction |
| RootRotationYaw | Float | Turn-in-place rotation offset |
| LeanYawDelta | Float | Dynamic lean angle for weight shift |
| bShouldTurnHips | Bool | Should rotate hips toward movement |
| bShouldRunBackward | Bool | Should play backward run animation |

## Code Highlights

### Design Patterns
- **Separation of Concerns**: Character handles input, AnimInstance handles animation
- **Component-Based**: Leverages UE's component system
- **Data-Driven**: Animation curves drive turn-in-place, variables exposed for designers
- **Event-Driven**: Animation notifies trigger state changes

### Best Practices
- Proper header organization (Public/Private)
- Blueprint integration with UPROPERTY macros
- Cached references for performance
- Smooth interpolation for visual quality
- Modern Enhanced Input System

---

*A learning project demonstrating advanced locomotion techniques and professional C++ practices for Unreal Engine 5.*

---

[![Gameplay Video](https://img.youtube.com/vi/9M8qPVO0dos/maxresdefault.jpg)](https://youtu.be/9M8qPVO0dos)
### [Watch this video on YouTube](https://youtu.be/9M8qPVO0dos)
