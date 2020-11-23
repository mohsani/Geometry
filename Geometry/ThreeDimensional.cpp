#include "ThreeDimensional.h"

ThreeDimensional::ThreeDimensional(string color, float centerX, float centerY, float centerZ)
	: Shape(color, centerX, centerY)
{
	this->centerZ = centerZ;
	cout << "A three dimensional shape was created!\n";
}

float ThreeDimensional::getCenterZ()
{
	return centerZ;
}

void ThreeDimensional::setCenterZ(float centerZ)
{
	this->centerZ = centerZ;
}
