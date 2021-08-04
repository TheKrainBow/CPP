/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2021/08/04 09:26:22 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"  
	
Dog::~Dog()
{
	std::cout << "Dog's Destructor" << std::endl;
	delete _brain;
}

Dog::Dog()
{
	std::cout << "Dog's default Constructor" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog's copy Constructor" << std::endl;
	this->_brain = copy._brain;
	this->_type = copy._type;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "Dog's operator=" << std::endl;
	_brain = copy._brain;
	_type = copy._type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Bark" << std::endl;
}