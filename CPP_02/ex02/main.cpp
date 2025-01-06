#include "Fixed.hpp"

int main( void ) {

std::cout << Fixed(5.1f) + Fixed(5.1f) << std::endl;
std::cout << Fixed(5.1f) - Fixed(5.1f) << std::endl;
std::cout << Fixed(5.1f) * Fixed(5.1f) << std::endl;
std::cout << Fixed(5.1f) / Fixed(5.1f) << std::endl;

std::cout << (Fixed(5.2f) > Fixed(5.1f)) << std::endl;
std::cout << (Fixed(5.0f) < Fixed(5.1f)) << std::endl;
return 0;
}