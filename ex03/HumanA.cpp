#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << name;
    std::cout << " attacks with their ";
    std::cout << weapon.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon& wp) : name(n) ,weapon(wp)
{
}
