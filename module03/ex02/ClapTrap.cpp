/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:48:39 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:38:37 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() :	_name(NULL), _hitPoints(10),
						_energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :	_name(name), _hitPoints(10),
										_energyPoints(10), _attackDamage(0)
{
	std::cout << _name << "'s ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << "'s ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &toCopy)
{
	std::cout << _name << "'s Copy constructor called" << std::endl;
	*this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy)
{
	_name = toCopy.getName();
	_hitPoints = toCopy.getHitPoints();
	_energyPoints = toCopy.getEnergyPoints();
	_attackDamage = toCopy.getAttackDamage();
	return (*this);
}

bool	ClapTrap::canAction(void)
{
	if (_energyPoints <= 0)
	{
		std::cout << _name << " has no more EP!" << std::endl;
		return (false);
	}
	if (_hitPoints <= 0)
	{
		std::cout << _name << " has no more HP!" << std::endl;
		return (false);
	}
	return (true);
}

void ClapTrap::attack(std::string const &target)
{
	if (!this->canAction())
		return ;
	std::cout << "ClapTrap " << _name
	<< " attacks " << target
	<< ", causing " << _attackDamage
	<< " points of damage!" << std::endl;
	_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	
	std::cout << "ClapTrap " << _name
	<< " takes " << amount
	<< " points of damage!" << std::endl;
	if ((int)_hitPoints - (int)amount <= 0)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->canAction() == false)
		return ;
	std::cout << "ClapTrap " << _name
	<< " repair " << amount
	<< " Energy points!" << std::endl;
	_hitPoints += amount;
	_energyPoints--;
}

std::string ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int ClapTrap::getHitPoints(void) const
{
	return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const
{
	return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void) const
{
	return (_attackDamage);
}
