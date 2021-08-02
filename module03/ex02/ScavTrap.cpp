/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:41:21 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 16:08:10 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << "'s ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << "'s ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(void)
{
	std::cout << _name << " entered Gate Keeper mode." << std::endl;
}