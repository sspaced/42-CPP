#include "Fixed.hpp"

Fixed::Fixed() : number(0) {
}

Fixed::Fixed(int const number) {
	this->number = number * (1 << this->fractionalBits);
}

Fixed::Fixed(float const number) {
	this->number = roundf(number * (1 << this->fractionalBits));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

int Fixed::getRawBits(void) const
{
	return this->number;
}

void Fixed::setRawBits(int const raw)
{
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

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->number = other.number;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj) {
    os << obj.toFloat();
	return os;
}

Fixed Fixed::operator+(const Fixed& other) const
{
    return (Fixed (this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed (this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed (this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed (this->toFloat() / other.toFloat()));
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->toFloat() > other.toFloat());
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->toFloat() < other.toFloat());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->toFloat() == other.toFloat());
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed& Fixed::operator++() {
    this->number += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    this->number += 1;
    return temp;
}

Fixed& Fixed::operator--() {
    this->number -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);
    this->number -= 1;
    return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}