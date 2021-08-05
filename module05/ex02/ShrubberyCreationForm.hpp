#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : virtual public Form
{
	private:
		const std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		virtual ~ShrubberyCreationForm();

};
#endif