
// Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру каждого класса и выведите информацию о количестве его сторон на консоль.

#include <iostream>

class Figure {
protected:
	int sides;
public:
	int get() {
		return sides;
	}
	int a = get();
	Figure() {
		a = 0;
	}
};

class Triangle : public Figure {
public:
	int a = get();
	Triangle() {
		a = 3;
	}
};

class Quadrilateral : public Figure {
public:
	int a = get();
	Quadrilateral() {
		a = 4;
	}
};

int main(int argc, char** argv) {
	Figure f1;
	Triangle f2;
	Quadrilateral f3;
	std::cout << "Amount of sides: " << "\n" << "Figure: " << f1.a << std::endl;
	std::cout << "Triangle: " << f2.a << std::endl;
	std::cout << "Triangle: " << f3.a << std::endl;
}