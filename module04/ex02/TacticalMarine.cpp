/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/02/27 00:18:31 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

ISpaceMarine* 		TacticalMarine::clone() const
{
	ISpaceMarine *ret = new TacticalMarine();
	return(ret);
}

void 				TacticalMarine::battleCry() const
{
	puts("For the holy PLOT !");
}

void 				TacticalMarine::rangedAttack() const
{
	puts("* attacks with a bolter *");
}

void 				TacticalMarine::meleeAttack() const
{
	puts("* attacks with a chainsword *");
}

TacticalMarine::TacticalMarine(TacticalMarine &)
{

}

TacticalMarine::TacticalMarine()
{
	puts("Tactical Marine ready for battle !");
};

TacticalMarine::~TacticalMarine()
{
	puts("Aaargh ...");
};
