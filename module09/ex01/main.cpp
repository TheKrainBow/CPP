/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2024/09/16 10:36:55 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	RPN calculator;

	try
	{
		if (ac != 2)
			throw std::exception();
		std::cout << calculator.handleOperation(av[1]) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << std::endl;
	}
	
}