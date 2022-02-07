#include "Array.hpp"
#include <iostream>

int main( void ) {
	std::cout << "We create an Array of int a, of size 10" << std::endl;
	Array<int> a(10);
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "We assign a[5] = 2" << std::endl;
	a[5] = 2;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "We create an Array of int b with operator =" << std::endl;
	Array<int> b = a;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "We assign b[5] = 4" << std::endl;
	b[5] = 4;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "We create an Array of int c with copy constructor" << std::endl;
	Array<int> c(a);
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "c[5] = " << c[5] << std::endl;
	std::cout << "We assign a[5] = 42" << std::endl;
	a[5] = 42;
	std::cout << "a[5] = " << a[5] << std::endl;
	std::cout << "b[5] = " << b[5] << std::endl;
	std::cout << "c[5] = " << c[5] << std::endl;
	std::cout << "a.size() = " << a.size() << std::endl;
	std::cout << "b.size() = " << b.size() << std::endl;
	std::cout << "c.size() = " << c.size() << std::endl;
}