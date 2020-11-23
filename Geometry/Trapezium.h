#pragma once
#include "TwoDimensional.h"
class Trapezium :
	public TwoDimensional
{
private:
	float base1;
	float base2;
	float height;
	float side1;
	float side2;
public:
	Trapezium(string color, float centerX, float centerY,
		float base1, float base2, float height, float side1, float side2);
	float perimeter() override;
	float area() override;
	float getBase1();
	void setBase1(float base1);
	float getBase2();
	void setBase2(float base2);
	float getHieight();
	void setHeight(float height);
	float getSide1();
	void setSide1(float side1);
	float getSide2();
	void setSide2(float side2);
};

