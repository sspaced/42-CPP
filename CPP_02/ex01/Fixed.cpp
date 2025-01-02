#include "Fixed.hpp"

Fixed::Fixed() : number(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const number) {
	std::cout << "Int constructor called" << std::endl;
	this->number = number * (1 << this->fractionalBits);
}

Fixed::Fixed(float const number) {
	std::cout << "Float constructor called" << std::endl;
	this->number = number * (1 << this->fractionalBits);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->number = other.number;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
	return os;
}

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
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

float Fixed::toFloat(void) const
{
	return (float)this->number / (1 << this->fractionalBits);
}

int Fixed::toInt(void) const
{
	return (this->number / (1 << this->fractionalBits));
}
