#include "RobotomyRequestForm.hpp"  
	
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
	std::cout << "* Bruits de perceuses *" << std::endl;
	if (rand() % 2)
		std::cout << _target << " a été robotomizée" << std::endl;
	else
		std::cout << _target << " n'a pas été robotomizé" << std::endl;
}