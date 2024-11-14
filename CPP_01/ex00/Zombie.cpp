#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name("Foo") 
{
	Zombie::name = name;
}

Zombie::~Zombie() {}

void Zombie::announce()
{
	std::cout << Zombie::name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}