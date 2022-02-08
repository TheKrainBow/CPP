#include <iostream>
#include "Span.hpp"

void exceptionsTests()
{
	Span n(100000);
	Span small(2);

	std::cout << "❌ Trying to find a Span in an empty span ❌" << std::endl;
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
	std::cout << "❌ Trying to addNumber to a full Span ❌" << std::endl;
	try
	{
		small.addNumber(42);
		small.addNumber(42);
		small.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void basicTest()
{
	int		size = 10000;
	Span n(size);
	std::vector<int> test;

	test.push_back(42);
	test.push_back(4242);
	test.push_back(424242);
	test.push_back(42424242);
	srand(time(0));
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
}

void SubjectTest()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int		main(void) {

	std::cout << "\033[1;37m❌   Exceptions Tests   ❌" << std::endl;
	exceptionsTests();
	std::cout << std::endl << "🎖️   Basic Tests   🎖️" << std::endl;
	basicTest();
	std::cout << std::endl << "🌀   Subject Test   🌀" << std::endl;
	SubjectTest();
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
	return (0);
}