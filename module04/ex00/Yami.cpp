/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Yami.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 07:31:50 by nepage            #+#    #+#             */
/*   Updated: 2020/02/25 07:42:14 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Yami.hpp"

void 	Yami::polymorph(Victim const &po) const
{
	po.getPolymorphed();
}

Yami::Yami(std::string name, std::string titre) : Sorcerer(name, titre)
{
	std::cout << "DUDUDUDUDUEL\n";
};

Yami::Yami()
{

};

Yami::Yami(Yami &o)
{
	titre = o.getTitre();
	name = o.getName();
}

Yami::~Yami()
{
	std::cout << name << ", " << titre << ", is dead. Soon in Shadow Realm!\n";
};
