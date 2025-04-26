#include <iostream>
#include "add.h"

int returnNumber()
{
	std::cout << "Enter a number to add: " << "\n";
	int x{};
	std::cin >> x;
	return x;
}

void giveNumber(int x)
{
	std::cout << "this is your number added: " << x << "\n";
}

