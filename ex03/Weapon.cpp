#include "Weapon.hpp"

const std::string&  Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string set)
{
    type = set;
}

Weapon::Weapon(std::string n)
{
    type = n;
}