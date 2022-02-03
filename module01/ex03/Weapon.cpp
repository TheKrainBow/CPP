/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 01:14:56 by magostin          #+#    #+#             */
/*   Updated: 2022/02/03 13:15:57 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType() 
{
	std::string	&type_ref = _type;
	
	return (type_ref);
}

void			Weapon::setType(std::string type)
{
	_type = type;
}