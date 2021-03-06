#include "ShrubberyCreationForm.hpp"  

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("Default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &toCopy) : Form(toCopy)
{
	*this = toCopy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &toCopy)
{
	(void)toCopy;
	return *this;
}

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
	output.open((_target + "_shrubbery").c_str());
	output << "       _-_" << std::endl;
	output << "    /~~   ~~\\" << std::endl;
	output << " /~~         ~~\\" << std::endl;
	output << "{               }" << std::endl;
	output << " \\  _-     -_  /" << std::endl;
	output << "   ~  \\\\ //  ~" << std::endl;
	output << "_- -   | | _- _" << std::endl;
	output << "  _ -  | |   -_" << std::endl;
	output << "      // \\\\" << std::endl;
	std::cout << executor.getName() << " is drawing an ascii tree in " << _target << "_shrubbery file, but he isn't an artist" << std::endl;
}