#include "Array.hpp"
#include <iostream>

int main( void ) {
	int *a = new int();
	Array<int> b;
	Array<int> c(10);
	Array<int> d = c;

	c[5] = 2;
	std::cout << c.size() << std::endl;
	std::cout << c[5] << std::endl;
	std::cout << d[5] << std::endl;
	delete a;
}