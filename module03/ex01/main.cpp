/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:03:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:35:10 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Clappy("Clappy");
	ScavTrap Scavvy("Scavvy");
	
	Clappy.attack("Scavvy");
	Clappy.takeDamage(12);
	Clappy.beRepaired(15);
	Scavvy.guardGate();
	Scavvy.attack("Himself");
	Scavvy.takeDamage(2);
}