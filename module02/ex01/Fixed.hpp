/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:01:25 by magostin          #+#    #+#             */
/*   Updated: 2021/07/29 18:20:47 by magostin         ###   ########.fr       */
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
		int					value;
		static const int	fixedPoint = 8;
	public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed &toCopy);
		~Fixed();
		void operator=(const Fixed &toAdd);
		int getRawBits(void);
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &print);
#endif