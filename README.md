# Advanced Locomotion System

A comprehensive third-person character locomotion system built in Unreal Engine 5 using C++. This project implements advanced animation techniques including turn-in-place, leaning, inverse kinematics, and dynamic movement blending.

## 📋 Table of Contents

- [Features](#features)
- [Code Architecture](#code-architecture)
- [Project Structure](#project-structure)
- [Core Systems](#core-systems)
- [Setup & Installation](#setup--installation)
- [Usage](#usage)
- [Code Design Patterns](#code-design-patterns)
- [Best Practices](#best-practices)

## ✨ Features

- **Advanced Character Movement**: Smooth walking and sprinting with dynamic speed transitions
- **Turn-in-Place System**: Realistic stationary rotation with root motion
- **Inverse Kinematics**: Character feet adapt to terrain for realistic ground contact
- **Lean System**: Dynamic leaning based on rotation speed for natural movement feel
- **Hip Rotation**: Contextual hip turning for movement directions
- **Landing State Management**: Custom animation notify for landing behavior
- **Enhanced Input System**: Modern Unreal Engine 5 input mapping
- **Sprint Chorded Trigger**: Custom input trigger for sprint+move combination

## 🏗️ Code Architecture

### Architecture Diagram

```
┌─────────────────────────────────────────────────────────────┐
│                     Game Framework                           │
├─────────────────────────────────────────────────────────────┤
│  MainGameModeBase                                            │
│  └─> Manages game rules and player spawning                 │
└─────────────────────────────────────────────────────────────┘
                            │
                            ▼
┌─────────────────────────────────────────────────────────────┐
│                    Character Layer                           │
├─────────────────────────────────────────────────────────────┤
│  MainCharacter (ACharacter)                                  │
│  ├─> Camera System (SpringArm + Camera)                     │
│  ├─> Input Handling (Enhanced Input)                        │
│  ├─> Movement Logic                                         │
│  │   ├─> Walk Attributes                                    │
│  │   ├─> Sprint Attributes                                  │
│  │   └─> Character Movement Component                       │
│  └─> Input Actions                                          │
│      ├─> Move                                               │
│      ├─> Look                                               │
│      ├─> Jump                                               │
│      └─> Sprint                                             │
└─────────────────────────────────────────────────────────────┘
                            │
                            ▼
┌─────────────────────────────────────────────────────────────┐
│                   Animation Layer                            │
├─────────────────────────────────────────────────────────────┤
│  MainAnimInstance (UAnimInstance)                            │
│  ├─> Movement Tracking                                      │
│  │   ├─> Speed                                              │
│  │   ├─> Acceleration                                       │
│  │   └─> Air State                                          │
│  ├─> Direction Calculation                                  │
│  │   ├─> Movement Yaw Delta                                 │
│  │   └─> Relative Aim Direction                             │
│  ├─> Turn-in-Place Logic                                    │
│  │   ├─> Root Rotation Yaw                                  │
│  │   ├─> Turning Curve Processing                           │
│  │   └─> 90° Rotation Clamping                              │
│  ├─> Lean System                                            │
│  │   └─> Dynamic Yaw Delta Interpolation                    │
│  └─> Hip Rotation Logic                                     │
│      ├─> Should Turn Hips                                   │
│      └─> Should Run Backward                                │
└─────────────────────────────────────────────────────────────┘
                            │
                            ▼
┌─────────────────────────────────────────────────────────────┐
│              Animation Notify System                         │
├─────────────────────────────────────────────────────────────┤
│  ModifyLandState (UAnimNotify)                               │
│  └─> Adjusts friction & braking on landing                  │
└─────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────┐
│                  Input System Layer                          │
├─────────────────────────────────────────────────────────────┤
│  SprintChordedTrigger (UInputTrigger)                        │
│  └─> Custom trigger for Move + Sprint combination           │
└─────────────────────────────────────────────────────────────┘
```

### System Flow Diagram

```
┌──────────────┐
│   Player     │
│    Input     │
└──────┬───────┘
       │
       ▼
┌─────────────────────────────────────────────┐
│     Enhanced Input System                   │
│  ┌────────────────────────────────────┐    │
│  │  Input Mapping Context             │    │
│  │  ├─> Move Action                   │    │
│  │  ├─> Look Action                   │    │
│  │  ├─> Jump Action                   │    │
│  │  └─> Sprint Action                 │    │
│  │      └─> SprintChordedTrigger      │    │
│  └────────────────────────────────────┘    │
└─────────────┬───────────────────────────────┘
              │
              ▼
┌─────────────────────────────────────────────┐
│         MainCharacter                       │
│  ┌────────────────────────────────────┐    │
│  │  Movement Processing               │    │
│  │  ├─> AddMovementInput()            │    │
│  │  ├─> AddControllerRotation()       │    │
│  │  └─> CharacterMovementComponent    │    │
│  │      ├─> MaxWalkSpeed              │    │
│  │      ├─> BrakingDeceleration       │    │
│  │      └─> GroundFriction            │    │
│  └────────────────────────────────────┘    │
└─────────────┬───────────────────────────────┘
              │
              ▼
┌─────────────────────────────────────────────────┐
│         MainAnimInstance                        │
│  ┌────────────────────────────────────────┐    │
│  │  NativeUpdateAnimation()               │    │
│  │  ├─> Calculate Speed & Direction       │    │
│  │  ├─> Process Turn-in-Place             │    │
│  │  ├─> Calculate Lean                    │    │
│  │  └─> Update Hip Rotation Logic         │    │
│  └────────────────────────────────────────┘    │
└─────────────┬───────────────────────────────────┘
              │
              ▼
┌─────────────────────────────────────────────┐
│     Animation Blueprint                     │
│  ┌────────────────────────────────────┐    │
│  │  State Machine                     │    │
│  │  ├─> Idle/Walk/Run Blendspace      │    │
│  │  ├─> Jump/Fall States              │    │
│  │  ├─> Turn-in-Place Animations      │    │
│  │  └─> Landing Animation             │    │
│  │      └─> ModifyLandState Notify    │    │
│  └────────────────────────────────────┘    │
└─────────────────────────────────────────────┘
```

## 📁 Project Structure

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
│       ├── Private/
│       │   ├── Character/
│       │   │   └── MainCharacter.cpp
│       │   ├── Animation/
│       │   │   ├── MainAnimInstance.cpp
│       │   │   └── ModifyLandState.cpp
│       │   ├── GameMode/
│       │   │   └── MainGameModeBase.cpp
│       │   └── Input/
│       │       └── SprintChordedTrigger.cpp
│       ├── Advanced_Locomotion.Build.cs
│       ├── Advanced_Locomotion.cpp
│       └── Advanced_Locomotion.h
```

## 🎯 Core Systems

### 1. Character System (`MainCharacter`)

The main character class handles player input and movement configuration.

**Key Features:**
- Third-person camera setup with spring arm
- Enhanced Input System integration
- Dynamic movement attributes (walk/sprint)
- Input action bindings

**Movement Attributes:**

| State | Max Speed | Braking Decel | Ground Friction |
|-------|-----------|---------------|-----------------|
| Walk  | 500       | 100           | 2.0             |
| Sprint| 800       | 360           | 5.5             |

### 2. Animation System (`MainAnimInstance`)

The animation instance drives all character animations based on movement state.

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
- Interpolates smoothly to target lean angle
- Clamped between -90° and 90°
- Provides natural weight-shifting during turns

**Hip Rotation Logic:**
- `bShouldTurnHips`: Activated when moving within 55° of aim direction
- `bShouldRunBackward`: Activated when moving opposite aim direction (>125°)

### 3. Inverse Kinematics

While not explicitly shown in the C++ code, the system is designed to support IK through:
- Proper foot placement on uneven terrain
- Ground adaptation during movement
- Natural leg extension during animations

*IK setup would typically be configured in the Animation Blueprint using Control Rig or IK nodes.*

### 4. Landing System (`ModifyLandState`)

Animation notify that adjusts movement properties on landing:
- Increases braking deceleration (5x walk speed)
- Increases ground friction to 20.0
- Creates realistic landing feel with quick deceleration

### 5. Custom Input Trigger (`SprintChordedTrigger`)

Implements a chorded input trigger that requires both:
- Movement input (forward/backward/strafe)
- Sprint button held

Only triggers when both conditions are met simultaneously.

## 🚀 Setup & Installation

### Prerequisites
- Unreal Engine 5.0 or higher
- Visual Studio 2022 (or compatible IDE)
- Basic knowledge of C++ and Unreal Engine

### Installation Steps

1. **Clone or download the project**
   ```bash
   git clone <repository-url>
   ```

2. **Generate project files**
   - Right-click on `Advanced_Locomotion.uproject`
   - Select "Generate Visual Studio project files"

3. **Build the project**
   - Open `Advanced_Locomotion.sln` in Visual Studio
   - Build the solution (Development Editor configuration)

4. **Open in Unreal Editor**
   - Double-click `Advanced_Locomotion.uproject`

### Required Setup in Unreal Editor

1. **Input Mapping Context**
   - Create Input Mapping Context asset
   - Configure Move, Look, Jump, and Sprint actions

2. **Animation Blueprint**
   - Create Animation Blueprint based on `MainAnimInstance`
   - Set up state machine with idle, walk, run, jump, and turn-in-place states
   - Add IK setup for foot placement
   - Configure turn-in-place animations with "IsTurning" and "Turning" curves

3. **Character Blueprint**
   - Create Blueprint based on `MainCharacter`
   - Assign camera components
   - Set Input Mapping Context
   - Assign Input Actions

## 💻 Usage

### Basic Movement
- **WASD**: Move character
- **Mouse**: Look around
- **Space**: Jump
- **Shift**: Sprint (hold while moving)

### Animation Variables Exposed to Blueprint

| Variable | Type | Description |
|----------|------|-------------|
| Speed | Float | Current movement speed |
| bIsAccelerating | Bool | Is character accelerating |
| bIsInAir | Bool | Is character in air |
| MovementYawDelta | Float | Angle between movement and aim |
| RootRotationYaw | Float | Turn-in-place rotation offset |
| LeanYawDelta | Float | Dynamic lean angle |
| bShouldTurnHips | Bool | Should rotate hips to movement |
| bShouldRunBackward | Bool | Should play backward run animation |

## 🎨 Code Design Patterns

### 1. **Separation of Concerns**
- Character handles input and movement configuration
- AnimInstance handles all animation logic
- Clear boundary between gameplay and animation systems

### 2. **Component-Based Architecture**
- Uses Unreal's component system (SpringArm, Camera)
- Leverages CharacterMovementComponent for physics

### 3. **Data-Driven Design**
- Movement attributes easily configurable
- Animation curves drive turn-in-place behavior
- Blueprint-exposed variables for designer control

### 4. **State Management**
- Clean state transitions (walk/sprint)
- Stateless animation updates (recalculated each frame)

### 5. **Event-Driven System**
- Animation notifies for state changes
- Input action callbacks for responsive controls

## ✅ Best Practices Implemented

### Code Quality
- ✅ **Proper header organization** (Public/Private separation)
- ✅ **UPROPERTY macros** for Blueprint integration
- ✅ **Null checks** before accessing pointers
- ✅ **TObjectPtr** for automatic garbage collection
- ✅ **Const correctness** in parameter passing
- ✅ **Forward declarations** to reduce compile times

### Performance
- ✅ **Cached references** (MainCharacter pointer in AnimInstance)
- ✅ **Efficient calculations** (velocity with Z zeroed)
- ✅ **Interpolation** for smooth visual transitions
- ✅ **Early returns** to avoid unnecessary processing

### Unreal Engine Integration
- ✅ **Enhanced Input System** (modern UE5 approach)
- ✅ **Animation Blueprint integration**
- ✅ **Custom Input Triggers**
- ✅ **Animation Notifies** for event-driven behavior
- ✅ **CharacterMovementComponent** for physics-accurate movement

### Maintainability
- ✅ **Clear naming conventions**
- ✅ **Logical file structure**
- ✅ **Modular systems** (easy to extend/modify)
- ✅ **Encapsulation** (private member variables)

## 🔧 Customization

### Adding New Movement States

1. Add state variables to `MainCharacter.h`
2. Implement state change logic in `MainCharacter.cpp`
3. Expose variables in `MainAnimInstance.h`
4. Calculate values in `NativeUpdateAnimation()`
5. Use in Animation Blueprint

### Modifying Movement Feel

Adjust these values in `SetWalkAttributes()` and `SetSprintAttributes()`:
- `MaxWalkSpeed`: How fast the character moves
- `BrakingDecelerationWalking`: How quickly character stops
- `GroundFriction`: How much control while moving

## 📝 License

Copyright Epic Games, Inc. All Rights Reserved.

## 🤝 Contributing

Contributions are welcome! Please follow Unreal Engine C++ coding standards when submitting pull requests.

---

**Note**: This is a learning project demonstrating advanced locomotion techniques in Unreal Engine 5. It showcases professional C++ practices and animation programming patterns commonly used in AAA game development.
