/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 17:48:32 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 18:49:22 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <ostream>

int main(void)
{
	Fixed 		a(42.0f);
	Fixed 		a_a(a + Fixed(45));
	Fixed		max_a(Fixed::max(a, a_a));
	Fixed const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << "___________________" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
	std::cout << "___________________" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a_a = " << a_a << std::endl;
	std::cout << "max(a, b) = " << max_a << std::endl;
	std::cout << "___________________" << std::endl;
	return (0);
}