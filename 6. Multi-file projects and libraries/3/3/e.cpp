#include <iostream>
#include "1.h"
#include "2.h"

class equilateralTriangle : public Triangle {
public:
	equilateralTriangle() {
		name = "equilateralTriangle";
		a = 30;
		b = 30;
		c = 30;
		A = 60;
		B = 60;
		C = 60;
	}
};