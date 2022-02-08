#ifndef SPAN_H
#define SPAN_H

#include <string>
#include <cstdlib>
#include <vector>

class Span  
{
	private:
		unsigned int 		_sizemax;
		std::vector<int>	_array;
	public:
		Span();
		~Span();
		Span(const Span &toCopy);
		Span &operator=(const Span &toCopy);

		Span(unsigned int n);
		void addNumber(int n);
		void addNumber(std::vector<int>::iterator it, std::vector<int>::iterator ite);
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