#include <iostream>
#include "span.hpp"

int		main(void) {
	int		size = 10000;
	span n(size);

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
	for (int i = 0; i < size; i++)
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
	//n.printArray();
	std::cout << "Longest Span is " << n.longestSpan() << std::endl;
	std::cout << "Shortest Span is " << n.shortestSpan() << std::endl;
	return (0);
}