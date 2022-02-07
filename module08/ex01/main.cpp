#include <iostream>
#include "Span.hpp"

int		main(void) {
	int		size = 10000;
	Span n(size);
	std::vector<int> test;

	test.push_back(42);
	test.push_back(4242);
	test.push_back(424242);
	test.push_back(42424242);
	srand(time(0));
	try
	{
		int longestSpan = n.longestSpan();
		std::cout << "Longest Span is " << longestSpan << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int shortestSpan = n.shortestSpan();
		std::cout << "Shortest Span is " << shortestSpan << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < 10; i++)
	{
		try
		{
			n.addNumber(rand() % (size));
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	n.addNumber(test.begin(), test.end());
	n.printArray();
	std::cout << "Longest Span is " << n.longestSpan() << std::endl;
	std::cout << "Shortest Span is " << n.shortestSpan() << std::endl;
	return (0);
}