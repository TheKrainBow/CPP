#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Form  
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_gradeToSign;
		const int			_gradeToExec;
	public:
		Form(const Form &toCopy);
		Form();
		Form &operator=(const Form &toCopy);
		~Form();
	
		Form(std::string name, int sign, int exec);
		bool		getSigned(void) const;
		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;
		void		beSigned(const Bureaucrat &man);
		class GradeTooLowException : virtual public std::exception
		{
			private:
				std::string error_message;
			public:
				GradeTooLowException(const std::string &msg) : error_message(msg) {}
				virtual ~GradeTooLowException() throw () {}
				const char *what() const throw();
		};
		class GradeTooHighException : virtual public std::exception
		{
			private:
				std::string error_message;
			public:
				GradeTooHighException(const std::string &msg) : error_message(msg) {}
				virtual ~GradeTooHighException() throw () {}
				const char *what() const throw();
		};

};
std::ostream	&operator<<(std::ostream &out, Form const &print);
#endif