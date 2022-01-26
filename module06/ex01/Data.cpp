/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:44:02 by magostin          #+#    #+#             */
/*   Updated: 2022/01/26 15:21:24 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data(char id, int number) : _number(number), _id(id)
{
}

Data::~Data()
{
}

void Data::print(void)
{
	std::cout << "Number: " << _number << " id: " << (int)(_id) << std::endl;
}