/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 03:00:32 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Getteurs

int ClapTrap::getHitPoints()
{
	return(HitPoints);
}
int ClapTrap::getEnergyPoints()
{
	return(EnergyPoints);
}

int ClapTrap::getMaxHitPoints()
{
	return(MaxHitPoints);
}

int ClapTrap::getMaxEnergyPoints()
{
	return(MaxEnergyPoints);
}

int ClapTrap::getLevel()
{
	return(Level);
}

std::string ClapTrap::getName()
{
	return(Name);
}

int ClapTrap::getMeeleDmg()
{
	return(MeleeDmg);
}

int ClapTrap::getRangedDmg()
{
	return(RangedDmg);
}
int ClapTrap::getArmor()
{
	return(Armor);
}

// Setteurs

void ClapTrap::setHitPoints(int HitPoints)
{
	this->HitPoints = HitPoints;
}
void ClapTrap::setEnergyPoints(int EnergyPoints)
{
	this->EnergyPoints = EnergyPoints;
}
void ClapTrap::setLevel(int Level)
{
	this->Level = Level;
}
void ClapTrap::setName(std::string Name)
{
	this->Name = Name;
}
void ClapTrap::setMeeleDmg(int MeleeDmg)
{
	this->MeleeDmg = MeleeDmg;
}
void ClapTrap::setRangedDmg(int RangedDmg)
{
	this->RangedDmg = RangedDmg;
}
void ClapTrap::setArmor(int Armor)
{
	this->Armor = Armor;
}

// Methodes

void ClapTrap::takeDamage(unsigned int amount)
{
	int dmg;
	dmg = amount - Armor;
	dmg < 0 ? dmg = 0 : 0;
	HitPoints -= dmg;
	HitPoints < 0 ? HitPoints = 0 : 0;
	std::cout << "CL4P-TP " << Name << " prend " << dmg << " de dommages PV restant : " << getHitPoints() << " !\n\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	HitPoints += amount;
	HitPoints > MaxHitPoints ? HitPoints = MaxHitPoints : 0;
	std::cout << "CL4P-TP " << Name << " reçoit un soin de " << amount << " PV restant : " << getHitPoints() << " !\n\n";
}


ClapTrap::ClapTrap(ClapTrap &o)
{
	HitPoints = o.getHitPoints();
	EnergyPoints = o.getEnergyPoints();	
	Level = o.getLevel();
	Name = o.getName();
	MeleeDmg = o.getMeeleDmg();
	RangedDmg = o.getRangedDmg();	
	Armor  = o.getArmor();
	MaxEnergyPoints = o.getMaxEnergyPoints();
	MaxHitPoints = o.getMaxHitPoints();
	std::cout << Name << " : COPY AND PASTE initialization of ClapTrap ... Done !\n";
};

ClapTrap::ClapTrap()
{
	HitPoints = 100;
	MaxEnergyPoints = 100;
	MaxHitPoints = 100;
  	EnergyPoints = 50;
	MaxEnergyPoints = 50;
  	Level = 1;
  	MeleeDmg = 20;
  	RangedDmg = 15;
  	Armor = 3;
	std::cout << Name << " : initialization of ClapTrap ... Done !\n";
};

ClapTrap::ClapTrap(std::string Name, int HitPoints, int MaxHitPoints, int EnergyPoints, int MaxEnergyPoints, int Level, int MeleeDmg, int RangedDmg, int Armor)
{
	this->Name = Name;
	this->HitPoints = HitPoints;
	this->MaxHitPoints = MaxHitPoints;
  	this->EnergyPoints = EnergyPoints;
  	this->MaxEnergyPoints = MaxEnergyPoints;
  	this->Level = Level;
  	this->MeleeDmg = MeleeDmg;
  	this->RangedDmg = RangedDmg;
  	this->Armor = Armor;
	std::cout << Name << " : initialization of ClapTrap ... Done !\n";
};

ClapTrap::~ClapTrap()
{
	std::cout << Name << " : Death as of Claptrap\n";
};
