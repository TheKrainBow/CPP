#include "Span.hpp"  
#include <iostream>
#include <algorithm>

Span::Span(unsigned int n) : _sizemax(n) {}
Span::Span() : _sizemax(0) {}
Span::Span(Span &toCopy) : _sizemax(toCopy._sizemax) { *this = toCopy; }
Span::~Span() {}
Span &Span::operator=(Span &toCopy)
{
	for (std::vector<int>::iterator first = toCopy._array.begin(); first < _array.end(); first++)
		addNumber(*first);
	return (*this);
}

void Span::addNumber(int number)
{
	if (_array.size() == _sizemax)
		throw MaxNumberLimitException();
	_array.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite)
{
	for ( ; it != ite ; it++)
		addNumber(*it);
}

int	Span::shortestSpan()
{
	int							last_nbr = -1;;
	int							shortestSpan = -1;

	if (_array.size() < 2)
		throw TooSmallArrayException();
	std::sort(_array.begin(), _array.end());
	for (std::vector<int>::iterator first = _array.begin(); first < _array.end(); first++)
	{
		if (last_nbr != -1 && *first != last_nbr
		&& (*first - last_nbr < shortestSpan || shortestSpan == -1))
			shortestSpan = *first - last_nbr;
		last_nbr = *first;
	}
	return shortestSpan;
}

void Span::printArray()
{
	std::vector<int>::iterator first;

	for (first = _array.begin(); first < _array.end(); first++)
		std::cout << *first << std::endl;
}

int	Span::longestSpan()
{
	std::vector<int>::iterator first;

	std::sort(_array.begin(), _array.end());
	if (_array.size() < 2)
		throw TooSmallArrayException();
	return (_array[_array.size() - 1] - _array[0]);
}

const char *Span::MaxNumberLimitException::what() const throw()
{
	return "Array is already full!";	
}

const char *Span::TooSmallArrayException::what() const throw()
{
	return "Array is too Small to find Span!";	
}
