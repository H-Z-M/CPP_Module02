#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <sstream>

class Fixed
{
	public :
		Fixed(void);
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		~Fixed(void);

		Fixed &operator=(const Fixed &rhs);

		bool operator>(const Fixed &rhs) const;
		bool operator<(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

		Fixed operator+(const Fixed &rhs) const;
		Fixed operator-(const Fixed &rhs) const;
		Fixed operator*(const Fixed &rhs) const;
		Fixed operator/(const Fixed &rhs) const;

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		static			Fixed &max(Fixed &lhs, Fixed &rhs);
		static const	Fixed &max(const Fixed &lhs, const Fixed &rhs);
		static			Fixed &min(Fixed &lhs, Fixed &rhs);
		static const	Fixed &min(const Fixed &lhs, const Fixed &rhs);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private :
		int raw;
		static const int point = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif
