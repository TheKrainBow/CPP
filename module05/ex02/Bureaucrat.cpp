#include "Bureaucrat.hpp"  

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException("Your grade is too high!");
	if  (grade > 150)
		throw Bureaucrat::GradeTooLowException("Your grade is too low!");
	_grade = grade;
}
	
Bureaucrat::~Bureaucrat()
{
}

const std::string Bureaucrat::getName(void) const
{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

void Bureaucrat::upGrade(void)
{
	if (_grade > 1)
	{
		std::cout << _name << " upgraded :)" << std::endl;
		_grade--;
	}
}

void Bureaucrat::downGrade(void)
{
	if (_grade < 150)
	{
		std::cout << _name << " downgraded :(" << std::endl;
		_grade++;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";	
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " execute " << form.getName() << std::endl;
	}
	catch (Form::FormNotSignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &print)
{
	out << print.getName() << ", bureaucrate grade " << print.getGrade() << std::endl;
	return (out);
}