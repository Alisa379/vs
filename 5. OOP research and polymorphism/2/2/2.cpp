
//Задача: спроектировать и реализовать классы, описывающие предметную область. 
//Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. 
//Значения используйте произвольные.

#include <iostream>

class Figure {
protected:
	std::string name;
	int a, b, c, d;
	int A, B, C, D;
};

class Triangle : public Figure {
public:
	Triangle() {
		name = "Triangle";
		a = 10;
		b = 20;
		c = 30;
		A = 50;
		B = 60;
		C = 70;
	}
	void getInfo() {
		std::cout << name << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
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
};

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
};

class qadrilateral : public Figure {
public:
	qadrilateral() {
		name = "qadrilateral";
		a = 10;
		b = 20;
		c = 10;
		d = 20;
		A = 90;
		B = 90;
		C = 90;
		D = 90;
	}
	void getInfo() {
		std::cout << name << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;
	}
};

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

int main() {
	Triangle f1;
	f1.getInfo();
	rightTriangle f2;
	f2.getInfo();
	isoscelesTriangle f3;
	f3.getInfo();
	equilateralTriangle f4;
	f4.getInfo();
	qadrilateral f5;
	f5.getInfo();
	square f6;
	f6.getInfo();
	parallelogram f7;
	f7.getInfo();
	rhombus f8;
	f8.getInfo();
}
