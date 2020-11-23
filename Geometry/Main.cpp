#include <iostream>
#include "Circle.h"
#include "Square.h"
#include "Box.h"
#include "Sphere.h"

int main(int argc, char **argv) {
	Circle *circle1 = new Circle("Blue", 5, 7, 1);
	std::cout << circle1->perimeter() << std::endl;
}