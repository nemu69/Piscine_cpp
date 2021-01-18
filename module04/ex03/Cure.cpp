/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 17:56:50 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 00:14:10 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

AMateria* 	Cure::clone() const
{
	AMateria *ret = new Cure();
	ret->setXP(this->getXP());
	return (ret);
}

void 		Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
	this->setXP(getXP() + 10);
}

Cure::Cure(const Cure &o) : AMateria(o)
{
	
}

Cure::Cure() : AMateria("cure")
{
	
};

Cure::~Cure()
{

};
