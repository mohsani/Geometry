#include "Shape.h"

Shape::Shape(string color, float centerX, float centerY)
{
	this->color = color;
	this->centerX = centerX;
	this->centerY = centerY;
	cout << "A shape was created!\n";
}

float Shape::getCenterX()
{
	return centerX;
}

float Shape::getCenterY()
{
	return centerY;
}

string Shape::getColor()
{
	return color;
}

void Shape::setCenterX(float centerX)
{
	this->centerX = centerX;
}

void Shape::setCenterY(float centerY)
{
	this->centerY = centerY;
}

void Shape::setColor(string color)
{
	this->color = color;
}
