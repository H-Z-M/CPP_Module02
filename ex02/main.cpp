#include "Fixed.hpp"
#include <iomanip>

void printTest(void)
{
	Fixed a = Fixed(0.1f);
	Fixed c(1.5f);
	std::cout << std::endl;
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
	a = Fixed(5.1f);
	c = Fixed(2);
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "c / a:" << c / a << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
	a = Fixed(-2.5f);
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "c / a:" << c / a << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
	c = Fixed(-5.2f);
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "c / a:" << c / a << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
	c = Fixed(2.2f);
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "c / a:" << c / a << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
	c = Fixed(-2.6f);
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "c / a:" << c / a << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
	c = Fixed(-2.5f);
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "c / a:" << c / a << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
	a = Fixed(100.2f);
	c = Fixed(-244.1f);
	std::cout << "a:" << a << std::endl;
	std::cout << "c:" << c << std::endl;
	std::cout << "a + c:" << a + c << std::endl;
	std::cout << "c + a:" << c + a << std::endl;
	std::cout << "a - c:" << a - c << std::endl;
	std::cout << "c - a:" << c - a << std::endl;
	std::cout << "a * c:" << a * c << std::endl;
	std::cout << "c * a:" << c * a << std::endl;
	std::cout << "a / c:" << a / c << std::endl;
	std::cout << "c / a:" << c / a << std::endl;
	std::cout << "a < c :" << (a < c) << std::endl;
	std::cout << "c < a :" << (c < a) << std::endl;
	std::cout << "a > c :" << (a > c) << std::endl;
	std::cout << "c > a :" << (c > a) << std::endl;
	std::cout << "a <= c :" << (a <= c) << std::endl;
	std::cout << "c <= a :" << (c <= a) << std::endl;
	std::cout << "a >= c :" << (a >= c) << std::endl;
	std::cout << "c >= a :" << (c >= a) << std::endl;
	std::cout << "a == c :" << (a == c) << std::endl;
	std::cout << "c == a :" << (c == a) << std::endl;
	std::cout << "a != c :" << (a != c) << std::endl;
	std::cout << "c != a :" << (c != a) << std::endl;
	std::cout << "min(a, c) :" << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) :" << Fixed::max(a, c) << std::endl;
}

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	printTest();
	return 0;
}
