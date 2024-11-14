#include <stdlib.h>
#include <iostream>

int main()
{
	std::string text = "HI THIS IS BRAIN";
	// pointer
	std::string* stringPTR = &text;
	// reference
	std::string&  stringREF = text;

	std::cout << &text << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << text << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}