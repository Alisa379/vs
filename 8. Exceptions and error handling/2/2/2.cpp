#include <iostream>
#include <string.h>
#include "Header.h"


class Figure : public ext {
public:

	virtual void info() {
		std::cout << name << " " << "(sides " << side1 << ", " << side2 << ", " << side3 << "; " << "angles " << A << ", " << B << ", " << C << ") created" << std::endl;
	}
	virtual void check() {
		if (sides != 0) {
			throw NOTZEROSIDE();
		}
	}

public:
	int sides;
	int side1;
	int side2;
	int side3;
	int side4;
	int A, B, C, D;
	std::string name = "Figure";
	
		Figure() {
			try {
				sides = 0;
				side1 = 0;
				side2 = 0;
				side3 = 0;
				side4 = 0;
				A = 0, B = 0, C = 0, D = 0;
				check();
				info();
			}
			catch (NOTZEROSIDE &e) {
				std::cout << "Figure's creation error. The reason: " << e.notzeroside() << std::endl;
			}
		}
	
};



class Triangle : public Figure {
public:

	void check() override {
		if (sides != 3) {
			throw NOTTHREESIDE();
		}
		if (A + B + C != 180) {
			throw WRONGTRIANGLESUM();
		}
	}

	Triangle() {
		try {
			name = "Triangle";
			sides = 3;
			side1 = 2;
			side2 = 1;
			side3 = 3;
			A = 35, B = 95, C = 50;
			check();
			info();
		}
		catch (NOTTHREESIDE &e) {
			std::cout << "Figure's creation error. The reason: " << e.notthreeside() << std::endl;
		}
		catch (WRONGTRIANGLESUM &r) {
			std::cout << "Figure's creation error. The reason: " << r.wrongtrianglesum() << std::endl;
		}
	}
};

class rightTriangle : public Triangle {
public:
	
	void check() override {
		if (C != 90) {
			throw NORIGHTANGLE();
		}
	}

	rightTriangle() {
		try {
			name = "rightTriangle";
			sides = 3;
			side1 = 2;
			side2 = 1;
			side3 = 3;
			A = 30, B = 60, C = 90;
			Triangle::check();
			check();
			info();
		}
		catch (NOTTHREESIDE &e) {
		std::cout << "Figure's creation error. The reason: " << e.notthreeside() << std::endl;
		}
		catch (WRONGTRIANGLESUM &e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongtrianglesum() << std::endl;
		}
		catch (NORIGHTANGLE& e) {
			std::cout << "Figure's creation error. The reason: " << e.norightangle() << std::endl;
		}
	}

};

class isoscelesTriangle : public Triangle {
public:
	
	void check() override {
		if (side1 != side3 || A != C) {
			throw NOTISOSCELES();
		}
	}

	isoscelesTriangle() {
		try {
			name = "isoscelesTriangle";
			sides = 3;
			side1 = 3;
			side2 = 1;
			side3 = 3;
			A = 30, B = 120, C = 30;
			Triangle::check();
			check();
			info();
		}
		catch (NOTTHREESIDE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notthreeside() << std::endl;
		}
		catch (WRONGTRIANGLESUM& e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongtrianglesum() << std::endl;
		}
		catch (NOTISOSCELES& e) {
			std::cout << "Figure's creation error. The reason: " << e.notisosceles() << std::endl;
		}
	}

};

class equilateralTriangle : public Triangle {
public:
	
	void check() override {
		if (side1 != side2 || side2 != side3 || A != B || B != C) {
			throw NOTEQUILATERAL();
		}
	}

	equilateralTriangle() {
		try {
			name = "equilateralTriangle";
			sides = 3;
			side1 = 3;
			side2 = 3;
			side3 = 3;
			A = 60, B = 60, C = 60;
			Triangle::check();
			check();
			info();
		}
		catch (NOTTHREESIDE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notthreeside() << std::endl;
		}
		catch (WRONGTRIANGLESUM& e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongtrianglesum() << std::endl;
		}
		catch (NOTEQUILATERAL& e) {
			std::cout << "Figure's creation error. The reason: " << e.notequilateral() << std::endl;
		}
	
	}

};

class qadrilateral : public Figure {
public:
	
