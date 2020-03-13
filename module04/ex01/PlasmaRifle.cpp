/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/27 00:13:01 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

void PlasmaRifle::attack() const
{
	puts("* piouuu piouuu piouuu *");
}

PlasmaRifle::PlasmaRifle(PlasmaRifle &o)
{
	AP = o.getAPCost();
	damage = o.getDamage();
	name = o.getName();
}

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

};

PlasmaRifle::~PlasmaRifle()
{

};
