/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:48:32 by krain             #+#    #+#             */
/*   Updated: 2021/07/29 17:50:31 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout<< a.getRawBits() << std::endl;
	std::cout<< b.getRawBits() << std::endl;
	std::cout<< c.getRawBits() << std::endl;
	return (0);
}