#include "Fixed.hpp"
#include "Point.hpp"

bool testBsp(Point const a, Point const b, Point const c, Point const point)
{
	std::cout << "(" << a.getX() << ", " << a.getY() << ")" <<
			"(" << b.getX() << ", " << b.getY() << ")" << "(" << c.getX() << ", " << c.getY() << ")" <<
			" <- (" << point.getX() << ", " << point.getY() << ")" << " : ";
	return bsp(a, b, c, point);
}

void printBsp(void)
{
	std::cout << "---On edge---" << std::endl;
	std::cout << std::boolalpha << testBsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(0.5, 0.5)) << std::endl;

	std::cout << "---On vertex---" << std::endl;
	std::cout << std::boolalpha << testBsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(0, 0)) << std::endl;
	std::cout << std::boolalpha << testBsp(Point(1, 1), Point(0, 1), Point(1, 0), Point(1, 1)) << std::endl;
	std::cout << std::boolalpha << testBsp(Point(1, 1), Point(0, 1), Point(1, 0), Point(0, 1)) << std::endl;
	std::cout << std::boolalpha << testBsp(Point(1, 1), Point(0, 1), Point(1, 0), Point(1, 0)) << std::endl;

	std::cout << "---Outside---" << std::endl;
	std::cout << std::boolalpha << testBsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(1.2, 0.7)) << std::endl;
	std::cout << std::boolalpha << testBsp(Point(0,-1), Point(1,1), Point(-1,1), Point(0, -2)) << std::endl;

	std::cout << "---Inside---" << std::endl;
	std::cout << std::boolalpha << testBsp(Point(0, 0), Point(0, 1), Point(1, 0), Point(0.4, 0.3)) << std::endl;
	std::cout << std::boolalpha << testBsp(Point(0,-1), Point(1,1), Point(-1,1), Point(0, 0.959)) << std::endl;

	std::cout << "---Other---" << std::endl;
	std::cout << std::boolalpha << testBsp(Point(0.0, 4.0), Point(-4.0, 0.0), Point(4.0, 0.0), Point(1.0, 1.0)) << std::endl;
	std::cout << std::boolalpha << testBsp(Point(1.1, 1.1), Point(0.1, 1.1), Point(1.042, 0.01), Point(1.024, 0.42)) << std::endl;

	float x = 4.12;
	float y = -0.34;
	for (int i = -3; i < 5; i++)
	{
		std::cout << std::boolalpha << testBsp(Point(0.0, 4.0), Point(-4.0, 0.0), Point(4.0, 0.0), Point(x, y)) << std::endl;
		x -= 0.4;
		y += 0.5;
	}
	std::cout << "***" << std::endl;
	for (int i = -3; i < 5; i++)
	{
		std::cout << std::boolalpha << testBsp(Point(0.0, 4.0), Point(-4.0, 0.0), Point(4.0, 0.0), Point(x, y)) << std::endl;
		x += 0.4;
		y -= 0.5;
	}
}

int main(void)
{
	printBsp();
	{
		std::cout << "---Copy Constructor---" << std::endl;
		Point original(13.5, 52.28);
		Point copy(original);
		std::cout << "original: x = " << original.getX() << ", y = " << original.getY()<< std::endl;
		std::cout << "copy    : x = " << copy.getX() << ", y = " << copy.getY()<< std::endl;
	}
	{
		std::cout << "---Assignment Operator---" << std::endl;
		Point original(24.14, 64.1);
		Point copy(52.19, 98.36);
		std::cout << "before original: x = " << original.getX() << ", y = " << original.getY()<< std::endl;
		std::cout << "before copy    : x = " << copy.getX() << ", y = " << copy.getY()<< std::endl;
		copy = original;
		std::cout << "after copy     : x = " << copy.getX() << ", y = " << copy.getY()<< std::endl;
	}
	return 0;
}
