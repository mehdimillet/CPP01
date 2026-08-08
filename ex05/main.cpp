# include "Harl.hpp"

int	main(void)
{
	Harl	harl;
	int		lvl;
	
	while(1)
	{
		std:: cout << "1: DEBUG  | 2: ERROR  | 3: INFO  | 4: WARNING" << "\n"; 
		std::cin >> lvl;
		if(std::cin.eof())
		{
			std::cout << "EOF detected, closing programm" << std::endl;
			break ;
		}
		switch (lvl)
		{
			case 1:
				harl.complain("DEBUG");
				return (0);
			case 2:
				harl.complain("ERROR");
				return (0);
			case 3:
				harl.complain("INFO");
				return (0);
			case 4:
				harl.complain("WARNING");
				return (0);
			default:
				std::cin.clear();
				std::cin.ignore(1000, '\n');
				std::cout << "Wrong input, try again" << "\n";
				break;
		}
	}
	return (0);
}
