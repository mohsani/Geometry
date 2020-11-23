#pragma once
#include "TwoDimensional.h"
class Square :
	public TwoDimensional
{
private:
	float side;
public:
	Square(string color, float centerX, float centerY, float side);
	float perimeter() override;
	float area() override;
	float getSide();
	void setSide(float side);
};

