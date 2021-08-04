/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:20 by magostin          #+#    #+#             */
/*   Updated: 2021/08/04 09:49:28 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal  
{
	protected:
		std::string _type;
	public:
		Animal();
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		const std::string getType(void) const;
};
#endif