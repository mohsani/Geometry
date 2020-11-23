#pragma once
#include "TwoDimensional.h"
class Triangle :
	public TwoDimensional
{
private:
	float side1;
	float side2;
	float side3;
	float height;
public:
	Triangle(string color, float centerX, float centerY, 
			float side1, float side2, float side3, float height);
	float perimeter() override;
	float area() override;
	float getHieight();
	void setHeight(float height);
	float getSide1();
	void setSide1(float side1);
	float getSide2();
	void setSide2(float side2);
	float getSide3();
	void setSide3(float side3);
};

