/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2021/08/04 09:30:41 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "Cat's Destructor" << std::endl;
	delete _brain;
}

Cat::Cat()
{
	std::cout << "Cat's default Constructor" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat's copy Constructor" << std::endl;
	this->_brain = copy._brain;
	this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat's operator=" << std::endl;
	_brain = copy._brain;
	_type = copy._type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}