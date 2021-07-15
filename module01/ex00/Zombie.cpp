/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 23:37:14 by krain             #+#    #+#             */
/*   Updated: 2021/07/16 00:18:38 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string named) : name(named)
{
	std::cout << "Zombie " << name << " is created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " died." << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->name << "> BraiiiiiinnnnzzzzzZ..." << std::endl;
}