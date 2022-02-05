/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 18:56:56 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat()
{
	std::cout << "🐱 Destructor" << std::endl;
	delete _brain;
}

Cat::Cat()
{
	std::cout << "🐱 Default Constructor" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "🐱 Copy Constructor" << std::endl;
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "🐱 Overload of =" << std::endl;
	_brain = new Brain(*copy._brain);
	_type = copy._type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "🐱 Meow 🐱" << std::endl;
}

Brain *Cat::getBrain(void)
{
	return (_brain);
}
