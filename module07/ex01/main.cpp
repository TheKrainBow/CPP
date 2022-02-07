#include "iter.hpp"
#include <iostream>

void	print(const int &a)
{
	std::cout << a << std::endl;
}

int main( void )
{
	int test[5] = {0, 1, 2, 3, 4};

	::iter(test, 5, print);
}
