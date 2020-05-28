/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/27 00:06:01 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Getteurs

int FragTrap::getHitPoints()
{
	return(HitPoints);
}
int FragTrap::getEnergyPoints()
{
	return(EnergyPoints);
}
int FragTrap::getLevel()
{
	return(Level);
}
std::string FragTrap::getName()
{
	return(Name);
}
int FragTrap::getMeeleDmg()
{
	return(MeleeDmg);
}
int FragTrap::getRangedDmg()
{
	return(RangedDmg);
}
int FragTrap::getArmor()
{
	return(Armor);
}

// Setteurs

void FragTrap::setHitPoints(int HitPoints)
{
	this->HitPoints = HitPoints;
}
void FragTrap::setEnergyPoints(int EnergyPoints)
{
	this->EnergyPoints = EnergyPoints;
}
void FragTrap::setLevel(int Level)
{
	this->Level = Level;
}
void FragTrap::setName(std::string Name)
{
	this->Name = Name;
}
void FragTrap::setMeeleDmg(int MeleeDmg)
{
	this->MeleeDmg = MeleeDmg;
}
void FragTrap::setRangedDmg(int RangedDmg)
{
	this->RangedDmg = RangedDmg;
}
void FragTrap::setArmor(int Armor)
{
	this->Armor = Armor;
}

// Methodes

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << Name << " attacks " << target << " à distance, causant " << getRangedDmg() << " points de dégâts !\n";
}
void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << Name << " attacks " << target << " au corps à corps, causant " << getMeeleDmg() << " points de dégâts !\n";
}

void FragTrap::takeDamage(unsigned int amount)
{
	int dmg;
	dmg = amount - Armor;
	dmg < 0 ? dmg = 0 : 0;
	HitPoints -= dmg;
	HitPoints < 0 ? HitPoints = 0 : 0;
	std::cout << "FR4G-TP " << Name << " prend " << dmg << " de dommages PV restant : " << getHitPoints() << " !\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	HitPoints += amount;
	HitPoints > MaxHitPoints ? HitPoints = MaxHitPoints : 0;
	std::cout << "FR4G-TP " << Name << " reçoit un soin de " << amount << " PV restant : " << getHitPoints() << " !\n";
}

std::string   randomJoke()
{
    int i = (std::rand() % 5) + 1;
    std::string  Joke1 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke2 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke3 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke4 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke5 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";

    switch (i)
	{
	case 1:
		std::cout << "Attack one\n";
		return (Joke1);
		break;
	case 2:
		std::cout << "Attack two\n";
		return (Joke2);
		break;
	case 3:
		std::cout << "Attack three\n";
		return (Joke3);
		break;
	case 4:
		std::cout << "Attack four\n";
		return (Joke4);
		break;
	case 5:
		std::cout << "Attack five\n";
		return (Joke5);
		break;
	default:
		break;
	}
	return (Joke1);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (EnergyPoints < 25)
		std::cout << "Your energy is too low " << EnergyPoints << " (25 required)\n";
	else
	{
		EnergyPoints -= 25;
		EnergyPoints < 0 ? EnergyPoints = 0 : 0;
		std::cout << "Run vaulthunter_dot_exe... Analyzing... Done !\n" << randomJoke();
		std::cout << "FR4G-TP " << Name << " attacks " << target << "\n";
		if (EnergyPoints == 0)
			std::cout << "Your energy is at zero :( it's so BAAAAAD\n";
	}
}

FragTrap::FragTrap(FragTrap &o)
{
	HitPoints = o.getHitPoints();
	EnergyPoints = o.getEnergyPoints();	
	Level = o.getLevel();
	Name = o.getName();
	MeleeDmg = o.getMeeleDmg();
	RangedDmg = o.getRangedDmg();	
	Armor  = o.getArmor();

};

FragTrap::FragTrap()
{
	Name = "N3MU";
	HitPoints = 100;
  	EnergyPoints = 100;
  	Level = 1;
  	MeleeDmg = 30;
  	RangedDmg = 20;
  	Armor = 5;
	std::cout << Name << " : Recompiling my combat code!\n";
};

FragTrap::FragTrap(std::string Name)
{
	this->Name = Name;
	HitPoints = 100;
  	EnergyPoints = 100;
  	Level = 1;
  	MeleeDmg = 30;
  	RangedDmg = 20;
  	Armor = 5;
	std::cout << Name << " : Recompiling my combat code!\n";
};

FragTrap::~FragTrap()
{
	std::cout << Name << " : Argh arghargh death gurgle gurglegurgle urgh... death.\n";
};
