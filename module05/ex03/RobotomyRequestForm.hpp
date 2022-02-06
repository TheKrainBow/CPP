#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : virtual public Form
{
	private:
		const std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &toCopy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &toCopy);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm(std::string target);
		virtual void	execute(Bureaucrat const &executor) const;

};
#endif