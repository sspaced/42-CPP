#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() 
{
	std::cout << name << " has been destroyed." << std::endl;
}

void Zombie::announce()
{
	std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}