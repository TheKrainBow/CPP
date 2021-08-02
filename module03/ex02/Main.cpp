/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:03:44 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 15:34:56 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap bob("Bob");
	ScavTrap henry("Henry");
	FragTrap paul("paul");
	
	bob.attack("Paul");
	paul.takeDamage(12);
	paul.beRepaired(15);
	henry.guardGate();
	henry.takeDamage(2);
	paul.highFivesGuys();
}