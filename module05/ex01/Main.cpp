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

int main(void)
{
	try
	{
		Bureaucrat tom("Tom", 3);
		Bureaucrat henry("Henry", 5);
		Form		eat("Can Paul eat meat?", 4, 2);
		Form		sleep("Can Paul sleep tonight?", 3, 2);
		std::cout << tom;
		std::cout << henry;
		std::cout << eat;
		henry.signForm(eat);
		henry.upGrade();
		henry.signForm(eat);
		tom.downGrade();
		try
		{
			sleep.beSigned(tom);
		}
		catch(const Form::GradeTooLowException& e)
		{
			std::cout << "Exception: " << e.what() << '\n';
		}
		tom.upGrade();
		sleep.beSigned(tom);
		try
		{
			sleep.beSigned(tom);
		}
		catch(const Form::GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
		tom.signForm(sleep);
		std::cout << henry;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	};
}