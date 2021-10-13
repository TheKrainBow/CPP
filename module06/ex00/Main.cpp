/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2021/09/08 10:37:28 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convertor.hpp"

int main(int ac, char **av)
{
	if (ac > 1 && av[1] && av[1][0])
	{
		Convertor convert(av[1]);
		convert.print_char();
		convert.print_int();
		convert.print_float();
		convert.print_double();
	}
	else
		std::cout << "Missing Args" << std::endl;
}