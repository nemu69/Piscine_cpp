/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/27 00:12:30 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

void PowerFist::attack() const
{
	puts("* pschhh... SBAM! *");
}

PowerFist::PowerFist(PowerFist &o)
{
	AP = o.getAPCost();
	damage = o.getDamage();
	name = o.getName();
}

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50)
{

};

PowerFist::~PowerFist()
{

};
