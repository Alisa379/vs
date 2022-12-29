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