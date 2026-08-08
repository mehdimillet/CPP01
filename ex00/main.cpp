# include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("rick");
	
	zombie->announce();
	delete zombie;
	randomChump("TEST");
	return (0);
}