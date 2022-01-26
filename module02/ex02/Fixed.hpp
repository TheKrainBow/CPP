/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:01:25 by magostin          #+#    #+#             */
/*   Updated: 2022/01/26 15:21:24 by magostin         ###   ########.fr       */
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
		void toAdd(const Fixed &toAdd);
		void toSub(const Fixed &toSub);
		void toMul(const Fixed &toMul);
		void toDiv(const Fixed &toDiv);
		const Fixed &operator++();
		const Fixed operator++(int);
		const Fixed &operator--();
		const Fixed operator--(int);
		int getRawBits(void);
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &print);
Fixed operator+(const Fixed &a, const Fixed &b);
Fixed operator-(const Fixed &a, const Fixed &b);
Fixed operator*(const Fixed &a, const Fixed &b);
Fixed operator/(const Fixed &a, const Fixed &b);

#endif