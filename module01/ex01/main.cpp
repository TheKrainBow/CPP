/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 23:36:34 by krain             #+#    #+#             */
/*   Updated: 2021/07/16 00:30:57 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name);

int         main(void)
{
	Zombie		*Horde = zombieHorde(10, "Bob");

	for (int i = 0; i < 10; i++)
		Horde[i].announce();
	delete [] Horde;
}