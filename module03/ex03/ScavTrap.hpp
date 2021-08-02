/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 14:41:42 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 18:16:16 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap {
	public:
		void guardGate(void);
		void attack(std::string const &target);
		ScavTrap(std::string name);
		ScavTrap();
		~ScavTrap();
};

#endif