#include "span.hpp"  
#include <iostream>
#include <algorithm>

void span::addNumber(int number)
{
	if (_array.size() == _sizemax)
		throw MaxNumberLimitException();
	//std::cout << "Adding " << number << " to Array." << std::endl;
	_array.push_back(number);
}

int	span::shortestSpan()
{
	std::vector<int>::iterator	first;
	int							last_nbr = -1;;
	int							shortestSpan = -1;

	if (_array.size() < 2)
		throw TooSmallArrayException();
	std::sort(_array.begin(), _array.end());
	for (first = _array.begin(); first < _array.end(); first++)
	{
		if (last_nbr != -1 && *first != last_nbr
		&& (*first - last_nbr < shortestSpan || shortestSpan == -1))
			shortestSpan = *first - last_nbr;
		last_nbr = *first;
	}
	return shortestSpan;
}

void span::printArray()
{
	std::vector<int>::iterator first;

	for (first = _array.begin(); first < _array.end(); first++)
		std::cout << *first << std::endl;
}

int	span::longestSpan()
{
	std::vector<int>::iterator first;

	std::sort(_array.begin(), _array.end());
	if (_array.size() < 2)
		throw TooSmallArrayException();
	return (_array[_array.size() - 1] - _array[0]);
}

span::span(unsigned int n) : _sizemax(n)
{
	//std::cout << "Constructor, size = " << _size << " _sizemax = " << _sizemax << std::endl;
}
	
span::~span()
{
}

const char *span::MaxNumberLimitException::what() const throw()
{
	return "Array is already full!";	
}

const char *span::TooSmallArrayException::what() const throw()
{
	return "Array is too Small to find Span!";	
}
