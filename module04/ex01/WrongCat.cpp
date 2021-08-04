/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:44 by magostin          #+#    #+#             */
/*   Updated: 2021/08/03 18:10:05 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"  
	
WrongCat::WrongCat()
{
	_type = "WrongCat";
}
	
WrongCat::~WrongCat()
{
	
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongMeow" << std::endl;
}