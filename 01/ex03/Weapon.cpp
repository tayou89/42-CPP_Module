#include "Weapon.hpp"

Weapon::Weapon(const std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void)
{
	return (type);
}

void	Weapon::setType(const std::string newType)
{
	type = newType;
}
