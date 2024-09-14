#include "iter.hpp"
#include <iostream>

void	print_int(const int &a)
{
	std::cout << a << std::endl;
}

void	print_string(const std::string &a)
{
	std::cout << a;
}

int main( void )
{
	int test_int[5] = {0, 1, 2, 3, 4};
	std::string test_string[5] = {"Ceci", " est", " un", " test!", "\n"};

	::iter(test_int, 5, print_int);
	::iter(test_string, 5, print_string);
}
