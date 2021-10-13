#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:
		const std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		virtual ~PresidentialPardonForm();
		virtual void	execute(Bureaucrat const &executor) const;

};
#endif