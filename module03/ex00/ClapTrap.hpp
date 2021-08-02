/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 15:42:14 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 16:06:29 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iomanip>
# include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hitpoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif