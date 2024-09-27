#include "SettingsStructs.h"
bool FCamInfoForModifiers::IsEqualTo(const FCamInfoForModifiers& Other) const
{
	FCamInfoForModifiers Current;
	Current.FOV = FOV - Other.FOV;
	Current.SpringArmLength = SpringArmLength - Other.SpringArmLength;
	Current.DOF_FocalDistance = DOF_FocalDistance - Other.DOF_FocalDistance;
	Current.SpringArmSocketOffset.X = SpringArmSocketOffset.X - Other.SpringArmSocketOffset.X;
	Current.SpringArmSocketOffset.Y = SpringArmSocketOffset.Y - Other.SpringArmSocketOffset.Y;
	Current.SpringArmSocketOffset.Z = SpringArmSocketOffset.Z - Other.SpringArmSocketOffset.Z;
	return Current.IsZero();
}

bool FCamInfoForModifiers::IsZero() const
{
	return
	FMath::Abs(FOV) < SMALL_NUMBER &&
	FMath::Abs(SpringArmLength) < SMALL_NUMBER &&
	FMath::Abs(DOF_FocalDistance) < SMALL_NUMBER &&
	FMath::Abs(SpringArmSocketOffset.X) < SMALL_NUMBER &&
	FMath::Abs(SpringArmSocketOffset.Y) < SMALL_NUMBER &&
	FMath::Abs(SpringArmSocketOffset.Z) < SMALL_NUMBER;
}