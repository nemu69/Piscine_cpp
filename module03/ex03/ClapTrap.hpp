/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/23 22:15:42 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ClapTrap_H
# define  ClapTrap_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>

class  ClapTrap
{

  public :
  
  	ClapTrap (); // Constructeur par défaut
	ClapTrap(std::string Name, int HitPoints, int MaxHitPoints, int EnergyPoints, int MaxEnergyPoints, int Level, int MeleeDmg, int RangedDmg, int Armor);
	ClapTrap(const ClapTrap &o); // Constructeur de recopie
	~ClapTrap(); // Destructeur éventuellement virtuel
	 ClapTrap&operator=(const ClapTrap &o) // Operator d'affectation
	{
		puts("You egal me my bro operator assignation");
		HitPoints = o.getHitPoints();
		EnergyPoints = o.getEnergyPoints();	
		Level = o.getLevel();
		Name = o.getName();
		MeleeDmg = o.getMeeleDmg();
		RangedDmg = o.getRangedDmg();	
		Armor  = o.getArmor();
		return (*this);
	};

  	// Geteurs
  	int getHitPoints();
	int getMaxHitPoints();
  	int getEnergyPoints();
	int getMaxEnergyPoints();
  	int getLevel();
  	std::string getName();
  	int getMeeleDmg();
  	int getRangedDmg();
  	int getArmor();

  	// Seteurs
  	void setHitPoints(int HitPoints);
  	void setEnergyPoints(int EnergyPoints);
  	void setLevel(int Level);
  	void setName(std::string Name);
  	void setMeeleDmg(int MeleeDmg);
  	void setRangedDmg(int RangedDmg);
  	void setArmor(int Armor);
	
	// Methodes
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
  // Attributs
  
  protected :
  	int HitPoints;
  	int MaxHitPoints;
  	int EnergyPoints;
  	int MaxEnergyPoints;
  	int Level;
	std::string Name;
  	int MeleeDmg;
  	int RangedDmg;
  	int Armor;

};

#endif 
