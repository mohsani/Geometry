#include "TwoDimensional.h"

TwoDimensional::TwoDimensional(string color, float centerX, float centerY) 
	: Shape(color, centerX, centerY)
{
	cout << "A two dimensional shape was created!\n";
}
