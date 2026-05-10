#include "HumanB.hpp"

void    HumanB::attack()
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string n)
{
    name = n;
}

void    HumanB::setWeapon(Weapon& wp)
{
    weapon = &wp;
}