#include "PresidentialPardonForm.hpp"  

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("Default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &toCopy) : Form(toCopy)
{
	*this = toCopy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &toCopy)
{
	(void)toCopy;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}
	
PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << _target << " was forgiven by Zafod Beeblebrox." << std::endl;
}