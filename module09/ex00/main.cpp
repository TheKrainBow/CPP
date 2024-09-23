/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2024/09/23 11:20:33 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}

    try
    {
		BitcoinExchange trader;
    	std::ifstream file(av[1]);
		trader.parseFile(file);
    }
	catch (std::exception &e)
    {
        std::cerr << BRED << "Error" << RED << ": Couldn't open " << DB_PATH << "." << WHITE << std::endl;
    }
}