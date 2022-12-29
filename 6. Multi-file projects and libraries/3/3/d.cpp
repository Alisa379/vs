#include <iostream>
#include "1.h"
#include "2.h"
class isoscelesTriangle : public Triangle {
public:
	isoscelesTriangle() {
		name = "isoscelesTriangle";
		a = 10;
		b = 20;
		c = 10;
		A = 50;
		B = 60;
		C = 50;
	}
};