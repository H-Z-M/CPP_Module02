#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public :
		Point(void);
		Point(const float x, const float y);
		Point(const Point &other);
		~Point(void);

		Point &operator=(const Point &rhs);

		Fixed getX(void) const;
		Fixed getY(void) const;
		static Point subPoint(const Point lhs, const Point rhs);
		static float crossProduct(const Point lhs, const Point rhs);

	private :
		const Fixed x;
		const Fixed y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
