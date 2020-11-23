#pragma once
#include "Shape.h"
class ThreeDimensional :
	public Shape
{
protected:
	float centerZ;
	virtual float volume() = 0;
public:
	ThreeDimensional(string color, float centerX, float centerY, float centerZ);
	float getCenterZ();
	void setCenterZ(float centerZ);
};

