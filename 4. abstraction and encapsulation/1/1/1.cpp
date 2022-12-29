#include <iostream>
#include <fstream>
#include <string>

class Address {
public:
	std::string City;
	std::string Street;
	int House;
	int Flat;
};

int main() {
	int N;
	std::ifstream in("in.txt");
	if (in.is_open()) {
		in >> N;
		Address *array = new Address[N];
		for (int i = 0; i < N; ++i) {
			in >> array[i].City;
			in >> array[i].Street;
			in >> array[i].House;
			in >> array[i].Flat;
		}
		in.close();
		std::ofstream out("out.txt");
		if (out.is_open()) {
			out << N << std::endl;
			for (int i = N-1; i >= 0; --i) {
				out << array[i].City << ", ";
				out << array[i].Street << ", ";
				out << array[i].House << ", ";
				out << array[i].Flat << std::endl;
			}
			out.close();
		}
		delete[] array;
	}
}