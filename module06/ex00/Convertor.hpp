#ifndef Convertor_H
# define Convertor_H
# include <string.h>
# include <iostream>
# include <iomanip>

# define ERROR 0
# define CHAR 1
# define INT 2
# define FLOAT 3
# define DOUBLE 4

class Convertor  
{
	private:
		std::string	_str;
		char		_c;
		int			_i;
		float		_f;
		double		_d;
	public:
		Convertor(char *str);
		~Convertor();
		void print_char();
		void print_int();
		void print_float();
		void print_double();
		void print_all();
		class CantCastIt : virtual public std::exception
		{
			private:
				std::string error_message;
			public:
				CantCastIt(const std::string &msg) : error_message(msg) {}
				virtual ~CantCastIt() throw () {}
				const char *what() const throw();
		};
};
#endif