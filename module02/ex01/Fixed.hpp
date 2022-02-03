/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:01:25 by magostin          #+#    #+#             */
/*   Updated: 2022/02/03 14:13:57 by magostin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>
# include <iomanip>
# include <iostream>
# include <fstream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_fixedPoint = 8;
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &toCopy);
		~Fixed();
		void operator=(const Fixed &toAdd);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &print);
#endif