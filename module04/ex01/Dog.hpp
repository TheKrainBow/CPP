/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:49 by magostin          #+#    #+#             */
/*   Updated: 2022/02/05 18:27:32 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : virtual public Animal
{
	private:
		Brain *_brain;
	public:
		Dog();
		Dog(const Dog &copy);
		virtual ~Dog();
		Dog &operator=(const Dog &copy);

		virtual void makeSound(void) const;
		Brain *getBrain(void);
};
#endif