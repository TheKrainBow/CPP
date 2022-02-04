/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:41:21 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:44:42 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
	ScavTrap::initHitPoints();
	ScavTrap::initEnergyPoints();
	ScavTrap::initAttackDamage();
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << "'s ScavTrap constructor called" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << "'s ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &toCopy)
{
	std::cout << _name << "'s Copy constructor called" << std::endl;
	*this = toCopy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy)
{
	_name = toCopy.getName();
	_hitPoints = toCopy.getHitPoints();
	_energyPoints = toCopy.getEnergyPoints();
	_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << _name << " entered Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (!this->canAction())
		return ;
	std::cout << "ScavTrap " << _name
	<< " attacks " << target
	<< ", causing " << _attackDamage
	<< " points of damage!" << std::endl;
	_energyPoints--;
}

void ScavTrap::initHitPoints(void)
{
	_hitPoints = 100;
}

void ScavTrap::initEnergyPoints(void)
{
	_energyPoints = 50;
}

void ScavTrap::initAttackDamage(void)
{
	_attackDamage = 20;
}