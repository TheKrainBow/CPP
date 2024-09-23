/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2024/09/23 11:43:29 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN calculator;

	try
	{
		if (ac == 1)
			throw RPN::RPNException("Not enough arguments");
		if (ac >= 3)
			throw RPN::RPNException("Too many arguments");
		std::cout << calculator.handleOperation(av[1]) << std::endl;
	}
	catch(RPN::RPNException &e)
	{
		std::cerr << BRED << "Error" << RED << ": " << e.what() << std::endl;
	}
	
}