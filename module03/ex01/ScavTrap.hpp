/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/23 22:15:42 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ScavTrap_H
# define  ScavTrap_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>

class  ScavTrap
{

  public :
  
  	ScavTrap (); // Constructeur par défaut
	ScavTrap(std::string Name);
	ScavTrap(const ScavTrap &o); // Constructeur de recopie
	~ScavTrap(); // Destructeur éventuellement virtuel
	 ScavTrap&operator=(const ScavTrap &o) // Operator d'affectation
	{
		puts("Assignation operator called");
		HitPoints = o.HitPoints;
		EnergyPoints = o.EnergyPoints;
		Level = o.Level;
		Name = o.Name;
		MeleeDmg = o.MeleeDmg;
		RangedDmg = o.RangedDmg;
		Armor  = o.Armor;
		return (*this);
	};

  	// Geteurs
  	int getHitPoints();
  	int getEnergyPoints();
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
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(std::string const & target);
  // Attributs
  
  private :
  	long int HitPoints;
  	static const int MaxHitPoints = 100;
  	int EnergyPoints;
  	static const int MaxEnergyPoints = 50;
  	int Level;
	std::string Name;
  	int MeleeDmg;
  	int RangedDmg;
  	int Armor;

};

#endif 
