#include "Fixed.hpp"

// int main( void ) {

// std::cout << "Arithmetic operators:" << std::endl;
// std::cout << Fixed(5.1f) + Fixed(5.1f) << std::endl;
// std::cout << Fixed(5.1f) - Fixed(5.1f) << std::endl;
// std::cout << Fixed(5.1f) * Fixed(5.1f) << std::endl;
// std::cout << Fixed(5.1f) / Fixed(5.1f) << std::endl;

// std::cout << "Comparison operators:" << std::endl;
// std::cout << (Fixed(5.2f) > Fixed(5.1f)) << std::endl;
// std::cout << (Fixed(5.0f) < Fixed(5.1f)) << std::endl;
// std::cout << (Fixed(5.2f) >= Fixed(5.1f)) << std::endl;
// std::cout << (Fixed(5.0f) <= Fixed(5.1f)) << std::endl;
// std::cout << (Fixed(5.0f) == Fixed(5.0f)) << std::endl;
// std::cout << (Fixed(5.0f) != Fixed(5.1f)) << std::endl;

// std::cout << "Min and max:" << std::endl;
// Fixed a(5.1f);
// Fixed b(5.1f);
// std::cout << Fixed::min(a, b) << std::endl;
// std::cout << Fixed::max(a, b) << std::endl;

// std::cout << "Increment and decrement:" << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << ++a << std::endl;
// std::cout << a << std::endl;
// std::cout << b-- << std::endl;
// std::cout << b << std::endl;
// std::cout << --b << std::endl;
// std::cout << b << std::endl;

// return 0;
// }

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}