/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:03:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:48:09 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	first_test()
{
	DiamondTrap Diammy("Diammy");

	Diammy.whoAmI();
	Diammy.displayInfo();
	Diammy.attack("something");
	Diammy.takeDamage(60);
	Diammy.beRepaired(2);
	Diammy.displayInfo();
}

void	second_test()
{
	DiamondTrap Diamempty;

	Diamempty.whoAmI();
	Diamempty.displayInfo();
	Diamempty.attack("something");
	Diamempty.takeDamage(60);
	Diamempty.beRepaired(2);
	Diamempty.displayInfo();
}

int main(void)
{
	first_test();
	std::cout << std::endl;
	second_test();
}