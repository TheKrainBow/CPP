/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelwaul <mdelwaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:16:18 by mdelwaul          #+#    #+#             */
/*   Updated: 2021/07/12 03:18:16 by mdelwaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->used = false;
}

bool	Contact::isUsed(void)
{
	return (this->used);
}

std::string		ft_truncate(std::string line)
{
	if (line.length() > 10)
	{
		line.resize(9);
		line.resize(10, '.');
	}
	return (line);
}

void	Contact::shortPrint(int i)
{
	std::string		temp;
	std::cout << "┃";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << i << "┃";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << ft_truncate(this->firstname) << "┃";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << ft_truncate(this->lastname) << "┃";
	std::cout << std::setfill (' ') << std::setw (10);
	std::cout << ft_truncate(this->nickname) << "┃\n";
}

void	Contact::fullPrint(void)
{
	std::cout << "First Name: " << this->firstname << std::endl;
	std::cout << "Last Name: " << this->lastname << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}

void	Contact::addNew(void)
{
	std::string	line;

	std::cout << "-> New Contact:\n";
	std::cout << "	First Name: ";
	std::getline (std::cin, line);
	this->firstname = line;
	
	std::cout << "	Last Name: ";
	std::getline (std::cin, line);
	this->lastname = line;
	
	std::cout << "	Nickname: ";
	std::getline (std::cin, line);
	this->nickname = line;
	
	std::cout << "	Phone Number: ";
	std::getline (std::cin, line);
	this->phone_number = line;
	
	std::cout << "	Darkest Secret: ";
	std::getline (std::cin, line);
	this->darkest_secret = line;
	std::cout << this->nickname << " joined your Phonebook!\n";
	this->used = true;
}