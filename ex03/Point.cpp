#include "Point.hpp"

Point::Point(void) : x(0), y(0) {}

Point::Point(const float xp, const float yp) : x(xp), y(yp) {}

Point::Point(const Point &other)
{
	*this = other;
}

Point &Point::operator=(const Point &rhs)
{
	if (this != &rhs)
	{
		const_cast<Fixed &>(x) = rhs.x;
		const_cast<Fixed &>(y) = rhs.y;
	}
	return *this;
}

Point::~Point(void) {}

Fixed Point::getX(void) const
{
	return x;
}

Fixed Point::getY(void) const
{
	return y;
}

Point Point::subPoint(const Point lhs, const Point rhs)
{
	return Point(lhs.x.toFloat() - rhs.x.toFloat(), lhs.y.toFloat() - rhs.y.toFloat());
}

float Point::crossProduct(const Point lhs, const Point rhs)
{
	return lhs.x.toFloat() * rhs.y.toFloat() - lhs.y.toFloat() * rhs.x.toFloat();
}