	void check() override {
		if (sides != 4) {
			throw NOTFOURSIDE();
		}
		if (A + B + C + D != 360) {
			throw WRONGQADRILATERALSUM();
		}
	}

	void info() override {
		std::cout << name << " " << "(sides " << side1 << ", " << side2 << ", " << side3 << ", " << side4 << "; " << "angles " << A << ", " << B << ", " << C << ", " << D << ") created" << std::endl;
	}

	qadrilateral() {
		try {
			name = "qadrilateral";
			sides = 4;
			side1 = 3;
			side2 = 2;
			side3 = 1;
			side4 = 6;
			A = 60, B = 30, C = 180, D = 90;
			check();
			info();
		}
		catch (WRONGQADRILATERALSUM& e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongqadrilateralsum() << std::endl;
		}
		catch (NOTFOURSIDE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notfourside() << std::endl;
		}
	}

};

class rectangle : public qadrilateral {
public:

	void check() override {
		if (side1 != side3 || side2 != side4 || A != 90 || B != 90 || C != 90 || D != 90) {
			throw NOTRECTANGLE();
		}
	}

	rectangle() {
		try {
			name = "rectangle";
			sides = 4;
			side1 = 2;
			side2 = 3;
			side3 = 2;
			side4 = 3;
			A = 90, B = 90, C = 90, D = 90;
			qadrilateral::check();
			check();
			info();
		}
		catch (WRONGQADRILATERALSUM& e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongqadrilateralsum() << std::endl;
		}
		catch (NOTFOURSIDE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notfourside() << std::endl;
		}
		catch (NOTRECTANGLE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notrectangle() << std::endl;
		}
	}

};

class square : public qadrilateral {
public:

	void check() override {
		if (side1 != side3 || side2 != side4 || side1 != side4 || A != 90 || B != 90 || C != 90 || D != 90) {
			throw NOTSQUARE();
		}
	}

	square() {
		try {
			name = "square";
			sides = 4;
			side1 = 4;
			side2 = 4;
			side3 = 4;
			side4 = 4;
			A = 90, B = 90, C = 90, D = 90;
			qadrilateral::check();
			check();
			info();
		}
		catch (WRONGQADRILATERALSUM& e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongqadrilateralsum() << std::endl;
		}
		catch (NOTFOURSIDE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notfourside() << std::endl;
		}
		catch (NOTSQUARE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notsquare() << std::endl;
		}
	}

};

class parallelogram : public qadrilateral {
public:
	
	void check() override {
		if (side1 != side3 || side2 != side4 || A != C || B != D) {
			throw NOTPARALLELOGRAM();
		}
	}

	parallelogram() {
		try {
			name = "parallelogram";
			sides = 4;
			side1 = 4;
			side2 = 3;
			side3 = 4;
			side4 = 3;
			A = 30, B = 150, C = 30, D = 150;
			qadrilateral::check();
			check();
			info();
		}
		catch (WRONGQADRILATERALSUM& e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongqadrilateralsum() << std::endl;
		}
		catch (NOTFOURSIDE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notfourside() << std::endl;
		}
		catch (NOTPARALLELOGRAM& e) {
			std::cout << "Figure's creation error. The reason: " << e.notparallelogram() << std::endl;
		}
	}

};

class rhombus : public qadrilateral {
public:
	void check() override {
		if (side1 != side3 || side2 != side4 || side1 != side4 || A != C || B != D) {
			throw NOTRHOMBUS();
		}
	}

	rhombus() {
		try {
			name = "rhombus";
			sides = 4;
			side1 = 3;
			side2 = 3;
			side3 = 3;
			side4 = 3;
			A = 30, B = 150, C = 30, D = 150;
			qadrilateral::check();
			check();
			info();
		}
		catch (WRONGQADRILATERALSUM& e) {
			std::cout << "Figure's creation error. The reason: " << e.wrongqadrilateralsum() << std::endl;
		}
		catch (NOTFOURSIDE& e) {
			std::cout << "Figure's creation error. The reason: " << e.notfourside() << std::endl;
		}
		catch (NOTRHOMBUS& e) {
			std::cout << "Figure's creation error. The reason: " << e.notrhombus() << std::endl;
		}
	}

};

int main() {
	rhombus r;
}