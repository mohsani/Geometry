#pragma once
#include "ThreeDimensional.h"
class Box :
	public ThreeDimensional
{
private:
	float side;
public:
	Box(string color, float centerX, float centerY, float centerZ, float side);
	float area() override;
	float volume() override;
	float getSide();
	void setSide(float side);
};

