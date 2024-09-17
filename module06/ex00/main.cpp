/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2024/09/17 14:33:12 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

# define WHITE "\033[0m"
# define BWHITE "\033[1;37m"
# define BGRAY "\033[1;29m"
# define BBLACK "\033[1;30m"
# define BRED "\033[1;31m"
# define RED "\033[0;31m"
# define BGREEN "\033[1;32m"
# define BYELLOW "\033[1;33m"
# define BBLUE "\033[1;34m"
# define BPURPLE "\033[1;35m"
# define BCYAN "\033[1;36m"

int main(int ac, char **av)
{
	if (ac == 2 && av[1] && av[1][0])
	{
		try
		{
			ScalarConverter::Convert(std::string(av[1]));
		}
		catch (ScalarConverter::InvalidConversionException &e)
		{
			std::cout << e.what() << std::endl;
		}
		return (0);
	}
	std::cerr << BRED << "Invalid usage: " << RED << "./convert <string_to_convert>" << std::endl;
}
