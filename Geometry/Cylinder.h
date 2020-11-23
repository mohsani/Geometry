#pragma once
#include "ThreeDimensional.h"
class Cylinder :
	public ThreeDimensional
{
private:
	float radius;
	float height;
	const float PI = 3.14f;
public:
	Cylinder(string color, float centerX, float centerY, float centerZ, float radius, float height);
	float area() override;
	float volume() override;
	float getRadius();
	void setRadius(float radius);
	float getHieight();
	void setHeight(float height);
};

