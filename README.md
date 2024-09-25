# AdvancedCameraSystem Project :
This is a basic project that shows the capabilities of the plugin of the same name.
# Unreal Version 5.1

AdvancedCameraSystem plugin 
location : ../Plugins/AcamSys

CameraModifierASC : UCameraModifier
PlayerCameraManagerASC : APlayerCameraManager
SpringArmComponentACS : USpringArmComponent
	This is the main component to handle the Camera, it came with a lot of control over Length, Location Offset , and smooth Transition between values.

/Modes: make use of the structs to set the current camera and/or springArm
OneTimeCameraMode
PermamentCameraMode

/Structs:
This are the chunk of data that set the camera and/or the springarm require for the modifier.
