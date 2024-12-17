#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
	int number;
	static int const number_bits = 8;

	public:
	Fixed();
	~Fixed();
	Fixed& operator=(const Fixed& other);
	Fixed(const Fixed& other);
	int getRawBits(void) const;
	void setRawBits(int const raw);

};

#endif