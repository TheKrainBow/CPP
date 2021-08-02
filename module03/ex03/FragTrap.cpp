/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:41:21 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 18:15:48 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << "'s FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << "'s FragTrap destructor called" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name
	<< " attacks " << target
	<< ", causing " << this->_attackDamage
	<< " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " is asking for a High Five, but no ones care.." << std::endl;
}