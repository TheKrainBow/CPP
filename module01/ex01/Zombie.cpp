/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 23:37:14 by magostin          #+#    #+#             */
/*   Updated: 2022/01/26 15:21:24 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie unnamed is created." << std::endl;
}

Zombie::Zombie(std::string named) : name(named)
{
	std::cout << "Zombie " << name << " is created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << " died." << std::endl;
}

void    Zombie::setName(std::string name)
{
	std::cout << "Zombie is renammed " << name << "." << std::endl;
    this->name = name;
}

void    Zombie::announce(void)
{
    std::cout << "<" << this->name << "> BraiiiiiinnnnzzzzzZ..." << std::endl;
}