#include "Trapezium.h"

Trapezium::Trapezium(string color, float centerX, float centerY, 
	float base1, float base2, float height, float side1, float side2)
	: TwoDimensional(color, centerX, centerY)
{
	this->base1 = base1;
	this->base2 = base2;
	this->height = height;
	this->side1 = side1;
	this->side2 = side2;
	cout << "A trapezium was created!\n";
}

float Trapezium::perimeter()
{
	return (side1 + side2 + base1 + base2);
}

float Trapezium::area()
{
	return (1.0f / 2.0f * (base1 + base2) * height);
}

float Trapezium::getBase1()
{
	return base1;
}

void Trapezium::setBase1(float base1)
{
	this->base1 = base1;
}

float Trapezium::getBase2()
{
	return base2;
}

void Trapezium::setBase2(float base2)
{
	this->base2 = base2;
}

float Trapezium::getHieight()
{
	return height;
}

void Trapezium::setHeight(float height)
{
	this->height = height;
}

float Trapezium::getSide1()
{
	return side1;
}

void Trapezium::setSide1(float side1)
{
	this->side1 = side1;
}

float Trapezium::getSide2()
{
	return side2;
}

void Trapezium::setSide2(float side2)
{
	this->side2 = side2;
}
