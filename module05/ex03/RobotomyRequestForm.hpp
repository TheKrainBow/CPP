#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : virtual public Form
{
	private:
		const std::string _target;
	public:
		RobotomyRequestForm(std::string target);
		virtual ~RobotomyRequestForm();
		virtual void	execute(Bureaucrat const &executor) const;

};
#endif