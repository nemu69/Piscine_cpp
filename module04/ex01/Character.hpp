/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/02/26 08:38:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Character_H
# define Character_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{

  	public :

	Character(std::string const & name);
  	Character();
  	~Character();
	Character(Character &o);
  	Character&operator=(const Character &o) // Operator d'affectation
	{
		name = o.getName();
		AP = o.AP;
		return (*this);
	};

	// getteurs
	std::string virtual getName() const;
	std::string virtual getWeaponName() const;
	int					getWeapon() const;
	int 				getAP() const;
	
	// Setteurs

	// Methodes 
  	void recoverAP();
	void equip(AWeapon* weapon);
	void attack(Enemy* enemy);

	protected :

  	std::string name;
	int AP;
	AWeapon* weapon;
};

std::ostream &operator<<(std::ostream &o, Character const &rhs);

#endif
