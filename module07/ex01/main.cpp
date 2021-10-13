#include "iter.hpp"
#include <iostream>

int	inc(int a)
{
	return a + 42;
}

int main( void ) {
	int test[5] = {0, 1, 2, 3, 4};

	for (int i = 0; i < 5; i++)
		std::cout << test[i] << " ";
	iter<int>(test, 5, inc);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << test[i] << " ";
	std::cout << std::endl;
}