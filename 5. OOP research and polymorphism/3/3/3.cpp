
//Задача: спроектировать и реализовать классы, описывающие предметную область. 
//Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

#include <iostream>

class Figure {
protected:
	bool right = 1;
	int sides = 0;
	int a, b, c, d;
	int A, B, C, D;
	std::string name = "Figure";
	virtual void check() {
		if (right) {
			std::cout << "right" << std::endl;
		}
		else {
			std::cout << "wrong" << std::endl;
		}
	}
public:
	virtual void info() {
		std::cout << name << ":" << std::endl;
		check();
		std::cout << "Amount of sides: " << sides << std::endl << std::endl;
	}
};

class Triangle : public Figure {
public:
	Triangle() {
		name = "Triangle";
		sides = 3;
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}
	void check() override {
		if (sides == 3 && A + B + C == 180) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
	void info() override {
		std::cout << name << ":" << std::endl;
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
	}
};

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
	void check() override {
		if (c == 90) {
			right = 1;
		}
		Triangle::check();
	}
};

class rightTriangle1 : public Triangle {
public:
	rightTriangle1() {
		name = "rightTriangle";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 40;
		C = 90;
	}
};

class isoscelesTriangle : public Triangle {
public:
	isoscelesTriangle() {
		name = "isoscelesTriangle";
		a = 10;
		b = 20;
		A = 50;
		c = 10;
		B = 60;
		C = 50;
	}
	void check() override {
		if (a == c && A == C) {
			right = 1;
		}
		else {
			right = 0;
		}
		Triangle::check();
	}
};

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
	void check() override {
		if (a == b && b == c && A == 60 && B == 60 && C == 60) {
			right = 1;
		}
		else {
			right = 0;
		}
		Triangle::check();
	}
};

class qadrilateral : public Figure {
public:
	qadrilateral() {
		name = "qadrilateral";
		sides = 4;
		a = 10;
		b = 20;
		c = 30;
		d = 40;
		A = 50;
		B = 60;
		C = 70;
		D = 80;
	}
	void check() override {
		if (sides == 4 && A + B + C + D == 360) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
	void info() override {
		std::cout << name << ":" << std::endl;
		check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
	}
};

class square : public qadrilateral {
public:
	square() {
		name = "square";
		sides = 4;
		a = 20;
		b = 20;
		c = 20;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}
	
	void check() override {
		if (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90) {
			right = 1;
		}
		else {
			right = 0;
		}
		qadrilateral::check();
	}
};

class parallelogram : public qadrilateral {
public:
	parallelogram() {
		name = "parallelogram";
		sides = 4;
		a = 20;
		b = 30;
		c = 20;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}
	
	void check() override {
		if (a == c && b == d && A == C && B == D) {
			right = 1;
		}
		else {
			right = 0;
		}
		qadrilateral::check();
	}
};

class rhombus : public qadrilateral {
public:
	rhombus() {
		name = "rhombus";
		sides = 4;
		a = 30;
		b = 30;
		c = 30;
		d = 30;
		A = 30;
		B = 40;
		C = 30;
		D = 40;
	}
	
	void check() override {
		if (a == b && b == c && c == d && A == C && B == D) {
			right = 1;
		}
		else {
			right = 0;
		}
		qadrilateral::check();
	}
};

class rectangle : public qadrilateral {
public:
	rectangle() {
		name = "rectangle";
		sides = 4;
		a = 10;
		b = 20;
		c = 10;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}
	
	void check() override {
		if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) {
			right = 1;
		}
		else {
			right = 0;
		}
		qadrilateral::check();
	}
};

int main() {
	Figure f1;
	f1.info();
	Triangle f2;
	f2.info();
	rightTriangle f3;
	f3.info();
	rightTriangle1 f4;
	f4.info();
	isoscelesTriangle f5;
	f5.info();
	equilateralTriangle f6;
	f6.info();
	qadrilateral f7;
	f7.info();
	square f8;
	f8.info();
	parallelogram f9;
	f9.info();
	rhombus f10;
	f10.info();
	rectangle f11;
	f11.info();
}