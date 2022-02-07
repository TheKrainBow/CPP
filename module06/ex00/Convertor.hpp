#ifndef Convertor_H
# define Convertor_H
# include <cstring>
# include <cstdlib>
# include <iostream>
# include <iomanip>

class Convertor  
{
	private:
		std::string			_str;
		char				_c;
		long int			_i;
		float				_f;
		double				_d;
		int					_inf;
		bool				_nan;
		bool				_converted;
	public:
		Convertor();
		Convertor(const Convertor &toCopy);
		Convertor &operator=(const Convertor &toCopy);
		~Convertor();
	
		Convertor(char *str);
		void isInfNan();
		void isChar();
		void isNum();
		void printFloat(std::ostream & os) const;
		void printDouble(std::ostream & os) const;
		void printChar(std::ostream & os) const;
		void printInt(std::ostream & os) const;
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
#endif
std::ostream & operator<<(std::ostream &os, Convertor const & toPrint);