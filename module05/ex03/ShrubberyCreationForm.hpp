#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <iomanip>
#include <iostream>
#include <fstream>

class ShrubberyCreationForm : virtual public Form
{
	private:
		const std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();
		virtual void	execute(Bureaucrat const &executor) const;

};
#endif