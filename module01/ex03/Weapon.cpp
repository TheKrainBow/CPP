/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 01:14:56 by krain             #+#    #+#             */
/*   Updated: 2021/07/16 02:47:02 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::~Weapon() {}

const std::string &Weapon::getType() 
{
	std::string	&type_ref = this->type;
	
	return (type_ref);
}

void			Weapon::setType(std::string type)
{
	this->type = type;
}