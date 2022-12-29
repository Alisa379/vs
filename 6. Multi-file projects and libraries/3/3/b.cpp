#include <iostream>
#include <string>
#include "1.h"

class Triangle : public Figure {
public:
	Triangle() {
		name = "Triangle";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}

	void print_info(Triangle* p) {
		std::cout << get() << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
	}
};