/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:44:02 by krain             #+#    #+#             */
/*   Updated: 2021/10/19 11:53:20 by krain            ###   ########.fr       */
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