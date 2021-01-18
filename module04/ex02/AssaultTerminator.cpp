/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/02/27 00:18:31 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

ISpaceMarine* 		AssaultTerminator::clone() const
{
	ISpaceMarine *ret = new AssaultTerminator();
	return(ret);
}

void 				AssaultTerminator::battleCry() const
{
	puts( "This code is unclean. PURIFY IT!");
}

void 				AssaultTerminator::rangedAttack() const
{
	puts( "* does nothing *");
}

void 				AssaultTerminator::meleeAttack() const
{
	puts("* attacks with chainfists *");
}


AssaultTerminator::AssaultTerminator(AssaultTerminator &)
{
	
}

AssaultTerminator::AssaultTerminator()
{
	puts("* teleports from space *");
};

AssaultTerminator::~AssaultTerminator()
{
	puts("I’ll be back ...");
};
