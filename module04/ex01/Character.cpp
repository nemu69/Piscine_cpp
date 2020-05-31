/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/02/27 02:09:29 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string Character::getName() const
{
	return (name);
}

std::string Character::getWeaponName() const
{
		return (weapon->getName());
}

int			 Character::getAP() const
{
	return (AP);
}

int			 Character::getWeapon() const
{
	if (weapon)
		return (1);
	else
		return (0);
}

void 		Character::recoverAP()
{
	AP += 10;
	AP > 40 ? AP = 40 : 0;
}
void 		Character::equip(AWeapon* weapon)
{
	this->weapon = weapon;
}
void 		Character::attack(Enemy* enemy)
{
	if (enemy->getHP() != 0 && weapon && AP > weapon->getAPCost())
	{
		std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << "\n";
		weapon->attack();
		AP -= weapon->getAPCost();
		AP < 0 ? AP = 0 : 0;
		enemy->takeDamage(weapon->getDamage());
		if (enemy->getHP() <= 0)
		{
			delete(enemy);
		}
	}
}

Character::Character(std::string const & name)
{
	this->name = name;
	AP = 40;
	weapon = NULL;
};

Character::Character(const Character &o)
{
	name = o.getName();
	AP = o.AP;
}

Character::Character()
{

};

Character::~Character()
{

};

std::ostream &operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAP() << " AP and wields a " << rhs.getWeaponName() << "\n";
	else
	{
		o << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed\n";
	}
	return o;
}
