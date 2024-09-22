
#pragma once

#include <stack>
#include <sstream>
#include <string>
#include <iostream>

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
};
