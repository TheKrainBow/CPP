/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:25:05 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:57:40 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	Bureaucrat tom("Tom", 1);
	ShrubberyCreationForm form1("Maison");
	RobotomyRequestForm form2("Henry");
	RobotomyRequestForm form3("Henry");
	PresidentialPardonForm form4("Bob");

	try
	{
		form1.execute(tom);
		form2.execute(tom);
		form3.execute(tom);
		form4.execute(tom);
	}
	catch(const Form::FormNotSignedException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	tom.signForm(form1);
	tom.signForm(form2);
	tom.signForm(form3);
	tom.signForm(form4);
	tom.executeForm(form1);
	tom.executeForm(form2);
	tom.executeForm(form3);
	tom.executeForm(form4);
}