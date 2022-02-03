/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:58:40 by magostin          #+#    #+#             */
/*   Updated: 2022/02/03 14:07:14 by magostin         ###   ########.fr       */
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
		void operator=(const Fixed &toAdd);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		~Fixed();
};

#endif