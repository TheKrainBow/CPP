#include "ScalarConverter.hpp"  

bool isStringDigit(std::string input)
{
	size_t i = 0;
	while (input[i] == '-' || input[i] == '+')
		i++;
	while (i < input.size())
	{
		if (!isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

void ScalarConverter::convertDouble(std::string input)
{
	int		i;
	float	f;
	double	d;

	d = std::strtod(input.c_str(), NULL);
	f = static_cast<float>(d);
	if (f == -std::numeric_limits<float>::infinity())
		i = std::numeric_limits<int>::min();
	else if (f >= std::numeric_limits<float>::infinity())
		i = std::numeric_limits<int>::max();
	else
		i = static_cast<int>(f);
	std::cout << "char: ";
	printChar(i);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: ";
	printFloat(f);
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convertFloat(std::string input)
{
	int		i;
	float	f;
	double	d;

	f = std::strtof(input.c_str(), NULL);
	if (f == -std::numeric_limits<float>::infinity())
		i = std::numeric_limits<int>::min();
	else if (f >= std::numeric_limits<float>::infinity())
		i = std::numeric_limits<int>::max();
	else
		i = static_cast<int>(f);
	d = static_cast<double>(f);
	std::cout << "char: ";
	printChar(i);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: ";
	printFloat(f);
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::convertChar(std::string input)
{
	char	c;
	int		i;
	float	f;
	double	d;

	c = input[0];
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	std::cout << "char: ";
	printChar(i);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: ";
	printFloat(f);
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::printChar(int c)
{
	if (c > 255 || c < 0 || !isprint(c))
		std::cout << "Non printable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(c) << "'" << std::endl;
}

void ScalarConverter::printNan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan" << std::endl;
}

void ScalarConverter::printInf(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: inff" << std::endl;
	std::cout << "double: inf" << std::endl;
}

void ScalarConverter::printInfNeg(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: -inff" << std::endl;
	std::cout << "double: -inf" << std::endl;
}

void ScalarConverter::printFloat(float f)
{
	if (f == -std::numeric_limits<float>::infinity())
		std::cout << "-inff" << std::endl;
	else if (f == std::numeric_limits<float>::infinity())
		std::cout << "inff" << std::endl;
	else
		std::cout << f << std::endl;
}

void ScalarConverter::convertInt(std::string input)
{
	int		i;
	float	f;
	double	d;

	if (input.length() <= 12)
		i = std::atoi(input.c_str());
	else
		throw InvalidConversionException("Int is out of range!");
	d = static_cast<double>(i);
	f = static_cast<float>(i);
	std::cout << "char: ";
	printChar(i);
	std::cout << "int: " << i << std::endl;
	std::cout << "float: ";
	printFloat(f);
	std::cout << "double: " << d << std::endl;
}

void ScalarConverter::Convert(std::string input)
{
	bool is_double = input.find_first_of('.') != std::string::npos;
	bool is_float = is_double && input.find_first_of('f') != std::string::npos;
	bool is_char = isdigit(input[0]) == false && input.size() == 1 && !is_double;
	if (is_float)
		is_double = false;
	bool is_int = !is_double && !is_float && !is_char && isStringDigit(input);

	(void)is_int;
	if (is_double)
		convertDouble(input);
	else if (is_float)
		convertFloat(input);
	else if (is_int)
		convertInt(input);
	else if (is_char)
		convertChar(input);
	else if (!input.compare("nan") || !input.compare("nanf"))
		printNan();
	else if (!input.compare("inf") || !input.compare("+inf")
			|| !input.compare("inff") || !input.compare("+inff"))
		printInf();
	else if (!input.compare("-inf") || !input.compare("-inff"))
		printInfNeg();
	else
		throw ScalarConverter::InvalidConversionException("Invalid conversion");

}

const char *ScalarConverter::InvalidConversionException::what() const throw()
{
	return error_message.c_str();
}