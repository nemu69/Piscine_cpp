
#ifndef ZOMBIE_HPPORDE_HPP
# define ZOMBIE_HPPORDE_HPP
# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieHorde
{

  public :

	int amount;
	Zombie *horde;
	void announce();
	ZombieHorde(int n);
	ZombieHorde();
	~ZombieHorde();
};

#endif
