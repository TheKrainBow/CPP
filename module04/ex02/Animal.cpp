/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:26 by magostin          #+#    #+#             */
/*   Updated: 2021/08/04 09:49:35 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"  
	
Animal::Animal()
{
	_type = "";
}
	
Animal::~Animal()
{
}

const std::string Animal::getType(void) const
{
	return (_type);
}
