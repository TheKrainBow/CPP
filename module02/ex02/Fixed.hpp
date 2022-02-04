/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magostin <magostin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:01:25 by magostin          #+#    #+#             */
/*   Updated: 2022/02/04 18:08:43 by magostin         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &toAdd);
		void toAdd(const Fixed &toAdd);
		void toSub(const Fixed &toSub);
		void toMul(const Fixed &toMul);
		void toDiv(const Fixed &toDiv);
		const Fixed &operator++();
		const Fixed operator++(int);
		const Fixed &operator--();
		const Fixed operator--(int);
		int getRawBits(void) const;
		void setRawBits(const int raw);
		float toFloat(void) const;
		int toInt(void) const;
		static const Fixed &min(Fixed const &a, Fixed const &b);
		static const Fixed &max(Fixed const &a, Fixed const &b);
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &print);
Fixed operator+(const Fixed &a, const Fixed &b);
Fixed operator-(const Fixed &a, const Fixed &b);
Fixed operator*(const Fixed &a, const Fixed &b);
Fixed operator/(const Fixed &a, const Fixed &b);
bool operator==(Fixed const& a, Fixed const& b);
bool operator>=(Fixed const& a, Fixed const& b);
bool operator<=(Fixed const& a, Fixed const& b);
bool operator!=(Fixed const& a, Fixed const& b);
bool operator>(Fixed const& a, Fixed const& b);
bool operator<(Fixed const& a, Fixed const& b);

#endif