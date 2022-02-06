#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>

class Form;

class Bureaucrat  
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &toCopy);
		Bureaucrat &operator=(const Bureaucrat &toCopy);
		~Bureaucrat();

		const std::string getName(void) const;
		int getGrade(void) const;
		void upGrade(void);
		void setGrade(int grade);
		void downGrade(void);
		void signForm(Form &form);
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
std::ostream	&operator<<(std::ostream &out, Bureaucrat const &print);

#include "Form.hpp"

#endif