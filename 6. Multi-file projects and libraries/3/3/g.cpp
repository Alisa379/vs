#include <iostream>
#include "1.h"
#include "6.h"

class square : public qadrilateral {
public:
	square() {
		name = "square";
		a = 20;
		b = 20;
		c = 20;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}
};