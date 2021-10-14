#ifndef Convertor_H
# define Convertor_H
# include <cstring>
# include <cstdlib>
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
		long int	_i;
		float		_f;
		double		_d;
		bool		_cprint;
		bool		_iprint;
		bool		_fprint;
		bool		_dprint;
	public:
		Convertor(char *str);
		~Convertor();
		void print_char();
		void print_int();
		void print_float();
		void print_double();
		void print_all();
};
#endif