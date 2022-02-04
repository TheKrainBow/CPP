/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 16:03:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:09:02 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap bobTheAttackMan("Bob");
	ClapTrap paulTheVictim("Paul");
	
	paulTheVictim.takeDamage(12);
	paulTheVictim.beRepaired(15);
	paulTheVictim.attack("Henry");
	for (int i = 0; i < 10; i++)
		bobTheAttackMan.attack("Paul");
	bobTheAttackMan.attack("Paul");
	bobTheAttackMan.beRepaired(40);
}