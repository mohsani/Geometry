#include "Sphere.h"

Sphere::Sphere(string color, float centerX, float centerY, float centerZ, float radius)
	: ThreeDimensional(color, centerX, centerY, centerZ)
{
	this->radius = radius;
	cout << "A sphere was created!\n";
}

float Sphere::area()
{
	return (4 * PI * radius * radius);
}

float Sphere::volume()
{
	return (float(4) / float(3)) * PI * radius * radius * radius;
}

float Sphere::getRadius()
{
	return radius;
}

void Sphere::setRadius(float radius)
{
	this->radius = radius;
}
