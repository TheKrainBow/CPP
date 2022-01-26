/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:27:36 by magostin          #+#    #+#             */
/*   Updated: 2022/01/26 15:21:24 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

Sed::Sed(std::string fileName, std::string s1, std::string s2)
{
	_file.open(fileName.c_str(), std::ios::in);
	_s1 = s1;
	_s2 = s2;
	_fileName = fileName;
}

Sed::~Sed() {}

bool Sed::isOpen(void)
{
	return (this->_file.is_open());
}

void Sed::replace(void)
{
	char		line;
	std::string		text;
	std::ofstream	output;
	size_t			pos;

	while (!_file.eof())
	{
		_file >> std::noskipws >> line;
		text += line;
		if (_file.peek() == '\n')
		{
			pos = text.find(_s1, 0);
			if ((int)pos != -1)
				text.replace(pos, _s1.length(), _s2);
		}
	}
	_file.close();
	output.open((_fileName + ".replace").c_str());
	output << text;
	output.close();
}