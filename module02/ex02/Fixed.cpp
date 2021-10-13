#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const float val)
{
	this->value = round(val * (1 << this->fixedPoint));
}

Fixed::Fixed(const int val)
{
	this->value = (val << this->fixedPoint);
}

Fixed::Fixed(const Fixed &toCopy)
{
	this->value = toCopy.value;
}

int Fixed::getRawBits(void)
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
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
	//std::cout << "Assignation = called" << std::endl;
}

void Fixed::toAdd(const Fixed &toAdd)
{
	value += toAdd.toFloat();
}

void Fixed::toSub(const Fixed &toSub)
{
	value -= toSub.toFloat();
}

void Fixed::toMul(const Fixed &toMul)
{
	value *= toMul.toFloat();
}

void Fixed::toDiv(const Fixed &toDiv)
{
	value /= toDiv.toFloat();
}

Fixed operator+(const Fixed &a, const Fixed &b)
{
	//std::cout << "Assignation + called" << std::endl;
	Fixed temp(a);
	temp.toAdd(b);
	return (temp);
}

Fixed operator-(const Fixed &a, const Fixed &b)
{
	//std::cout << "Assignation - called" << std::endl;
	Fixed temp(a);
	temp.toSub(b);
	return (temp);
}

Fixed operator*(const Fixed &a, const Fixed &b)
{
	//std::cout << "Assignation * called" << std::endl;
	Fixed temp(a);
	temp.toMul(b);
	return (temp);
}

Fixed operator/(const Fixed &a, const Fixed &b)
{
	//std::cout << "Assignation / called" << std::endl;
	Fixed temp(a);
	temp.toDiv(b);
	return (temp);
}

const Fixed &Fixed::operator++()
{
	//std::cout << "Assignation pre++ called" << std::endl;
	value++;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	//std::cout << "Assignation post++ called" << std::endl;
	++*this;
	return (temp);
}

const Fixed &Fixed::operator--()
{
	//std::cout << "Assignation pre-- called" << std::endl;
	value--;
	return (*this);
}

const Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	//std::cout << "Assignation post-- called" << std::endl;
	--*this;
	return (temp);
}

Fixed::~Fixed()
{
}

int		Fixed::toInt(void) const
{
	return ((this->value / (1 << this->fixedPoint)));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << this->fixedPoint));
}

const Fixed	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() >= b.toFloat())
		return (a);
	return (b);
}

const Fixed	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}