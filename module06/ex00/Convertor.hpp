#ifndef Convertor_H
# define Convertor_H
# include <cstring>
# include <cstdlib>
# include <iostream>
# include <iomanip>

typedef enum		s_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE
}	t_type;

class Convertor  
{
	private:
		std::string	_str;
		char				_c;
		long int			_i;
		float				_f;
		double				_d;
		t_type				_type;
	public:
		Convertor();
		Convertor(const Convertor &toCopy);
		Convertor &operator=(const Convertor &toCopy);
		~Convertor();
	
		Convertor(char *str);
		void detectType();
		void convertToAllTypes();
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