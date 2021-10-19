#ifndef SPAN_H
#define SPAN_H

#include <string>
#include <cstdlib>
#include <vector>

class span  
{
	private:
		unsigned int 		_sizemax;
		std::vector<int>	_array;
	public:
		void addNumber(int n);
		span(unsigned int n);
		~span();
		int	shortestSpan(void);
		int	longestSpan(void);
		void printArray(void);
		class MaxNumberLimitException : public std::exception {
			virtual const char* what() const throw ();
		};

		class TooSmallArrayException : public std::exception {
			virtual const char *what() const throw ();
		};


};
#endif