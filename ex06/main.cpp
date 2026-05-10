# include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    if (ac != 2)
        return (1);
    std::string lvl = av[1];
    std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (level[i] != lvl && i < 5)
        i++;
    switch (i)
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Wrong Input \n";
            return (1);
    }
    return (0);
}
