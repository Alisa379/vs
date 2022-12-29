#include <iostream>
#include "1.h"

class qadrilateral : public Figure {
public:
	qadrilateral() {
		name = "qadrilateral";
		a = 10;
		b = 20;
		c = 10;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}
	void print_info(qadrilateral* p) {
		std::cout << get() << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;;
	}
};