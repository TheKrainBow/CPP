#include "Fixed.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(const float val)
{
	_value = round(val * (1 << _fixedPoint));
}

Fixed::Fixed(const int val)
{
	_value = (val << _fixedPoint);
}

Fixed::Fixed(const Fixed &toCopy)
{
	*this = toCopy;
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value	 = raw;
}

std::ostream &operator<<(std::ostream &out, Fixed const &print)
{
	out << print.toFloat();
	return (out);
}

Fixed &Fixed::operator=(const Fixed &toCopy)
{
	_value = toCopy.getRawBits();
	return (*this);
}

void Fixed::toAdd(const Fixed &toAdd)
{
	_value += toAdd.toFloat();
}

void Fixed::toSub(const Fixed &toSub)
{
	_value -= toSub.toFloat();
}

void Fixed::toMul(const Fixed &toMul)
{
	_value *= toMul.toFloat();
}

void Fixed::toDiv(const Fixed &toDiv)
{
	_value /= toDiv.toFloat();
}

Fixed::~Fixed()
{
}

int		Fixed::toInt(void) const
{
	return ((_value / (1 << _fixedPoint)));
}

float	Fixed::toFloat(void) const
{
	return ((float)_value / (1 << _fixedPoint));
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

/*
**		[OPERATORS]
*/

//		Comparaisons

bool operator==(Fixed const& a, Fixed const& b)
{
	return (a.toFloat() == b.toFloat());
}

bool operator!=(Fixed const& a, Fixed const& b)
{
	return (a.toFloat() != b.toFloat());
}

bool operator>=(Fixed const& a, Fixed const& b)
{
	return (a.toFloat() >= b.toFloat());
}

bool operator<=(Fixed const& a, Fixed const& b)
{
	return (a.toFloat() <= b.toFloat());
}

bool operator>(Fixed const& a, Fixed const& b)
{
	return (a.toFloat() > b.toFloat());
}

bool operator<(Fixed const& a, Fixed const& b)
{
	return (a.toFloat() < b.toFloat());
}

//

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
	_value++;
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
	_value--;
	return (*this);
}

const Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	//std::cout << "Assignation post-- called" << std::endl;
	--*this;
	return (temp);
}