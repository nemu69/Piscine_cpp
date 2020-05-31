/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:39:16 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 00:48:46 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const & 	AMateria::getType() const //Returns the materia type
{
	return(type);
}

unsigned int 			AMateria::getXP() const //Returns the Materia's XP
{
	return(_xp);
}

void 					AMateria::use(ICharacter&)
{
	
}

void 					AMateria::setXP(unsigned int xp)
{
	_xp = xp;
}

AMateria::AMateria(const AMateria &o)
{
	_xp = o._xp;
}

AMateria::AMateria(std::string const & type)
{
	_xp = 0;
	this->type = type;
}

AMateria::AMateria()
{
	
};

AMateria::~AMateria()
{
	
};
