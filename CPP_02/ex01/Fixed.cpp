#include "Fixed.hpp"

Fixed::Fixed() : number(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const number) {
	std::cout << "Int constructor called" << std::endl;
	this->number = number << this->fractionalBits;
}

// Fixed::Fixed(float const number) {
// 	std::cout << "Float constructor called" << std::endl;
// }

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->number = other.getRawBits();
	return *this;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->number = other.getRawBits();
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->number;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = raw;
}

