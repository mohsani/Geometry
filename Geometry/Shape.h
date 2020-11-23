#pragma once
#include <iostream>
#include <string>
using namespace std;

class Shape
{
protected:
	float centerX;
	float centerY;
	string color;
	virtual float area() = 0;

public:
	Shape(string color, float centerX, float centerY);
	float getCenterX();
	float getCenterY();
	string getColor();
	void setCenterX(float centerX);
	void setCenterY(float centerY);
	void setColor(string color);
};

