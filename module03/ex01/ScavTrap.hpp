/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:41:42 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:29:36 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap &toCopy);
		ScavTrap &operator=(const ScavTrap &toCopy);
		~ScavTrap();

		ScavTrap(std::string name);
		void guardGate(void);
		void attack(std::string const &target);
		void initHitPoints(void);
		void initEnergyPoints(void);
		void initAttackDamage(void);
};

#endif