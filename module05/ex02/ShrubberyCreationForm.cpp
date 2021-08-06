#include "ShrubberyCreationForm.hpp"  
	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}
	
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	output;

	Form::execute(executor);
	output.open(_target + "_shrubbery");
	output << "       _-_" << std::endl;
	output << "    /~~   ~~\\" << std::endl;
	output << " /~~         ~~\\" << std::endl;
	output << "{               }" << std::endl;
	output << " \\  _-     -_  /" << std::endl;
	output << "   ~  \\\\ //  ~" << std::endl;
	output << "_- -   | | _- _" << std::endl;
	output << "  _ -  | |   -_" << std::endl;
	output << "      // \\\\" << std::endl;
	std::cout << executor.getName() << " is trying to create an ascii tree in " << _target <<"_shrubbery file" << std::endl;
}