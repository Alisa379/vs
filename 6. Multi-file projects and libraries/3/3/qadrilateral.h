#pragma once
#include "Figure.h"

class qadrilateral : public Figure {
public:
	qadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void print_info();
};