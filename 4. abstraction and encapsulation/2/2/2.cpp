

//В этом задании вы будете читать из файла адреса и выводить их в другой файл в другом формате, отсортированными по названию города.

#include <iostream>
#include <fstream>
#include <string>

/*enum Letters {
	A = 1,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z
};*/

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
		Address* array = new Address[N];
		for (int i = 0; i < N; ++i) {
			in >> array[i].City;
			in >> array[i].Street;
			in >> array[i].House;
			in >> array[i].Flat;
		}
		in.close();
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N - 1; ++j) {
				if (array[j].City[0] > array[j+1].City[0]) {
					std::swap(array[j], array[j+1]);
				}
			}
		}
		std::ofstream out("out.txt");
		if (out.is_open()) {
			out << N << std::endl;
			for (int i = 0; i < N; ++i) {
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