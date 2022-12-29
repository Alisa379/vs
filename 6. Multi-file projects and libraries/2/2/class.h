#include <iostream>

class Counter {
private:
	int a;
public:
	Counter(int a) {
		this->a = a;
	}
	void increment() {
		a++;
	}
	void decrement() {
		a--;
	}
	int rt() {
		return a;
	}
};