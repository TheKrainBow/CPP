/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 01:14:08 by magostin          #+#    #+#             */
/*   Updated: 2022/02/03 13:16:15 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB() {}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with his " << _weapon->getType() << "." << std::endl;
}

void		HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}