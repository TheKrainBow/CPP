
#pragma once

#include <cstring>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <limits>

class ScalarConverter  
{
	private:
		static void convertDouble(std::string input);
		static void convertFloat(std::string input);
		static void convertInt(std::string input);
		static void convertChar(std::string input);

		static void printNan(void);
		static void printInf(void);
		static void printInfNeg(void);

		static void printChar(int c);
		static void printFloat(float f);
		static void printDouble(double d);
		static void printInt(int i);
	public:
		static void Convert(std::string str);
		class InvalidConversionException : virtual public std::exception
		{
			private:
				std::string error_message;
			public:
				InvalidConversionException(const std::string &msg) : error_message(msg) {}
				virtual ~InvalidConversionException() throw () {}
				const char *what() const throw();
		};
};