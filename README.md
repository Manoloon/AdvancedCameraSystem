</> Markdown
 # Advanced Camera System
 
 ## Unreal Engine 5.7
 
 Advanced Camera System (ACS) is a modular camera framework for Unreal Engine 5
 that allows designers to create camera behaviors using Data Assets called
 **Modes**, without writing additional code.
 
 ## Features
 
 - Modular camera architecture
 - Data Asset-driven camera modes
 - Camera Modifiers
 - Post Process support
 - Smooth camera transitions
 - Fully extensible in C++
 
 ## Basic Setup
 
 1. Set **APlayerCameraManagerACS** as the default Camera Manager in your Player Controller.
 2. Implement the **BPI_Pawn** interface in your Character.
 3. Add **SpringArmComponentACS** as the default Spring Arm component.
 
 ## Camera Modes
 
 ACS supports two types of camera modes:
 
 ### Permanent Modes
 
 Permanent modes remain active until another permanent mode replaces them.
 
 Examples:
  - First Person
  - Third Person
 
 Permanent modes can execute Camera Modifiers and Post Process effects.
 
 ### One-Time Modes
 
 One-Time modes temporarily override or complement the current Permanent Mode.
 
 Examples:
  - Aim Down Sights (ADS)
  - Getting Hit
  - Death Camera
 
 ## Camera Modifiers
 
 Every camera modifier must inherit from **CameraModifierACS**.
 
 ### ActivePitchCurve
 
 Dynamically adjusts camera distance and field of view according to the current pitch angle.
 
 ### KeepLineOfSight
 
 Continuously attempts to keep the selected target visible, whether it is the player,
 an item, or any other actor in the world.
 
 ## Roadmap
 - Aspect Ratio Modifier
