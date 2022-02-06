/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:25:05 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 17:03:09 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	WrongGrade(void)
{
	std::cout << "⏬   Too Low Grade   ⏬" << std::endl;
	try
	{
		Bureaucrat someRandomGuys("Insignificant name", 1000);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	};
	std::cout << std::endl << "⏫   Too High Grade   ⏫" << std::endl;
	try
	{
		Bureaucrat someRandomGuys("Insignificant name", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat aRealHero("Bobby", 1);
	std::cout << std::endl << aRealHero << std::endl;
	try
	{
		aRealHero.upGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		while (1)
		{
			aRealHero.downGrade();
			std::cout << aRealHero << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	CopyTest()
{
	Bureaucrat BobbyThePerfectEmployee("Bobby", 1);
	Bureaucrat JustAnotherInstanceOfBobbyTheBest(BobbyThePerfectEmployee);

	std::cout << BobbyThePerfectEmployee << " has an adress of " << &BobbyThePerfectEmployee << std::endl;
	std::cout << JustAnotherInstanceOfBobbyTheBest << " has an adress of " << &JustAnotherInstanceOfBobbyTheBest << std::endl;
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
	/*try
	{
		Bureaucrat tom("Tom", 3);
		Bureaucrat henry("Henry", 5);
		std::cout << tom;
		std::cout << henry;
		henry.upGrade();
		std::cout << henry;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	};*/
}