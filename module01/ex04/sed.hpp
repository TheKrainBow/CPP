/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 03:27:44 by krain             #+#    #+#             */
/*   Updated: 2021/07/16 03:43:07 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>

class Sed
{
	private:
		std::ifstream	_file;
		std::string		_s1;
		std::string		_s2;
	public:
		Sed(std::string fileName, std::string s1, std::string s2);
		~Sed();
		bool isOpen(void);
};

#endif