/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:03:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:32:41 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap Clappy("Clappy");
	ScavTrap Scavvy("Scavvy");
	FragTrap Fraggy("Fraggy");
	
	Clappy.attack("Fraggy");
	Fraggy.takeDamage(12);
	Fraggy.beRepaired(15);
	Scavvy.guardGate();
	Scavvy.takeDamage(2);
	Fraggy.highFivesGuys();
}