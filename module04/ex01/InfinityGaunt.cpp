/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   InfinityGaunt.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/27 00:12:30 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "InfinityGaunt.hpp"

void InfinityGaunt::attack() const
{
	puts("* SLAP ! *");
}

InfinityGaunt::InfinityGaunt(InfinityGaunt &o)
{
	AP = o.getAPCost();
	damage = o.getDamage();
	name = o.getName();
}

InfinityGaunt::InfinityGaunt() : AWeapon("InfinityGaunt", 40, 99999)
{

};

InfinityGaunt::~InfinityGaunt()
{

};
