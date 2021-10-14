/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 02:05:02 by mdelwaul          #+#    #+#             */
/*   Updated: 2021/10/14 17:25:52 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>
#include <cstdlib>

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