/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:25:05 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 19:31:26 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void customTest()
{
	Intern someRandomIntern;
	Bureaucrat 	BobbyThePerfectEmployee("Bobby", 1);
	Form	*rrf[4];
	rrf[0] = someRandomIntern.makeForm("shrubbery creation", "Bender");
	rrf[1] = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf[2] = someRandomIntern.makeForm("presidential pardon", "Bender");
	rrf[3] = someRandomIntern.makeForm("some random request", "Bender");
	for (int i = 0; i < 4; i++)
	{
		if (rrf[i])
		{
			BobbyThePerfectEmployee.signForm(*(rrf[i]));
			BobbyThePerfectEmployee.executeForm(*(rrf[i]));
			delete rrf[i];
		}
	}
}

void SubjectTest()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;
}

int main(void)
{

	std::cout << "\033[1;37m🌀   Custom Tests   🌀" << std::endl;
	customTest();
	std::cout << std::endl << "🌀   Subject Test   🌀" << std::endl;
	SubjectTest();
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
}