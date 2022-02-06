#include "Bureaucrat.hpp"  

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &toCopy) : _name(toCopy._name)
{
	*this = toCopy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &toCopy)
{
	setGrade(toCopy.getGrade());
	return *this;
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

void Bureaucrat::setGrade(int newGrade)
{
	if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException("❌ Your grade is too high! ❌");
	if  (newGrade > 150)
		throw Bureaucrat::GradeTooLowException("❌ Your grade is too low! ❌");
	_grade = newGrade;
}

void Bureaucrat::upGrade(void)
{
	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException("❌ Your grade is already maxed! ❌");
	//setGrade(_grade - 1); // This work too, but Exception message is not custom!
}

void Bureaucrat::downGrade(void)
{
	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooHighException("❌ Your grade is already the lowest! ❌");
	//setGrade(_grade + 1); // This work too, but Exception message is not custom!
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return error_message.c_str();	
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return error_message.c_str();	
}


std::ostream &operator<<(std::ostream &out, Bureaucrat const &print)
{
	out << print.getName() << ", bureaucrate grade " << print.getGrade();
	return (out);
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

void Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " successfully executed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::FormNotSignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
}
