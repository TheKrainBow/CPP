#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : virtual public Form
{
	private:
		const std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &toCopy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &toCopy);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm(std::string target);
		virtual void	execute(Bureaucrat const &executor) const;

};
#endif