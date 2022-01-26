/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:10:57 by magostin          #+#    #+#             */
/*   Updated: 2022/01/26 15:21:24 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "sed.hpp"

int			main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Check your arguments." << std::endl;
		return (1);
	}
	Sed		sed(av[1], av[2], av[3]);
	if (!sed.isOpen())
	{
		std::cout << "File can't be open.\n";
		return (1);
	}
	sed.replace();
}