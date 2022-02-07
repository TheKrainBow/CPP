/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:44:02 by magostin          #+#    #+#             */
/*   Updated: 2022/02/07 02:22:02 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _number(42), _id('*') {}

Data::Data(char id, int number) : _number(number), _id(id)
{
}

Data::~Data()
{
}

Data::Data(const Data &toCopy)
{
	*this = toCopy;
}

Data &Data::operator=(const Data &toCopy)
{
	_number = toCopy._number;
	_id = toCopy._id;
	return (*this);
}

void Data::print(void)
{
	std::cout << "Number: " << _number << " id: " << (int)(_id) << std::endl;
}