/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/27 00:02:47 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

void 		SuperMutant::takeDamage(int damage)
{
	if (damage - 3 > 0)
		HP = HP - (damage - 3) < 0 ? HP = 0 : 0;
}

SuperMutant::SuperMutant(SuperMutant &o)
{
	HP = o.getHP();
	type = o.getType();
}

SuperMutant::SuperMutant() : Enemy(170 , "Super Mutant")
{
	puts("Gaaah. Break everything !");
};

SuperMutant::~SuperMutant()
{
	puts("Aaargh ...");
};
