#ifndef WEAPON_HPPPP
# define WEAPON_HPPPP

# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <cstdlib>
# include <sstream>

class Weapon
{

	public :
	std::string type;
	Weapon();
	Weapon(std::string str);
	int	setType(std::string str);
	const std::string	getType() const;
};

#endif
