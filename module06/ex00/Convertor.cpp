#include "Convertor.hpp"  
	
Convertor::Convertor() : _str("0")
{
}
Convertor::Convertor(const Convertor &toCopy) : _str(toCopy._str) {}
Convertor::Convertor(char *str) : _str(str), _c(0), _i(0), _f(0.0f), _d(0.0), _inf(0), _nan(false), _converted(false)
{
	isInfNan();
	isChar();
	isFloat();
	isDouble();
	isNum();
	return ;
}
Convertor::~Convertor() {}

Convertor &Convertor::operator=(const Convertor &toCopy)
{
	_d = toCopy._d;
	_i = toCopy._i;
	_f = toCopy._f;
	_c = toCopy._c;
	_inf = toCopy._inf;
	_nan = toCopy._nan;
	return *this;
}

void Convertor::isChar()
{
	if (!(std::isprint(_str[0]) && !std::isdigit(_str[0]) && _str.length() == 1))
		return ;
	_c = _str[0];
	_i = static_cast<int>(_c);
	_f = static_cast<float>(_c);
	_d = static_cast<double>(_c);
	_converted = true;
}

void Convertor::isFloat()
{
	if (_converted || _str.find('.') == std::string::npos || _str.find('f') != _str.length() - 1)
		return ;
	_f = std::strtof(_str.c_str(), NULL);
	if (_f == std::numeric_limits<float>::infinity())
		_i = std::numeric_limits<int>::max();
	else
		_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);
	_c = static_cast<char>(_f);
	_converted = true;
}

void Convertor::isDouble()
{
	if (_converted || _str.find('.') == std::string::npos)
		return ;
	_d = std::strtod(_str.c_str(), NULL);
	if (_d > std::numeric_limits<int>::infinity())
		_i = std::numeric_limits<int>::max();
	else
		_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
	_c = static_cast<char>(_d);
	_converted = true;
}

void Convertor::isNum()
{
	if (_converted)
		return ;
	if (_str.length() <= 12)
		_i = std::atoi(_str.c_str());
	else
		throw InvalidConversionException("Int is out of range!");
	_d = static_cast<double>(_i);
	_f = static_cast<float>(_i);
	_c = static_cast<char>(_i);
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
		os << "2147483647"; // Couldv print impossible!
	else if (_inf == -1)
		os << "-2147483648"; // Couldv print impossible!
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