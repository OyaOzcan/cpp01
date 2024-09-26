#include "zombie.hpp"

int	main()
{
	Zombie *z = newZombie("Zoo");
	Zombie *z1 = newZombie("Foo");

	z->announce();
	z1->announce();

	delete z;
	delete z1;

	randomChump("oyozcan");
	return (0);
}
