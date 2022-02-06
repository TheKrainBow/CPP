/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:26 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 00:24:07 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"  
	
WrongAnimal::WrongAnimal()
{
	std::cout << "rotcurtsnoC tluafeD 🐾" << std::endl;
	_type = "WrongAnimal";
}
	
WrongAnimal::~WrongAnimal()
{
	std::cout << "rotcurtseD tluafeD 🐾" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &toCopy)
{
	std::cout << "rotcurtsnoC ypoC 🐾" << std::endl;
	*this = toCopy;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &toCopy)
{
	std::cout << "= fo daolrevO 🐾" << std::endl;
	_type = toCopy.getType();
	return (*this);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "🐾 ?ereh gniod uoy era lleh eht tahW 🐾" << std::endl;
}

const std::string WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::announce(void) const
{
	std::cout << "I'm a " << _type << "!" << std::endl;
}
