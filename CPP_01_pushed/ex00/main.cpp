#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("Bastien");
	zombie->announce();
	delete zombie;

	randomChump("grrrr");
	
	return (0);
}