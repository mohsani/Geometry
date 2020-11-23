#include "Box.h"

Box::Box(string color, float centerX, float centerY, float centerZ, float side)
	: ThreeDimensional(color, centerX, centerY, centerZ)
{
	this->side = side;
	cout << "A box was created!\n";
}

float Box::area()
{
	return (6 * side * side);
}

float Box::volume()
{
	return (side * side * side);
}

float Box::getSide()
{
	return side;
}

void Box::setSide(float side)
{
	this->side = side;
}
