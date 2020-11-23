#include "Cylinder.h"

Cylinder::Cylinder(string color, float centerX, float centerY, float centerZ, float radius, float height)
	: ThreeDimensional(color, centerX, centerY, centerZ)
{
	this->radius = radius;
	this->height = height;
	cout << "A cylinder was created!\n";
}

float Cylinder::area()
{
	return ((2 * PI * radius * radius) + (2 * 3.14 * radius * height));
}

float Cylinder::volume()
{
	return (PI * radius * radius * height);
}

float Cylinder::getRadius()
{
	return radius;
}

void Cylinder::setRadius(float radius)
{
	this->radius = radius;
}

float Cylinder::getHieight()
{
	return height;
}

void Cylinder::setHeight(float height)
{
	this->height = height;
}
