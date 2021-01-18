/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/14 11:48:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Getteurs

int ScavTrap::getHitPoints()
{
	return(HitPoints);
}
int ScavTrap::getEnergyPoints()
{
	return(EnergyPoints);
}
int ScavTrap::getLevel()
{
	return(Level);
}
std::string ScavTrap::getName()
{
	return(Name);
}
int ScavTrap::getMeeleDmg()
{
	return(MeleeDmg);
}
int ScavTrap::getRangedDmg()
{
	return(RangedDmg);
}
int ScavTrap::getArmor()
{
	return(Armor);
}

// Setteurs

void ScavTrap::setHitPoints(int HitPoints)
{
	this->HitPoints = HitPoints;
}
void ScavTrap::setEnergyPoints(int EnergyPoints)
{
	this->EnergyPoints = EnergyPoints;
}
void ScavTrap::setLevel(int Level)
{
	this->Level = Level;
}
void ScavTrap::setName(std::string Name)
{
	this->Name = Name;
}
void ScavTrap::setMeeleDmg(int MeleeDmg)
{
	this->MeleeDmg = MeleeDmg;
}
void ScavTrap::setRangedDmg(int RangedDmg)
{
	this->RangedDmg = RangedDmg;
}
void ScavTrap::setArmor(int Armor)
{
	this->Armor = Armor;
}

// Methodes

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << Name << " attacks " << target << " à distance, causant " << getRangedDmg() << " points de dégâts !\n";
}
void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << Name << " attacks " << target << " au corps à corps, causant " << getMeeleDmg() << " points de dégâts !\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	long int dmg;
	dmg = amount - Armor;
	dmg < 0 ? dmg = 0 : 0;
	HitPoints -= dmg;
	HitPoints < 0 ? HitPoints = 0 : 0;
	std::cout << "SC4V-TP " << Name << " prend " << dmg << " de dommages PV restant : " << getHitPoints() << " !\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	HitPoints += amount;
	HitPoints > MaxHitPoints ? HitPoints = MaxHitPoints : 0;
	std::cout << "SC4V-TP " << Name << " reçoit un soin de " << amount << " PV restant : " << getHitPoints() << " !\n";
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5] = {
	"Hello, newcomer! Find me a lemon, and this door shall be yours.\n",
	"Je donne 10% de vos Kamas no arnak\n",
	"Tell me a joke, and maybe I'll consider opening. Wait, that's a great joke!\n",
	"I'm SC4V-TP. I won't let you go through, unless you solve my riddle.\n",
	"Fetch me a mojito, and I'll call quits on this one.\n"
	};
	std::cout << "Run challengeNewcomer... Analyzing... Done !\n" << challenges[rand() % 5];
	std::cout << target << " is challenged\n";
}


ScavTrap::ScavTrap(const ScavTrap &o)
{
	HitPoints = o.HitPoints;
	EnergyPoints = o.EnergyPoints;
	Level = o.Level;
	Name = o.Name;
	MeleeDmg = o.MeleeDmg;
	RangedDmg = o.RangedDmg;
	Armor  = o.Armor;

};

ScavTrap::ScavTrap()
{
	Name = "J3r0me";
	HitPoints = 100;
  	EnergyPoints = 50;
  	Level = 1;
  	MeleeDmg = 20;
  	RangedDmg = 15;
  	Armor = 3;
	std::cout << Name << " : Walk through the door and you won't come back...!\n";
};

ScavTrap::ScavTrap(std::string Name)
{
	this->Name = Name;
	HitPoints = 100;
  	EnergyPoints = 50;
  	Level = 1;
  	MeleeDmg = 20;
  	RangedDmg = 15;
  	Armor = 3;
	std::cout << Name << " : Walk through the door and you won't come back...!\n";
};

ScavTrap::~ScavTrap()
{
	std::cout << Name << " : Guarding gate is fun ... was fun...\n";
};
