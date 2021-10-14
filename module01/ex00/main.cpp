/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 23:36:34 by krain             #+#    #+#             */
/*   Updated: 2021/10/14 17:29:21 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void 	randomChump(std::string name);
Zombie  *newZombie(std::string name);

int         main(void)
{
	Zombie patrick = Zombie("Patrick");
	Zombie *bob = new Zombie("Bob");

	patrick.announce();
	bob->announce();
	randomChump("Christine");
	delete bob;
}