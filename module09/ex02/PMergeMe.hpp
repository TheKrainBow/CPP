
#pragma once

#include <deque>
#include <vector>
#include <iostream>
#include <unistd.h>
#include <sys/time.h>
#include "Color.hpp"

class PMergeMe
{
private:
	int										*_input;
	std::deque<int>							_jacob;
	int										_size;
	void generateJacob(void);
public:
	PMergeMe(int *input, int size);
	PMergeMe();
	PMergeMe(PMergeMe &toCopy);
	~PMergeMe();
	void printBefore(bool shortenPrint);
	void sort();
	double sortVector(bool print, bool shortenPrint);
	float sortDeque(bool print, bool shortenPrint);
	PMergeMe &operator=(PMergeMe &toCopy);
};
