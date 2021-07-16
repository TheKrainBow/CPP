/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:27:36 by krain             #+#    #+#             */
/*   Updated: 2021/07/16 03:43:27 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string fileName, std::string s1, std::string s2)
{
	_file.open(fileName, std::ios::in);
	_s1 = s1;
	_s2 = s2;
}

Sed::~Sed() {}

bool Sed::isOpen(void)
{
	return (this->_file.is_open());
}