
//Задача: спроектировать и реализовать классы, описывающие предметную область. 
//Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. 
//Значения используйте произвольные.

#include <iostream>
#include <string>

class Figure {
protected:
	std::string name;
public:
	int a, b, c, d;
	int A, B, C, D;
	std::string get() {
		return name;
	}
};

class Triangle : public Figure{
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

	void print_info(Triangle* p) {
		std::cout << get() << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
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
	void print_info(qadrilateral* p) {
		std::cout << get() << std::endl << "Sides: " << "a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
		std::cout << "Angles: " << "A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl << std::endl;;
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
	Triangle t1;
	rightTriangle t2;
	isoscelesTriangle t3;
	equilateralTriangle t4;
	qadrilateral q1;
	square q2;
	parallelogram q3;
	rhombus q4;
	Triangle* pt1 = &t1;
	Triangle* pt2 = &t2;
	Triangle* pt3 = &t3;
	Triangle* pt4 = &t4;
	qadrilateral* pq1 = &q1;
	qadrilateral* pq2 = &q2;
	qadrilateral* pq3 = &q3;
	qadrilateral* pq4 = &q4;
	pt1->print_info(pt1);
	pt2->print_info(pt2);
	pt3->print_info(pt3);
	pt4->print_info(pt4);
	pq1->print_info(pq1);
	pq2->print_info(pq2);
	system("pause");
	pq3->print_info(pq3);
	pq4->print_info(pq4);
}
