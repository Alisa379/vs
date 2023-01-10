
//Задача: спроектировать и реализовать классы, описывающие предметную область. 
//Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. 
//Значения используйте произвольные.

#include <iostream>

class Figure {
protected:
	std::string name;
	int a, b, c, d;
	int A, B, C, D;
	Figure(int a, int b, int c, int A, int B, int C) {

	}
	Figure(int a, int b, int c, int d, int A, int B, int C, int D) {

	}
};

class Triangle : public Figure {
public:
	Triangle(int a, int b, int c, int A, int B, int C) : Figure (a, b, c, A, B, C) {
		name = "Triangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}
	void print_info() {
		std::cout << name << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << std::endl << std::endl;
	}
};

class rightTriangle : public Triangle {
public:
	rightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
		name = "rightTriangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}
};

class isoscelesTriangle : public Triangle {
public:
	isoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
		name = "isoscelesTriangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}
};

class equilateralTriangle : public Triangle {
public:
	equilateralTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
		name = "equilateralTriangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = a;
		this->B = b;
		this->C = C;
	}
};

class qadrilateral : public Figure {
public:
	qadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) : Figure(a, b, c, d, A, B, C, D) {
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
	void print_info() {
		std::cout << name << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
	}
};

class square : public qadrilateral {
public:
	square(int a, int b, int c, int d, int A, int B, int C, int D) : qadrilateral(a, b, c, d, A, B, C, D) {
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
};

class parallelogram : public qadrilateral {
public:
	parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : qadrilateral(a, b, c, d, A, B, C, D) {
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
};

class rhombus : public qadrilateral {
public:
	rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : qadrilateral(a, b, c, d, A, B, C, D) {
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
};

int main() {
	Triangle f1(10, 20, 30, 50, 60, 70);
	f1.print_info();
	rightTriangle f2(10, 20, 30, 50, 60, 90);
	f2.print_info();
	isoscelesTriangle f3(10, 20, 10, 50, 60, 50);
	f3.print_info();
	equilateralTriangle f4(30, 30, 30, 60, 60, 60);
	f4.print_info();
	qadrilateral f5(10, 20, 10, 20, 90, 90, 90, 90);
	f5.print_info();
	square f6(20, 20, 20, 20, 90, 90, 90, 90);
	f6.print_info();
	parallelogram f7(20, 30, 20, 30, 30, 40, 30, 40);
	f7.print_info();
	rhombus f8(30, 30, 30, 30, 30, 40, 30, 40);
	f8.print_info();
}
