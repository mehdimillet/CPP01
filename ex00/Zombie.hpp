#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
    private:
           std::string name;
    public:
        Zombie();
        ~Zombie();
        void    announce();
        Zombie(std::string newname);
};
    
Zombie* newZombie(std::string name);
void  randomChump(std::string name);

#endif