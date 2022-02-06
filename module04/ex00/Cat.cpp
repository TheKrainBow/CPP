/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 00:33:08 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"  
	
Cat::Cat() : Animal()
{
	std::cout << "🐱 Default Constructor" << std::endl;
	_type = "Cat";
}
	
Cat::~Cat()
{
	std::cout << "🐱 Destructor" << std::endl;
}

Cat::Cat(Cat &toCopy) : Animal(toCopy)
{
	std::cout << "🐱 Copy Constructor" << std::endl;
	*this = toCopy;
}

Cat &Cat::operator=(const Cat &toCopy)
{
	std::cout << "🐱 Overload of =" << std::endl;
	_type = toCopy.getType();
	return (*this);
}
void Cat::makeSound(void) const
{
	std::cout << "🐱 Meow 🐱" << std::endl;
}