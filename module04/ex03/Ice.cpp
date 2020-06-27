/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:56:50 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 00:20:28 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

AMateria* 	Ice::clone() const
{
	AMateria *ret = new Ice();
	ret->setXP(this->getXP());
	return (ret);
}

void 		Ice::use(ICharacter& target)
{
	std::cout  << "* shoots an ice bolt at " << target.getName() << " *\n";
	this->setXP(getXP() + 10);
}

Ice::Ice(const Ice&)
{
	
}

Ice::Ice() : AMateria("ice")
{
	
};

Ice::~Ice()
{
	
};
