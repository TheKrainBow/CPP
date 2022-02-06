
#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &rhs)
{
	(void)rhs;
}

Intern& Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Intern::~Intern(void)
{
}

Form*	Intern::_makeShruberry(std::string const &target) const
{
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::_makeRobotomy(std::string const &target) const
{
	return (new RobotomyRequestForm(target));
}

Form*	Intern::_makePardon(std::string const &target) const
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string const &formName, std::string const &target) const
{
	typedef Form *(Intern::*formType) (std::string const &target) const;
	std::string const formNames[] = 
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	formType const formTypes[] = 
	{
		&Intern::_makeShruberry,
		&Intern::_makeRobotomy,
		&Intern::_makePardon
	};

	for (int i = 0; i < 3 ; i++)
	{
		if (formNames[i] == formName)
		{
			Form*		form;
			form = (this->*formTypes[i])(target);
			std::cout << "Intern creates <" << form->getName() << ">, " << formNames[i] << std::endl;
			return (form);
		}
	}
	std::cout << "Form creation failed because <" << formName << "> is an unknown Form type" << std::endl;
	return (NULL);
}