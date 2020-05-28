#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"

int main()
{
	Character* me = new Character("me");
	Enemy* b = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	puts("* Character without weapon *");
	me->attack(b);
	std::cout << *me;
	puts("* Character without weapon *");
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->attack(b);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(b); // Enemy B is dead (delete)
	std::cout << *me;
	return 0;
}