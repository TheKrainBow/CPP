/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:49:28 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 00:01:42 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"

void copyCharacterTest()
{
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();
	Character	bob("Bob");

	bob.equip(ice);
	bob.equip(cure);
	Character	bobStalker(bob);
	bobStalker.use(0, bob);
	bobStalker.use(1, bob);
	bobStalker.use(2, bob);
	bobStalker.use(3, bob);
}

void	basicTest()
{
	AMateria	*ice = new Ice();
	AMateria	*cure = new Cure();
	Character	bob("Bob");
	Character	paul("Paul");

	bob.equip(ice);
	bob.equip(cure);
	bob.use(0, paul);
	bob.use(1, paul);

}

void	materiaSourceTest()
{
	AMateria		*ice = new Ice();
	AMateria		*cure = new Cure();
	MateriaSource	*src = new MateriaSource();
	src->learnMateria(ice);
	src->learnMateria(cure);

	Character	bob("Bob");
	bob.equip(src->createMateria("ice"));
	bob.equip(src->createMateria("cure"));
	bob.equip(src->createMateria("cureeee"));
	bob.use(0, bob);
	bob.use(1, bob);
	bob.use(2, bob);
	delete src;
}

void	subjectTest()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

int main(void)
{
	std::cout << std::endl << "\033[1;37m✅   Basic Tests   ✅" << std::endl;
	basicTest();
	std::cout << std::endl << "🌀   Copy Character Tests   🌀" << std::endl;
	copyCharacterTest();
	std::cout << std::endl << "🌀   Materia Source Tests   🌀" << std::endl;
	materiaSourceTest();
	std::cout << std::endl << "🌀   Subject Test   🌀\033[37m" << std::endl;
	subjectTest();
}