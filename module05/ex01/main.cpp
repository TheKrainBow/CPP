/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:25:05 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 18:25:28 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	WrongGrade(void)
{
	Bureaucrat 	BobbyThePerfectEmployee("Bobby", 1);
	Bureaucrat	BibboTheRock("Bibbo", 150);
	Form		TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo("[Take a nap]", 1, 7);
	Form		TheReallyEasyTaskThatOnlyStupidEmployeeCanDo("[Wakeup Bobby so he doesn't miss his favorite show]", 1, 150);
	std::cout << "⏬   Too Low Grade   ⏬" << std::endl;

	BibboTheRock.signForm(TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo);

	std::cout << std::endl << "✅   Grade High Enought   ✅" << std::endl;
	BobbyThePerfectEmployee.signForm(TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo);

	std::cout << std::endl << "❌   Already Signed Form   ❌" << std::endl;
	BobbyThePerfectEmployee.signForm(TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo);
}

void	CopyTest()
{
	Form		TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo("[Take a nap]", 1, 7);
	Form		ACopyOfAReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo(TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo);

	std::cout << TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo << " has an adress of " << &TheReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo << std::endl;
	std::cout << ACopyOfAReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo << " has an adress of " << &ACopyOfAReallyHardTaskThatOnlyBigBrainPerfectEmployeeCanDo << std::endl;
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
	std::cout << std::endl << "🌀   Subject Test   🌀" << std::endl;
	SubjectTest();
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
}