#ifndef HUMANB_HPPPP
# define HUMANB_HPPPP

# include "Weapon.hpp"

class HumanB
{

	public :
	std::string name;
	Weapon *weapon;
	HumanB(std::string str);
	HumanB();
	int		setWeapon(Weapon& weap);
	int		attack();
};

#endif
