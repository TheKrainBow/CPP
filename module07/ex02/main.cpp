#include "Array.hpp"
#include <iostream>

int main( void ) {
	int *a = new int();
	Array<int> b;
	Array<int> c(10);
	c[5] = 2;
	Array<int> d = c;
	d[5] = 42;
	Array<int> e(c);
	c[5] = 4;
	std::cout << a << std::endl;
	std::cout << c.size() << std::endl;
	std::cout << c[5] << std::endl;
	std::cout << d[5] << std::endl;
	std::cout << e[5] << std::endl;
	delete a;
}