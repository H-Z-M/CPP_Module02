#include "Fixed.hpp"

Fixed::Fixed(void) : raw(0) {}

Fixed::Fixed(const int value)
{
	raw = value << point;
}

Fixed::Fixed(const float value)
{
	raw = std::roundf(value * (1 << point));
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed::~Fixed(void) {}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		raw = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return getRawBits() > rhs.getRawBits();
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return rhs > *this;
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return !(*this < rhs);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return !(*this > rhs);
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return !(*this == rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed f;

	f.setRawBits(getRawBits() + rhs.getRawBits());
	return f;
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed f;

	f.setRawBits(getRawBits() - rhs.getRawBits());
	return f;
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	if (rhs.getRawBits() == 0)
	{
		std::cerr << "Dividing by zero is not defined." << std::endl;
		std::exit(EXIT_FAILURE);
	}
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++(void)
{
	++raw;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	--raw;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	++*this;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	--*this;
	return tmp;
}

Fixed &Fixed::max(Fixed &lhs, Fixed &rhs)
{
	return (lhs > rhs)? lhs : rhs;
}

const Fixed &Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs > rhs)? lhs : rhs;
}

Fixed &Fixed::min(Fixed &lhs, Fixed &rhs)
{
	return (lhs < rhs)? lhs : rhs;
}

const Fixed &Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	return (lhs < rhs)? lhs : rhs;
}

int Fixed::getRawBits(void) const
{
	return raw;
}

void Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

int Fixed::toInt(void) const
{
	return raw >> point;
}

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->raw) / (1 << point);
}

std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}
