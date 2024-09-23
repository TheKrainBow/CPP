
#include "RPN.hpp"

int RPN::handleOperation(std::string op)
{
	for (size_t i = 0; i < op.size(); i++)
	{
		if (isdigit(op[i]))
			_data.push(op[i] - 48);
		else if (isspace(op[i]))
			continue ;
		else if (std::string("+-/*").find(op[i]) != std::string::npos)
		{
			if (_data.size() < 2)
			{
				_data.empty();
				throw RPNException("Stack has less than two number when receiving an operation");
			}
			int first = _data.top();
			_data.pop();
			int second = _data.top();
			_data.pop();
			if (op[i] == '+')
				_data.push(second + first);
			if (op[i] == '-')
				_data.push(second - first);
			if (op[i] == '*')
				_data.push(second * first);
			if (op[i] == '/')
				_data.push(second / first);
		}
		else
		{
			_data.empty();
			throw RPNException("Invalid character");
		}
	}
	if (_data.size() != 1)
	{
		_data.empty();
		throw RPNException("Stack not empty after processing every arguments");
	}
	int dest = _data.top();
	_data.empty();
	return (dest);
}

RPN::RPN(RPN &toCopy)
{
	*this = toCopy;
}

RPN &RPN::operator=(RPN &toCopy)
{
	_data = toCopy._data;
	return (*this);
}

RPN::RPN()
{
}

RPN::~RPN()
{
}

const char *RPN::RPNException::what() const throw()
{
	return (error_message.c_str());
}