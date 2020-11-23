#pragma once
#include "ThreeDimensional.h"
class Sphere :
	public ThreeDimensional
{
private:
	float radius;
	const float PI = 3.14f;
public:
	Sphere(string color, float centerX, float centerY, float centerZ, float radius);
	float area() override;
	float volume() override;
	float getRadius();
	void setRadius(float radius);
};

