/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 09:22:21 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:57:40 by magostin         ###   ########.fr       */
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
	temp2.print();
	temp3.print();
	uintptr_t tab[3];
	tab[0] = serialize(&temp1);
	tab[1] = serialize(&temp2);
	tab[2] = serialize(&temp3);
	for (int i = 0; i < 3; i++)
		deserialize(tab[i])->print();
	return (0);
}