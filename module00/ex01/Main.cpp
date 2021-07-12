/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdelwaul <mdelwaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:19:57 by mdelwaul          #+#    #+#             */
/*   Updated: 2021/07/12 03:23:05 by mdelwaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	ft_addcontact(Contact contacts[8])
{
	int		i;

	i = -1;
	while (contacts[++i].isUsed() == true && i < 8);
	if (i == 8)
	{
		std::cout << "Contact list is Full.." << std::endl;
		return ;
	}
	contacts[i].addNew();
}

void	ft_searchcontact(Contact contacts[8])
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
	while (!std::isdigit(line[0]) || line.length() != 1 || std::stoi(line) > i - 1)
	{
		std::cout << "It must be a one digit number, less than " << i << std::endl;
		std::getline (std::cin, line);
	}
	contacts[std::stoi(line)].fullPrint();
}

int	main()
{
	Contact contacts[8];
	std::string line;

	while (std::cin.eof() != 1)
	{
		std::cout << "phonebook:> ";
		std::getline (std::cin, line);
		if (line == "END")
			break ;
		if (line == "ADD")
			ft_addcontact(contacts);
		if (line == "SEARCH")
			ft_searchcontact(contacts);
	}
}