#include "Convertor.hpp"  
	
Convertor::Convertor() : _str("0")
{
}
Convertor::Convertor(const Convertor &toCopy) : _str(toCopy._str) {}
Convertor::Convertor(char *str) : _str(str), _c(0), _i(0), _f(0.0f), _d(0.0), _inf(0), _nan(false), _converted(false)
{
	isInfNan();
	isChar();
	isNum();
	return ;
}
Convertor::~Convertor() {}

void Convertor::isChar()
{
	if (std::isprint(_str[0]) && !std::isdigit(_str[0]) && _str.length() == 1)
	{
		_c = _str[0];
		_i = static_cast<int>(_c);
		_f = static_cast<float>(_c);
		_d = static_cast<double>(_c);
		_converted = true;
	}
}

void Convertor::isNum()
{
	if (_converted)
		return ;
	_d = std::strtod(_str.c_str(), NULL);
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
	_c = static_cast<char>(_d);
	_converted = true;
}

void Convertor::isInfNan()
{
	if (_str.compare("+inf") == 0 || _str.compare("-inf") == 0 || _str.compare("+inff") == 0 || _str.compare("-inff") == 0)
	{
		if (_str[0] == '+')
			_inf = 2;
		_inf--;
	}
	if (_str.compare("nan") == 0 || _str.compare("nanf") == 0)
		_nan = true;
}

const char *Convertor::InvalidConversionException::what() const throw()
{
	return error_message.c_str();
}


void Convertor::printFloat(std::ostream & os) const
{
	if (_nan)
		os << "nanf";
	else if (_inf == 1)
		os << "+inff";
	else if (_inf == -1)
		os << "-inff";
	else
		os << std::fixed << std::setprecision(1) << _f << "f";
	return ;
}

void Convertor::printDouble(std::ostream & os) const
{
	if (_nan)
		os << "nan";
	else if (_inf == 1)
		os << "+inf";
	else if (_inf == -1)
		os << "-inf";
	else
		os << std::fixed << std::setprecision(1) << _d;
	return ;
}

void Convertor::printChar(std::ostream & os) const
{
	if (_nan)
		os << "impossible";
	else if (_inf == 1)
		os << "impossible";
	else if (_inf == -1)
		os << "impossible";
	else if (_c >= 33 && _c <= 126)
		os << _c;
	else
		os << "Non displayable";
	return ;
}

void Convertor::printInt(std::ostream & os) const
{
	if (_nan)
		os << "impossible";
	else if (_inf == 1)
		os << "2147483647";
	else if (_inf == -1)
		os << "-2147483647";
	else
		os << _i;
	return ;
}

std::ostream & operator<<(std::ostream &os, Convertor const & toPrint)
{
	os << "char: ";
	toPrint.printChar(os);
	os << std::endl;
	os << "int: ";
	toPrint.printInt(os);
	os << std::endl;
	os << "float: ";
	toPrint.printFloat(os);
	os << std::endl;
	os << "double: ";
	toPrint.printDouble(os);
	return (os);
}