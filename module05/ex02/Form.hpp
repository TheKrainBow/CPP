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
		Form(std::string name, int sign, int exec);
		virtual ~Form();
		bool		getSigned(void) const;
		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExec(void) const;
		void		beSigned(const Bureaucrat &man);
		virtual void execute(Bureaucrat const &executor) const;
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
		class FormNotSignedException : virtual public std::exception
		{
			private:
				std::string error_message;
			public:
				FormNotSignedException(const std::string &msg) : error_message(msg) {}
				virtual ~FormNotSignedException() throw () {}
				const char *what() const throw();
		};

};
std::ostream	&operator<<(std::ostream &out, Form const &print);
#endif