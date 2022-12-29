#include <iostream>
#include "1.h"
#include "6.h"

class parallelogram : public qadrilateral {
public:
	parallelogram() {
		name = "parallelogram";
		a = 20;
		b = 30;
		c = 20;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}
};