#include "Convertor.hpp"  
	
Convertor::Convertor(char *str) : _cprint(true), _iprint(true), _fprint(true), _dprint(true)
{
	_str = std::string(str);
	try	{ _i = atol(_str.c_str()); if (_i > 2147483647 || _i < -2147483648) {_iprint = false; _cprint = false;}}
	catch (std::invalid_argument &e) {_iprint = false; _cprint = false;}
	catch (std::out_of_range &e) {_iprint = false; _cprint = false;}
	if (_cprint)
		_c = static_cast<char>(_i);
	try	{ _f = atof(_str.c_str()); }
	catch (std::invalid_argument &e) {_fprint = false;}
	try	{ _d = atof(_str.c_str()); }
	catch (std::invalid_argument &e) {_dprint = false;}

}
	
Convertor::~Convertor()
{
}

void Convertor::print_char()
{
	std::cout << "char: ";
	if (!_cprint)
		std::cout << "impossible";
	else if (std::isprint(_i))
		std::cout << "'" << _c << "'";
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void Convertor::print_int()
{
	std::cout << "int: ";
	if (!_iprint)
		std::cout << "impossible";
	else
		std::cout << _i;
	std::cout << std::endl;
}

void Convertor::print_float()
{
	std::cout << "float: ";
	if (!_fprint)
		std::cout << "impossible";
	else 
		std::cout << std::fixed << std::setprecision(1) << _f << "f";
	std::cout << std::endl;
}

void Convertor::print_double()
{
	std::cout << "double: ";
	if (!_dprint)
		std::cout << "impossible";
	else 
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