#include "Square.h"

Square::Square(string color, float centerX, float centerY, float side)
	: TwoDimensional(color, centerX, centerY)
{
	this->side = side;
	cout << "A square was created!\n";
}

float Square::perimeter()
{
	return (4 * side);
}

float Square::area()
{
	return (side * side);
}

float Square::getSide()
{
	return side;
}

void Square::setSide(float side)
{
	this->side = side;
}
