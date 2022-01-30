/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:05:02 by magostin          #+#    #+#             */
/*   Updated: 2022/01/30 19:08:48 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# include <iomanip>
# include <iostream>
# include <cstdlib>

class Contact
{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
		bool	used;

	public:
		Contact();
		~Contact();
		void	addNew(void);
		bool	isUsed(void);
		void	shortPrint(int i);
		void	fullPrint(void);
};
#endif