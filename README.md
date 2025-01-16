### Version 0.4 - Unreal Engine 5.1.1
# Advanced Camera System plugin
ACS is a modular camera system that let the designers create custom cameras behavior based in custom DataAssets names MODES.

## Basic Setting : 
* On PlayerController set as default CameraManager : APlayerCameraManagerACS.
* On the Playercharacter added the interface : BPI_Pawn. And added The SpringArmComponentACS as the default springArm for the camera.

## Modes : Permanent and One Time
* Permanent : is the mode that stick the whole time until another permanent mode is activated, example : FPS camera, TPS camera.
* One Time : is a single shot mode that could override or be additive to the current permanent mode, example : ADS, Getting Hit.
* Permanent modes allow to run Camera Modifiers and Post Process.

## CameraModifiers : 
* All camera modifiers must be inherited from CameraModifierACS.
* ActivePitchCurve : Actively correct the Distance of the camera and the FOV based on the Pitch angle.
* KeepLineOfSight : Try always to keep in line of sight the target that you set, that could be the playerCharacter, an item or whatever object in the world.

# ToDo :
* aspect ratio modifier
* Applying PostProcess camera to external
* Changing camera to external camera actor applying post process effective
* Trigger should activate new camera mode if not == currentmode , else back to previous camera mode.
