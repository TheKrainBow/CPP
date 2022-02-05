/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:54:24 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"  
	
Dog::Dog()
{
	std::cout << "🐶 Default Constructor" << std::endl;
	_type = "Dog";
}
	
Dog::~Dog()
{
	std::cout << "🐶 Default Destructor" << std::endl;
}

Dog::Dog(const Dog &toCopy)
{
	std::cout << "🐶 Copy Constructor" << std::endl;
	*this = toCopy;
}

Dog &Dog::operator=(const Dog &toCopy)
{
	std::cout << "🐶 Overload of =" << std::endl;
	_type = toCopy.getType();
	return (*this);
}
void Dog::makeSound(void) const
{
	std::cout << "🐶 Wouf 🐶" << std::endl;
}