
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
int main()
{

// IMateriaSource* src = new MateriaSource();
// src->learnMateria(new Ice());
// src->learnMateria(new Cure());
// ICharacter* moi = new Character("moi");
// AMateria* tmp;
// tmp = src->createMateria("ice");
// moi->equip(tmp);
// tmp = src->createMateria("cure");
// moi->equip(tmp);
// ICharacter* bob = new Character("bob");
// moi->use(0, *bob);
// moi->use(1, *bob);
// delete bob;
// delete moi;
// delete src;
// return 0;

	
	AMateria* spell = new Ice;
	AMateria* spell2 = new Cure;
	Character boe("boe");
	Character joe("joe");

	boe.equip(spell);
	boe.equip(spell2);
	boe.use(0, joe); // 10
	boe.use(1, joe); // 10
	boe.use(1, joe); // 20
	std::cout << std::endl << spell->getXP() << std::endl << std::endl;


	Character moe(boe);
	puts("Copy boe in moe");
	std::cout << spell2->getXP() << std::endl;
	moe.use(1, boe); // 30
	std::cout << spell->getXP() << std::endl << std::endl;


	AMateria *spell3 = spell2;
	std::cout << "Copy of Cure | type:" << spell3->getType() <<", xp : " << spell3->getXP() << std::endl;
	moe.use(3, boe); // don't display bc third maeteria don't exist
	std::cout << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	Cure* fifth = new Cure;
	src->learnMateria(fifth);
	delete fifth;
	ICharacter* moi = new Character("moi");
	std::cout << moi->getName() << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << tmp->getType() << std::endl;
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);
	ICharacter* bob = new Character("bob");
	moi->use(0, *bob);
	moi->use(1, *bob);
	delete bob;
	delete moi;
	delete src;
}