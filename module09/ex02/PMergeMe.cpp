
#include "PMergeMe.hpp"

PMergeMe &PMergeMe::operator=(PMergeMe &toCopy)
{
	_input = toCopy._input;
	_size = toCopy._size;
	return (*this);
}

PMergeMe::PMergeMe()
{
}

void PMergeMe::generateJacob()
{
	int tmp = 1;	
	std::deque<int> dest;
	_jacob.clear();
	_jacob.push_back(0);
	while (tmp < _size)
	{
		_jacob.push_back(tmp);
		tmp = _jacob[_jacob.size() - 1] + _jacob[_jacob.size() - 2] * 2;
	}
	_jacob.pop_front();
	_jacob.pop_front();
	for (std::deque<int>::iterator it = _jacob.begin(); it != _jacob.end(); it++)
	{
		int val = *it;

		if (it == _jacob.begin())
		{
			dest.push_back(*it - 1);
			continue ;
		}
		while (val > *(it - 1))
		{
			dest.push_back(val - 1);
			val--;
		}
	}
	_jacob = dest;
}

PMergeMe::PMergeMe(int *input, int size)
{
	_input = input;
	_size = size;
}

PMergeMe::~PMergeMe()
{
}

void PMergeMe::printBefore(bool shortenPrint)
{
	int size = _size;

	std::cout << "Before:          ";
	if (shortenPrint)
		size = std::min(size, 20);
	if (size == _size)
		for (int i = 0; i < _size; i++)
			std::cout << _input[i] << " ";
	else
	{
		int i;
		for (i = 0; i < 6; i++)
			std::cout << _input[i] << " ";
		std::cout << "[...] ";
		for (i = size - 6; i < size; i++)
			std::cout << _input[i] << " ";
	}
	std::cout << std::endl;
}

void PMergeMe::sort(void)
{
	printBefore(true);
	double timeForVector = sortVector(true, true);
	std::cout << "Time to process a range of " << YELLOW << _size << WHITE << " elements with " << GREEN << "std" << WHITE << "::" << PURPLE << "vector" << WHITE << ": " << timeForVector << "s" << std::endl;
	double timeForDeque = sortDeque(true, true);
	std::cout << "Time to process a range of " << YELLOW << _size << WHITE << " elements with " << GREEN << "std" << WHITE << "::" << BLUE << "deque" << WHITE << ":  " << timeForDeque  << "s" << std::endl;
}