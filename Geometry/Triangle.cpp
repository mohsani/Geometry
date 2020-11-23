#include <iostream>
#include "Triangle.h"

Triangle::Triangle(string color, float centerX, float centerY, float side1, float side2, float side3, float height)
	: TwoDimensional(color, centerX, centerY)
{
	if (side1 < 0 || side2 < 0 || side3 < 0 ||
		(side1 + side2 <= side3) || side1 + side3 <= side2 ||
		side2 + side3 <= side1)
	{
		std::cout << "Not a valid triangle!\n";
		exit(0);
	}
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
	cout << "A triangle was created!\n";
}

float Triangle::perimeter()
{
	return (side1 + side2 + side3);
}

float Triangle::area()
{
	float s = (side1 + side2 + side3) / 2;
	return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

float Triangle::getHieight()
{
	return height;
}

void Triangle::setHeight(float height)
{
	this->height = height;
}

float Triangle::getSide1()
{
	return side1;
}

void Triangle::setSide1(float side1)
{
	this->side1 = side1;
}

float Triangle::getSide2()
{
	return side2;
}

void Triangle::setSide2(float side2)
{
	this->side2 = side2;
}

float Triangle::getSide3()
{
	return side3;
}

void Triangle::setSide3(float side3)
{
	this->side3 = side3;
}
