/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:42:49 by magostin          #+#    #+#             */
/*   Updated: 2021/08/02 18:51:44 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include "Animal.hpp"

class Cat : virtual public Animal
{
	private:

	public:
		Cat();
		~Cat();

};
#endif