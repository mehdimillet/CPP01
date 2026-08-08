# include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "[ DEBUG ]" << "\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << "\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ]" << "\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::warning()
{
	std::cout << "[ WARNING ]" << "\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string lvl)
{
	std::string level[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::error, &Harl::info, &Harl::warning};

	for (int i = 0; i < 4; i++)
	{
		if (level[i] == lvl)
			(this->*functions[i])();
	}
}