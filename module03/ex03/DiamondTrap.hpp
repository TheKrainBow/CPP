/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:46:53 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:24:53 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(DiamondTrap &toCopy);
		~DiamondTrap();
		DiamondTrap &operator=(const DiamondTrap &toCopy);

		DiamondTrap(std::string name);
		void whoAmI(void);
		void attack(std::string const &target);
		void displayInfo(void);
};

#endif