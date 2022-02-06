#include "RobotomyRequestForm.hpp"  
	
RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("Default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &toCopy) : Form(toCopy)
{
	*this = toCopy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &toCopy)
{
	(void)toCopy;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}
	
RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	srand(time(NULL));
	std::cout << "* Drill sounds *" << std::endl;
	if (rand() % 2)
		std::cout << _target << " was robotized" << std::endl;
	else
		std::cout << _target << " was not robotized" << std::endl;
}