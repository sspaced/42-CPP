#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <stdlib.h>

class Weapon {
	private :
	std::string type;

	public :
	const std::string& getType();
	void setType(std::string type);
};

#endif