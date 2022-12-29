#include <iostream>
#include <string>
#include "1.h"
#include "2.h"

class rightTriangle : public Triangle {
public:
	rightTriangle() {
		name = "rightTriangle";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 90;
	}
};