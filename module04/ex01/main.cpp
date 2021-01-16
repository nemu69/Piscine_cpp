#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "InfinityGaunt.hpp"
#include "Freezer.hpp"

int main()
{
	std::cout << "---- A new wtf World -----" << std::endl << std::endl;
	Character* me = new Character("me");
	Enemy* b = new SuperMutant();
	Enemy* freez = new Freezer();
	Enemy* rad = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* thanos = new InfinityGaunt();

	std::cout << std::endl << "---- WAR -----" << std::endl << std::endl;
	puts("* Character without weapon *\n");
	me->attack(b);
	std::cout << *me;
	puts("\n* Character with powerfist *\n");
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	puts("\n* Character with PlasmaRifle *\n");
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	puts("\n* Character with Gant d'infinite *\n");
	me->equip(thanos);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	me->attack(b);
	puts("\n* Attack freez *\n");
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(freez);
	puts("\n* Attack Rad *\n");
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(rad);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->attack(b); // Enemy B is dead (delete)
	me->attack(b); // Enemy B is dead (delete)

	std::cout << *me;
	return 0;
}