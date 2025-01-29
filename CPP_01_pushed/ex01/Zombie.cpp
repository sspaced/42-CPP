#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() 
{
	std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce()
{
	std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	Zombie::name = name;
}