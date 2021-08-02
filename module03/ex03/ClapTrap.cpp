/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:48:39 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 18:10:51 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << "'s ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->_name << "'s ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name
	<< " attacks " << target
	<< ", causing " << this->_attackDamage
	<< " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
	std::cout << "ClapTrap " << this->_name
	<< " takes " << amount
	<< " points of damage!" << std::endl;
	if (amount >= this->_energyPoints)
	{
		amount -= this->_energyPoints;
		this->_energyPoints = 0;
	}
	else
	{
		this->_energyPoints -= amount;
		return ;
	}
	if (amount > this->_hitpoints && this->_energyPoints > 0)
	{
		amount -= this->_hitpoints;
		this->_hitpoints = 0;
	}
	else
	{
		this->_hitpoints -= amount;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	
	std::cout << "ClapTrap " << this->_name
	<< " repair " << amount
	<< " Energy points!" << std::endl;
	this->_energyPoints += amount;
}
