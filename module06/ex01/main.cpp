/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2022/02/07 02:28:41 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data temp1(5, 2);
	Data temp2(45, 5);
	Data temp3(42, 42);

	temp1.print();
	deserialize(serialize(&temp1))->print();
	temp2.print();
	deserialize(serialize(&temp2))->print();
	temp3.print();
	deserialize(serialize(&temp3))->print();
	std::cout << &temp1 << std::endl;
	std::cout << deserialize(serialize(&temp1)) << std::endl;
	std::cout << &temp2 << std::endl;
	std::cout << deserialize(serialize(&temp2)) << std::endl;
	std::cout << &temp3 << std::endl;
	std::cout << deserialize(serialize(&temp3)) << std::endl;
	return (0);
}