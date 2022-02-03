#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	_value = (val << _fixedPoint);
}

Fixed::Fixed(const float val)
{
	_value = round(val * (1 << _fixedPoint));
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &print)
{
	out << print.toFloat();
	return (out);
}

void Fixed::operator=(const Fixed &toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = toCopy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt(void) const
{
	return ((_value / (1 << _fixedPoint)));
}

float	Fixed::toFloat(void) const
{
	return (((float)_value / (1 << _fixedPoint)));
}