/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:48:32 by krain             #+#    #+#             */
/*   Updated: 2021/07/29 18:16:09 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

int main(void)
{
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	
	std::cout << "a is " << a.toInt() << " as interger" << std::endl;
	std::cout << "b is " << b.toInt() << " as interger" << std::endl;
	std::cout << "c is " << c.toInt() << " as interger" << std::endl;
	std::cout << "d is " << d.toInt() << " as interger" << std::endl;
	return (0);
}