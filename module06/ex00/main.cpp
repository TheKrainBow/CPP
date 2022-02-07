/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2022/02/07 16:25:00 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main(int ac, char **av)
{
	if (ac > 1 && av[1] && av[1][0])
	{
		try
		{
			Convertor convert(av[1]);
			std::cout << convert << std::endl;
		}
		catch (Convertor::InvalidConversionException &e)
		{
			std::cout << e.what() << std::endl;
		}
		return (0);
	}
	std::cout << "Missing Args" << std::endl;
}