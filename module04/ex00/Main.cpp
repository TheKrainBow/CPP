/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:49:28 by magostin          #+#    #+#             */
/*   Updated: 2021/08/04 09:12:53 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *Wrongmeta = new WrongAnimal();
	const WrongAnimal *Wrongi = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	
	std::cout << Wrongi->getType() << " " << std::endl;
	Wrongi->makeSound();
	Wrongmeta->makeSound();
	return (0);
}