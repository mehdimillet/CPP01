#ifndef HALR_HPP
# define HALR_HPP

# include <string>
# include <iostream>

class Harl
{
    private:
        void    error();
        void    warning();
        void    info();
        void    debug();

    public:
        void    complain(std::string);
};

#endif