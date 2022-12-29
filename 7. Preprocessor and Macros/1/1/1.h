#pragma once
#include <iostream>

void add() {
	int x, y;
	std::cout << "Working in combat mode: " << std::endl;
	std::cout << "Insert number 1: ";
	std::cin >> x;
	std::cout << std::endl << "Insert number 2: ";
	std::cin >> y;
	std::cout << "Addition result is: " << x + y;
}
