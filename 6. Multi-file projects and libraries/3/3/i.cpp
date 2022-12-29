#include <iostream>
#include "1.h"
#include "6.h"

class rhombus : public qadrilateral {
public:
	rhombus() {
		name = "rhombus";
		a = 30;
		b = 30;
		c = 30;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}
};