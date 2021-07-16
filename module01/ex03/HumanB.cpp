/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 01:14:08 by krain             #+#    #+#             */
/*   Updated: 2021/07/16 03:06:46 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << "." << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}