/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:54:10 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"  
	
Cat::Cat()
{
	std::cout << "🐱 Default Constructor" << std::endl;
	_type = "Cat";
}
	
Cat::~Cat()
{
	std::cout << "🐱 Default Destructor" << std::endl;
}

Cat::Cat(Cat &toCopy)
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