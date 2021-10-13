#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class	Intern
{
	private:
		Form*	_makeShruberry(std::string const &target) const;
		Form*	_makeRobotomy(std::string const &target) const;
		Form*	_makePardon(std::string const &target) const;

	public:
		Intern(void);
		Intern(Intern const &rhs);
		Intern& operator=(Intern const &rhs);
		~Intern(void);

		Form*	makeForm(std::string const &formName, std::string const &target) const;
};

#endif