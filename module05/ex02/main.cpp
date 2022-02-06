/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:25:05 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 18:25:23 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void	WrongGrade(void)
{
	Bureaucrat 	BobbyThePerfectEmployee("Bobby", 1);
	Bureaucrat	BibboTheRock("Bibbo", 150);
	ShrubberyCreationForm plantATreeForAGreenerPlanet("Earth");

	std::cout << std::endl << "❌   Not Signed Form   ❌" << std::endl;
	BibboTheRock.executeForm(plantATreeForAGreenerPlanet);
	std::cout << std::endl;
	BobbyThePerfectEmployee.signForm(plantATreeForAGreenerPlanet);

	std::cout  << std::endl << "⏬   Too Low Grade   ⏬" << std::endl;
	BibboTheRock.executeForm(plantATreeForAGreenerPlanet);
}

void	CopyTest()
{
	RobotomyRequestForm		ARobotomyRequestForThisPoorBibbo("Bibbo");
	RobotomyRequestForm		ACopyOfItBecauseHeReallyNeedIt(ARobotomyRequestForThisPoorBibbo);

	std::cout << ARobotomyRequestForThisPoorBibbo << " has an adress of " << &ARobotomyRequestForThisPoorBibbo << std::endl;
	std::cout << ACopyOfItBecauseHeReallyNeedIt << " has an adress of " << &ACopyOfItBecauseHeReallyNeedIt << std::endl;
}

void	testingAllForm()
{
	Bureaucrat 	BobbyThePerfectEmployee("Bobby", 1);
	ShrubberyCreationForm plantATreeForAGreenerPlanet("Earth");
	RobotomyRequestForm FixThisStupidHuman("Bibbo");
	PresidentialPardonForm PardonHimForHisLackOfBrainCells("Bibbo");

	BobbyThePerfectEmployee.signForm(plantATreeForAGreenerPlanet);
	BobbyThePerfectEmployee.signForm(FixThisStupidHuman);
	BobbyThePerfectEmployee.signForm(PardonHimForHisLackOfBrainCells);
	BobbyThePerfectEmployee.executeForm(plantATreeForAGreenerPlanet);
	BobbyThePerfectEmployee.executeForm(FixThisStupidHuman);
	BobbyThePerfectEmployee.executeForm(PardonHimForHisLackOfBrainCells);
}

void	SubjectTest()
{
	std::cout << "None" << std::endl;
}

int main(void)
{	
	std::cout << "\033[1;37m🎖️   Wrong Grade Tests   🎖️" << std::endl;
	WrongGrade();
	std::cout << std::endl << "🌀   Copy Tests   🌀" << std::endl;
	CopyTest();
	std::cout << std::endl << "🌀   Testing Forms   🌀" << std::endl;
	testingAllForm();
	std::cout << std::endl << "🌀   Subject Test   🌀" << std::endl;
	SubjectTest();
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
}