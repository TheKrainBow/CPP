/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:38:11 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"  
	
WrongCat::WrongCat()
{
	std::cout << "rotcurtsnoC tluafeD 🐱" << std::endl;
	_type = "WrongCat";
}
	
WrongCat::~WrongCat()
{
	std::cout << "rotcurtseD tluafeD 🐱" << std::endl;
}

WrongCat::WrongCat(WrongCat &toCopy)
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