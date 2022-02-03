/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 23:37:14 by magostin          #+#    #+#             */
/*   Updated: 2022/02/03 13:04:05 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie unnamed is created." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie " << _name << " is created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << " died." << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << _name << ": BraiiiiiinnnnzzzzzZ..." << std::endl;
}