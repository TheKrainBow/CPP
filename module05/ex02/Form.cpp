#include "Form.hpp"  
	
Form::Form(std::string name, int sign, int exec) : _name(name), _gradeToSign(sign), _gradeToExec(exec)
{
	if (exec < 1 || sign < 1)
		throw (Form::GradeTooHighException("❌ Grade is too high! ❌"));
	if (exec > 150 || sign > 150)
		throw (Form::GradeTooLowException("❌ Grade is too low! ❌"));
	_signed = false;
}

Form::Form() : _name("Default"), _gradeToSign(1), _gradeToExec(1)
{
	_signed = false;
}

Form::Form(const Form &toCopy) : _name(toCopy._name), _gradeToSign(toCopy._gradeToSign), _gradeToExec(toCopy._gradeToExec)
{
	*this = toCopy;
}

Form	&Form::operator=(const Form &toCopy)
{
	_signed = toCopy._signed;
	return *this;
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
		throw (Form::GradeTooLowException(man.getName() + " cannot signs " + _name + " because his grade is too low"));
	if (_signed)
		throw (Form::GradeTooLowException(_name + " is already signed."));
	_signed = true;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return error_message.c_str();	
}

const char *Form::GradeTooHighException::what() const throw()
{
	return error_message.c_str();	
}

const char *Form::FormNotSignedException::what() const throw()
{
	return error_message.c_str();	
}

void		Form::execute(Bureaucrat const &executor) const
{
	if (!_signed)
		throw (Form::FormNotSignedException(_name + " is not signed."));
	if (executor.getGrade() > _gradeToExec)
		throw (Form::GradeTooLowException(executor.getName() + " cannot execute " + _name + " because his grade is too low"));
}

std::ostream &operator<<(std::ostream &out, Form const &print)
{
	out << "Form: " << print.getName() << ", Sign at " << print.getGradeToSign() << ", Exec at " << print.getGradeToExec();
	return (out);
}