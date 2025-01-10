#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(100), energyPoints(100), attackDamage(30) 
{
	std::cout << "ClapTrap " << name << " is created!" << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap " << name << " is destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
	if (energyPoints > 0 && hitPoints > 0)
	{
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " has no energy points!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoints > 0)
	{
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPoints > 0 && hitPoints > 0)	
	{
		energyPoints--;
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " points!" << std::endl;
	}
	else if (hitPoints <= 0)
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " has no energy points!" << std::endl;
}

