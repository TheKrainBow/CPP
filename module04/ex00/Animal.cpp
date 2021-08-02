/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:26 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 18:56:34 by magostin         ###   ########.fr       */
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

void Animal::makeSound(void)
{
	std::cout << "Wtf are you doiing here?" << std::endl;
}

std::string Animal::getType(void)
{
	return (_type);
}