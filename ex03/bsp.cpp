#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point AB = Point::subPoint(b, a);
	Point BP = Point::subPoint(point, b);

	Point BC = Point::subPoint(c, b);
	Point CP = Point::subPoint(point, c);

	Point CA = Point::subPoint(a, c);
	Point AP = Point::subPoint(point, a);

	float c1 = Point::crossProduct(AB, BP);
	float c2 = Point::crossProduct(BC, CP);
	float c3 = Point::crossProduct(CA, AP);

	if (( c1 > 0 && c2 > 0 && c3 > 0 ) || ( c1 < 0 && c2 < 0 && c3 < 0 ))
		return true;
	return false;
}
