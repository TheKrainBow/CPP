/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:05:02 by magostin          #+#    #+#             */
/*   Updated: 2022/01/30 19:09:01 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
	public:
		Phonebook();
		~Phonebook();
		void	searchContact(void);
		void	addContact(void);
};
#endif