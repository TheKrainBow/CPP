/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:19:57 by magostin          #+#    #+#             */
/*   Updated: 2022/02/01 23:07:13 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::addContact()
{
	int		i;

	i = -1;
	while (++i < 8 && contacts[i].isUsed() == true);
	if (i == 8)
	{
		std::cout << "Contact list is Full.." << std::endl;
		return ;
	}
	contacts[i].addNew();
}

void	Phonebook::searchContact()
{
	int	i;
	std::string	line;

	if (!contacts[0].isUsed())
	{
		std::cout << "Your Phonebook is empty! Use ADD to get new contacts.\n";
		return ;
	}
	std::cout << "┍━━━━━━━━━━┲━━━━━━━━━━┲━━━━━━━━━━┲━━━━━━━━━━┑" << std::endl;
	std::cout << "┃     Index┃First name┃ Last name┃  Nickname┃" << std::endl;
	i = -1;
	while (++i < 8 && contacts[i].isUsed())
		contacts[i].shortPrint(i);
	std::cout << "┕━━━━━━━━━━┺━━━━━━━━━━┺━━━━━━━━━━┺━━━━━━━━━━┙" << std::endl;
	std::cout << "Givme the Index of the contact you are looking for: ";
	std::getline (std::cin, line);
	while (!std::isdigit(line[0]) || line.length() != 1 || atoi(line.c_str()) > i - 1)
	{
		std::cout << "It must be a one digit number, less than " << i << std::endl;
		std::getline (std::cin, line);
	}
	contacts[atoi(line.c_str())].fullPrint();
}
