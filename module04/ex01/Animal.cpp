/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:26 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:53:11 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"  
	
Animal::Animal()
{
	std::cout << "🐾 Default Constructor" << std::endl;
	_type = "Animal";
}
	
Animal::~Animal()
{
	std::cout << "🐾 Default Destructor" << std::endl;
}

Animal::Animal(const Animal &toCopy)
{
	*this = toCopy;
}

Animal &Animal::operator=(const Animal &toCopy)
{
	_type = toCopy.getType();
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "🐾 What the hell are you doing here? 🐾" << std::endl;
}

const std::string Animal::getType(void) const
{
	return (_type);
}

void	Animal::announce(void) const
{
	std::cout << "I'm a " << _type << "!" << std::endl;
}