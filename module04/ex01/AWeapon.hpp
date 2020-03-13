/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/26 08:31:43 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWeapon_H
# define AWeapon_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

class AWeapon
{

  	public :

  	AWeapon(std::string const & name, int apcost, int damage);
  	AWeapon();
  	virtual ~AWeapon();
	AWeapon(AWeapon &o);
  	AWeapon&operator=(const AWeapon &o) // Operator d'affectation
		{
			AP = o.getAPCost();
			damage = o.getDamage();
			name = o.getName();
			return (*this);
		};

	// getteurs
  	std::string virtual getName() const;
  	int getAPCost() const;
  	int getDamage() const;
	
	// Setteurs

	// Methodes 
  	virtual void attack() const = 0;

	protected :
	
  	int AP;
  	int damage;
  	std::string name;
};

#endif
