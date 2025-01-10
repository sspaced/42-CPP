#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " is created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " is destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << name << " is asking for a high five!" << std::endl;
}