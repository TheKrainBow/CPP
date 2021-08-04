/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:20 by magostin          #+#    #+#             */
/*   Updated: 2021/08/03 18:18:09 by magostin         ###   ########.fr       */
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
		~Animal();
		virtual void makeSound(void) const;
		const std::string getType(void) const;
};
#endif