/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:49:28 by magostin          #+#    #+#             */
/*   Updated: 2021/08/04 09:50:52 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void)
{
	Animal *Animals[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i % 2 == 0)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	std::cout << "-----------------------------" << std::endl;
	for (int i = 0; i < 10; ++i)
		Animals[i]->makeSound();
	std::cout << "-----------------------------" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
		delete Animals[i];
	}
	std::cout << "-----------------------------" << std::endl;
	Animal *dog = new Dog();
	Animal *cat = new Cat();

	dog->makeSound();
	cat->makeSound();

	delete dog;
	delete cat;
	system("leaks abstract");
}