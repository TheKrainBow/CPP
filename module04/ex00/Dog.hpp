/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:49 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 17:48:42 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"

class Dog : virtual public Animal
{
	private:

	public:
		Dog();
		~Dog();
		Dog(const Dog &toCopy);
		Dog &operator=(const Dog &toCopy);

		virtual void makeSound(void) const;
};
#endif