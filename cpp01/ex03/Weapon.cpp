#include "Weapon.h"

Weapon::Weapon(std::string type)
{
	this->type = type;
};
Weapon::~Weapon() {};

std::string Weapon::getType()
{
	std::string &ref = this->type;
	return (ref);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}