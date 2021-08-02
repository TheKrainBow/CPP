/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:39:20 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 18:56:25 by magostin         ###   ########.fr       */
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
		void makeSound(void);
		std::string getType(void);
};
#endif