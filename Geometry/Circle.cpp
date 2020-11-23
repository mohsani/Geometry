#include "Circle.h"

Circle::Circle(string color, float centerX, float centerY, float radius)
	: TwoDimensional(color, centerX, centerY)
{
	this->radius = radius;
	cout << "A circle was created!\n";
}

float Circle::perimeter() {
	return (2 * PI * radius);
}

float Circle::area() {
	return (PI * (radius * radius));
}

float Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(float radius)
{
	this->radius = radius;
}
