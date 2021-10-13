#include "Convertor.hpp"  
	
Convertor::Convertor(char *str)
{
	_str = std::string(str);
	_c = (char)std::stoi(_str);
	_i = std::stoi(_str);
	_f = std::stof(_str);
	_d = std::stod(_str);
}
	
Convertor::~Convertor()
{
}

void Convertor::print_char()
{
	std::cout << "char: ";
	if (std::isprint(_i))
		std::cout << "'" << _c << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void Convertor::print_int()
{
	std::cout << "int: ";
	std::cout << _i;
	std::cout << std::endl;
}

void Convertor::print_float()
{
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << _f << "f";
	std::cout << std::endl;
}

void Convertor::print_double()
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << _d;
	std::cout << std::endl;
}

void Convertor::print_all()
{
	print_char();
	print_int();
	print_float();
	print_double();
}