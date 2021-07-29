#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = round(val * (1 << this->fixedPoint));
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (val << this->fixedPoint);
}

Fixed::Fixed(const Fixed &toCopy)
{
	this->value = toCopy.value;
	std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value	 = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &print)
{
	out << print.toFloat();
	return (out);
}

void Fixed::operator=(const Fixed &toAdd)
{
	this->value = toAdd.value;
	std::cout << "Assignation opeator called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt(void) const
{
	return ((this->value / (1 << this->fixedPoint)));
}

float	Fixed::toFloat(void) const
{
	return (((float)this->value / (1 << this->fixedPoint)));
}