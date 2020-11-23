#pragma once
#include "TwoDimensional.h"
class Circle :
	public TwoDimensional
{
private:
	float radius;
	const float PI = 3.14f;
public:
	Circle(string color, float centerX, float centerY, float radius);
	float perimeter() override;
	float area() override;
	float getRadius();
	void setRadius(float radius);
};

