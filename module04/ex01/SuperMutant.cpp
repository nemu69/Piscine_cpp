/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/14 15:32:46 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

void 		SuperMutant::takeDamage(int damage)
{
	if (damage - 3 > 0)
	{
		HP - (damage - 3) < 0 ? HP = 0 : HP -= (damage - 3);
	}
}

SuperMutant::SuperMutant(SuperMutant &o) : Enemy(o)
{
	puts("Gaaah. Break everything !");
}

SuperMutant::SuperMutant() : Enemy(170 , "Super Mutant")
{
	puts("Gaaah. Break everything !");
};

SuperMutant::~SuperMutant()
{
	puts("Aaargh ...");
};
