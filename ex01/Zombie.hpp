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
        void    set_name(std::string);
};

Zombie* zombieHorde( int N, std::string name );

#endif