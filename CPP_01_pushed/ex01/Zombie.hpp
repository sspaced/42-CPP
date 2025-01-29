#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie {
private :
	std::string name;
	
public :
	Zombie();
	~Zombie();
	void setName(std::string name);
	void announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif