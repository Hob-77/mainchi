#include "add.h"

int main()
{
	int x{ returnNumber() };
	int y{ returnNumber() };
	giveNumber(x + y);
	return 0;
}