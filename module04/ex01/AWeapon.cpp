/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/26 08:31:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

std::string AWeapon::getName() const
{
	return (name);
}

int 		AWeapon::getAPCost() const
{
	return (AP);
}

int 		AWeapon::getDamage() const
{
	return (damage);
}

void 		AWeapon::attack() const
{
	
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
  this->name = name;
  this->AP = apcost;
  this->damage = damage;
};

AWeapon::AWeapon(AWeapon &o)
{
	AP = o.getAPCost();
	damage = o.getDamage();
	name = o.getName();
}

AWeapon::AWeapon()
{

};

AWeapon::~AWeapon()
{
	
};
