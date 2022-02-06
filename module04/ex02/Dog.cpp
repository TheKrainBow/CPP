/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 00:33:08 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"  

Dog::Dog() : Animal()
{
	std::cout << "🐶 Default Constructor" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "🐶 Destructor" << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "🐶 Copy Constructor" << std::endl;
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
	std::cout << "🐶 Overload of =" << std::endl;
	_type = copy._type;
	_brain = new Brain(*copy._brain);
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "🐶 Wouf 🐶" << std::endl;
}

Brain *Dog::getBrain(void)
{
	return (_brain);
}