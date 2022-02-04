/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:58:40 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 14:33:24 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>

class Fixed
{
	private:
		int					_value;
		static const int	_fixedPoint = 8;
	public:
		Fixed();
		Fixed(const Fixed &toCopy);
		Fixed &operator=(const Fixed &toAdd);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(const int raw);
};

#endif