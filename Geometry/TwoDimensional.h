#pragma once
#include "Shape.h"
class TwoDimensional :
	public Shape
{
protected:
	virtual float perimeter() = 0;
public:
	TwoDimensional(string color, float centerX, float centerY);
};

