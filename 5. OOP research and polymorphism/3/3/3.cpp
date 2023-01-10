
//Задача: спроектировать и реализовать классы, описывающие предметную область. 
//Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

#include <iostream>

class Figure {
protected:
	std::string name = "Figure";
	bool right = 1;
	int sides = 0;
	int a, b, c, d;
	int A, B, C, D;
	Figure(int sides, int a, int b, int c, int A, int B, int C) {

	}
	Figure(int sides, int a, int b, int c, int d, int A, int B, int C, int D) {

	}
	virtual void check() {
		if (right) {
			std::cout << "right" << std::endl;
		}
		else {
			std::cout << "wrong" << std::endl;
		}
	}
	
public:
	Figure() {};
	virtual void info() {
		std::cout << name << ":" << std::endl;
		check();
		std::cout << "Amount of sides: " << sides << std::endl << std::endl;
	}
};

class Triangle : public Figure {

public:
	Triangle(int sides, int a, int b, int c, int A, int B, int C) : Figure(sides, a, b, c, A, B, C) {
		name = "Triangle";
		this->sides = sides;
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}

	void check() override {
		if (sides == 3 && A + B + C == 180) {
			right = 1;
		}
		else {
			right = 0;
		}
	}

	void info() override {
		std::cout << name << ":" << std::endl;
		check();
		Figure::check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
	}
};

class rightTriangle : public Triangle {
public:
	rightTriangle(int sides, int a, int b, int c, int A, int B, int C) : Triangle(sides, a, b, c, A, B, C) {
		name = "rightTriangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}
	void check() override {
		Triangle::check();
		if (c == 90) {
			right = 1;
		}
		Figure::check();
	}
};

class isoscelesTriangle : public Triangle {
public:
	isoscelesTriangle(int sides, int a, int b, int c, int A, int B, int C) : Triangle(sides, a, b, c, A, B, C) {
		name = "isoscelesTriangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}
	void check() override {
		Triangle::check();
		if (a == c && A == C) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
};

class equilateralTriangle : public Triangle {
public:
	equilateralTriangle(int sides, int a, int b, int c, int A, int B, int C) : Triangle(sides, a, b, c, A, B, C) {
		name = "equilateralTriangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}
	void check() override {
		Triangle::check();
		if (a == b && b == c && A == 60 && B == 60 && C == 60) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
};

class qadrilateral : public Figure {
public:
	qadrilateral(int sides, int a, int b, int c, int d, int A, int B, int C, int D) : Figure(sides, a, b, c, d, A, B, C, D) {
		name = "qadrilateral";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = a;
		this->B = b;
		this->C = C;
		this->D = D;
	}
	void check() override {
		if (sides == 4 && A + B + C + D == 360) {
			right = 1;
		}
		else {
			right = 0;
		}
		
	}

	void info() override {
		std::cout << name << ":" << std::endl;
		check();
		Figure::check();
		std::cout << "Amount of sides: " << sides << std::endl;
		std::cout << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
	}
};

class square : public qadrilateral {
public:
	square(int sides, int a, int b, int c, int d, int A, int B, int C, int D) : qadrilateral(sides, a, b, c, d, A, B, C, D) {
		name = "square";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = a;
		this->B = b;
		this->C = C;
		this->D = D;
	}
	
	void check() override {
		qadrilateral::check();
		if (a == b && b == c && c == d && A == 90 && B == 90 && C == 90 && D == 90) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
};

class parallelogram : public qadrilateral {
public:
	parallelogram(int sides, int a, int b, int c, int d, int A, int B, int C, int D) : qadrilateral(sides, a, b, c, d, A, B, C, D) {
		name = "parallelogram";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = a;
		this->B = b;
		this->C = C;
		this->D = D;
	}
	
	void check() override {
		qadrilateral::check();
		if (a == c && b == d && A == C && B == D) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
};

class rhombus : public qadrilateral {
public:
	rhombus(int sides, int a, int b, int c, int d, int A, int B, int C, int D) : qadrilateral(sides, a, b, c, d, A, B, C, D) {
		name = "rhombus";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = a;
		this->B = b;
		this->C = C;
		this->D = D;
	}
	
	void check() override {
		qadrilateral::check();
		if (a == b && b == c && c == d && A == C && B == D) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
};

class rectangle : public qadrilateral {
public:
	rectangle(int sides, int a, int b, int c, int d, int A, int B, int C, int D) : qadrilateral(sides, a, b, c, d, A, B, C, D) {
		name = "rhombus";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = a;
		this->B = b;
		this->C = C;
		this->D = D;
	}
	
	void check() override {
		qadrilateral::check();
		if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) {
			right = 1;
		}
		else {
			right = 0;
		}
		Figure::check();
	}
};

int main() {
	Figure f1;
	f1.info();
	Triangle f2(3, 10, 20, 30, 50, 60, 70);
	f2.info();
	rightTriangle f3(3, 10, 20, 30, 50, 60, 90);
	f3.info();
	rightTriangle f4(3, 10, 20, 10, 30, 60, 90);
	f4.info();
	isoscelesTriangle f5(3, 10, 20, 10, 50, 60, 50);
	f5.info();
	equilateralTriangle f6(3, 30, 30, 30, 60, 60, 60);
	f6.info();
	qadrilateral f7(4, 10, 20, 10, 20, 90, 90, 90, 90);
	f7.info();
	square f8(4, 20, 20, 20, 20, 90, 90, 90, 90);
	f8.info();
	parallelogram f9(4, 20, 30, 20, 30, 30, 40, 30, 40);
	f9.info();
	rhombus f10(4, 30, 30, 30, 30, 30, 40, 30, 40);
	f10.info();
	rectangle f11(4, 10, 20, 10, 20, 90, 90, 90, 90);
	f11.info();
}