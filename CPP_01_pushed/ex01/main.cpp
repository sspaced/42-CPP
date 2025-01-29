#include "Zombie.hpp"

int main()
{
	Zombie* zombie = zombieHorde(4, "Fred");

	for (int i = 0; i < 4; i++)
	{
		zombie[i].announce();
	}
	
	delete[] zombie;
	return (0);
}