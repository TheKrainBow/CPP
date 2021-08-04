/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:49:28 by magostin          #+#    #+#             */
/*   Updated: 2021/08/04 17:12:48 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

int main(void)
{
	Character	bob("Bob");
	Character	paul("Paul");
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();

	bob.equip(ice);
	bob.equip(cure);
	bob.use(0, paul);
	bob.use(1, paul);
	delete ice;
	delete cure;
}