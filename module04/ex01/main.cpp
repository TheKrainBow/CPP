/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: krain <krain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:49:28 by magostin          #+#    #+#             */
/*   Updated: 2022/02/06 00:39:44 by krain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	AnimalTest(void)
{
	std::cout << "	Create All!" << std::endl;
	Animal *Animals[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	std::cout << std::endl << "	Announce yourself and Make Sound!" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		Animals[i]->announce();
		Animals[i]->makeSound();
	}
	std::cout << std::endl << "	Destroy yourself!" << std::endl;
	for (int i = 0; i < 10; ++i)
		delete Animals[i];
}

void	CopyTest(void)
{
	Dog *dog = new Dog();
	Dog *dog2 = new Dog(*dog);
	delete dog;
	dog2->makeSound();
	delete dog2;
}

void	SubjectTest(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
}

int main(void)
{
	srand(42);
	std::cout << "\033[1;37m🐾   Animal Tests   🐾" << std::endl;
	AnimalTest();
	std::cout << std::endl << "🌀   Copy Tests   🌀" << std::endl;
	CopyTest();
	std::cout << std::endl << "🌀   Subject Test   🌀" << std::endl;
	SubjectTest();
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
}