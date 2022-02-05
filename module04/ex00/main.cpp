/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:49:28 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 18:48:50 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	TrueTest()
{
	std::cout << "	Create All!" << std::endl;
	const Animal *trueAnimal = new Animal();
	const Animal *trueDog = new Dog();
	const Animal *trueCat = new Cat();

	std::cout << std::endl << "	Announce yourself!" << std::endl;
	trueDog->announce();
	trueCat->announce();
	trueAnimal->announce();

	std::cout << std::endl << "	Make some Sounds!" << std::endl;
	trueDog->makeSound();
	trueCat->makeSound();
	trueAnimal->makeSound();

	std::cout << std::endl << "	Destroy yourself!" << std::endl;
	delete trueAnimal;
	delete trueDog;
	delete trueCat;
}

void	WrongTest()
{
	std::cout << "	Create All!" << std::endl;
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << std::endl << "	Announce yourself!" << std::endl;
	wrongCat->announce();
	wrongAnimal->announce();

	std::cout << std::endl << "	Make some Sounds!" << std::endl;
	wrongCat->makeSound();
	wrongAnimal->makeSound();

	std::cout << std::endl << "	Destroy yourself!" << std::endl;
	delete wrongAnimal;
	delete wrongCat;
}

int main(void)
{
	std::cout << "\033[1;37m✅   True Tests    ✅" << std::endl;
	TrueTest();
	std::cout << std::endl << "❌   Wrong Tests   ❌" << std::endl;
	WrongTest();
	std::cout << std::endl << "🎮  End of tests  🎮\033[37m" << std::endl;
	return (0);
}