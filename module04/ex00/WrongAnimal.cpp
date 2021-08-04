/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:26 by magostin          #+#    #+#             */
/*   Updated: 2021/08/03 18:11:22 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal()
{
	_type = "";
}
	
WrongAnimal::~WrongAnimal()
{
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "How tf did you called me?" << std::endl;
}

const std::string WrongAnimal::getType(void) const
{
	return (_type);
}
