/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 00:25:13 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"  
	
WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "rotcurtsnoC tluafeD 🐱" << std::endl;
	_type = "WrongCat";
}
	
WrongCat::~WrongCat()
{
	std::cout << "rotcurtseD tluafeD 🐱" << std::endl;
}

WrongCat::WrongCat(WrongCat &toCopy) : WrongAnimal(toCopy)
{
	*this = toCopy;
}

WrongCat &WrongCat::operator=(WrongCat &toCopy)
{
	_type = toCopy.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << "🐱 woeM 🐱" << std::endl;
}