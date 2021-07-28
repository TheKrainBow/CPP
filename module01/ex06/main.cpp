/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:10:57 by krain             #+#    #+#             */
/*   Updated: 2021/07/19 20:47:17 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "Karen.hpp"

int			main(int ac, char **av)
{
	Karen karouninette;

	if (ac != 2)
	{
		std::cout << "[ Probablement plainte de problèmes insignifiants ]" << std::endl;
		return (1);
	}
	karouninette.complain(av[1]);
	return (0);
}