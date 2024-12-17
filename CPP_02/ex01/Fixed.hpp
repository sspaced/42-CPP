#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
	int number;
	static int const fractionalBits = 8;

	public:
	Fixed();
	Fixed(int const number);
	// Fixed(float const number);
	~Fixed();
	Fixed& operator=(const Fixed& other);
	Fixed(const Fixed& other);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif