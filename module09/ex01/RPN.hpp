
#pragma once

#include <stack>
#include <sstream>
#include <string>
#include <iostream>
#include "Color.hpp"

class RPN
{
private:
	std::stack<int> _data;
public:
	RPN();
	RPN(RPN &toCopy);
	RPN &operator=(RPN &toCopy);
	int handleOperation(std::string op);
	~RPN();
	class RPNException : virtual public std::exception
	{
		private:
			std::string error_message;
		public:
			RPNException(const std::string &msg) : error_message(msg) {}
			virtual ~RPNException() throw () {}
			const char *what() const throw();
	};
};
