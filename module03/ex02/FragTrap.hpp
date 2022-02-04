/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:30:38 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 22:29:39 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap();
		FragTrap(FragTrap &toCopy);
		FragTrap &operator=(const FragTrap &toCopy);
	
		FragTrap(std::string name);
		void attack(std::string const &target);
		void highFivesGuys(void);
		void initHitPoints(void);
		void initEnergyPoints(void);
		void initAttackDamage(void);
};
#endif