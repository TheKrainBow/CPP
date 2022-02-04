/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:47:20 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:47:49 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), _name("default")
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
	FragTrap::initHitPoints();
	ScavTrap::initEnergyPoints();
	FragTrap::initAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << name << "'s DiamondTrap constructor called" << std::endl;
	FragTrap::initHitPoints();
	ScavTrap::initEnergyPoints();
	FragTrap::initAttackDamage();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << "'s DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &toCopy) : ClapTrap(toCopy.getName() + "_clap_name"), FragTrap(NULL), ScavTrap(NULL)
{
	std::cout << _name << "'s Copy constructor called" << std::endl;
	*this = toCopy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy)
{
	_name = toCopy.getName();
	_hitPoints = toCopy.getHitPoints();
	_energyPoints = toCopy.getEnergyPoints();
	_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << _name << ": My name is " << _name << "!" << std::endl;
	std::cout << _name << ": My ClapTrap name is " << ClapTrap::_name  << "!" << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::displayInfo(void)
{
	std::cout << _name << ": HP=" << _hitPoints << " EP=" << _energyPoints << " AD=" << _attackDamage << std::endl;
}