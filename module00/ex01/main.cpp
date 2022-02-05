/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:19:57 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:57:40 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook my_book;
	std::string line;

	while (std::cin.eof() != 1)
	{
		std::cout << "phonebook:> ";
		std::getline (std::cin, line);
		if (line == "EXIT")
			break ;
		if (line == "ADD")
			my_book.addContact();
		if (line == "SEARCH")
			my_book.searchContact();
	}
}