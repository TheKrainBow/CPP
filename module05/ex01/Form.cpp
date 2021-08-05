#include "Form.hpp"  
	
Form::Form(std::string name, int sign, int exec) : _name(name), _gradeToSign(sign), _gradeToExec(exec)
{
	if (exec < 1)
		throw (Form::GradeTooHighException("Grade is too high!"));
	if (exec > 150)
		throw (Form::GradeTooLowException("Grade is too low!"));
	_signed = false;
}
	
Form::~Form()
{
}

std::string Form::getName(void) const
{
	return (_name);
}

int		Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int		Form::getGradeToExec(void) const
{
	return (_gradeToExec);
}

bool	Form::getSigned(void) const
{
	return (_signed);
}

void	Form::beSigned(const Bureaucrat &man)
{
	if (man.getGrade() > _gradeToSign)
		throw (Form::GradeTooLowException(man.getName() + " is too low graded to sign \"" + _name + "\""));
	if (_signed)
		throw (Form::GradeTooLowException("\"" + _name + "\" is already signed."));
	_signed = true;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return this->error_message.c_str();	
}

const char *Form::GradeTooHighException::what() const throw()
{
	return this->error_message.c_str();	
}


std::ostream &operator<<(std::ostream &out, Form const &print)
{
	out << "Form: \"" << print.getName() << "\", Sign at " << print.getGradeToSign() << ", Exec at " << print.getGradeToExec() << std::endl;
	return (out);
}