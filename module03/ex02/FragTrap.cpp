/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:41:21 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:49:27 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
	FragTrap::initHitPoints();
	FragTrap::initEnergyPoints();
	FragTrap::initAttackDamage();
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << "'s FragTrap constructor called" << std::endl;
	FragTrap::initHitPoints();
	FragTrap::initEnergyPoints();
	FragTrap::initAttackDamage();
}

FragTrap::~FragTrap()
{
	std::cout << _name << "'s FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &toCopy)
{
	std::cout << _name << "'s Copy constructor called" << std::endl;
	*this = toCopy;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy)
{
	_name = toCopy.getName();
	_hitPoints = toCopy.getHitPoints();
	_energyPoints = toCopy.getEnergyPoints();
	_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

void FragTrap::attack(std::string const &target)
{
	if (!this->canAction())
		return ;
	std::cout << "FragTrap " << _name
	<< " attacks " << target
	<< ", causing " << _attackDamage
	<< " points of damage!" << std::endl;
	_energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << _name << " is asking for a High Five, but no ones care.." << std::endl;
}

void FragTrap::initHitPoints(void)
{
	_hitPoints = 100;
}

void FragTrap::initEnergyPoints(void)
{
	_energyPoints = 100;
}

void FragTrap::initAttackDamage(void)
{
	_attackDamage = 30;
}