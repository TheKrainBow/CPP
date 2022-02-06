#include "Convertor.hpp"  
	
Convertor::Convertor() : _str("0") {}
Convertor::Convertor(const Convertor &toCopy) : _str(toCopy._str) {}
Convertor::Convertor(char *str) : _str(str)
{
	try
	{
		detectType(); 
	}
	catch (Convertor::InvalidConversionException &e)
	{
		std::cout << e.what();
	}
}
Convertor::~Convertor() {}

void Convertor::detectType()
{
	unsigned long		pos;
	
	for (std::string::iterator it = _str.begin(); it != _str.end(); it++)
		if (std::isalpha(*it))
		{
			if (std::strchr("infa.-+", *it) == NULL)
				throw Convertor::InvalidConversionException("Invalid Conversion: invalid char detected");
			else if (std::strchr("infa", *it) != NULL && (_str.compare("+inf") != 0 && _str.compare("-inf") != 0 && _str.compare("+inff") != 0 && _str.compare("-inff") != 0 && _str.compare("nan") != 0 && _str.compare("nanf") != 0))
				throw Convertor::InvalidConversionException("Invalid Conversion: invalid char detected");
		}
	if ((pos = _str.find('.', 0)) != std::string::npos)
	{
		if (_str.find('.', pos + 1) != std::string::npos)
			throw Convertor::InvalidConversionException("Invalid Conversion: two \'.\' in the number");
		if (_str.at(_str.length() - 1) == 'f')
			_type = FLOAT;
		else
			_type = DOUBLE;
	}
}

void Convertor::convertToAllTypes()
{
	std::cout << std::atof(_str.c_str()) << std::endl;
}

const char *Convertor::InvalidConversionException::what() const throw()
{
	return error_message.c_str();	
}
