/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Correcteur.cpp                                         	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 07:00:34 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Correcteur.hpp"

void 	Correcteur::getPolymorphed() const
{
	std::cout << name << " has been turned into a awesome 100! " << std::endl;
	
}

Correcteur::Correcteur(std::string name) : Victim(name)
{
	std::cout << "Correct.\n";
};

Correcteur::Correcteur(const Correcteur &o) : Victim(o)
{
	std::cout << "Correct.\n";
}

Correcteur::Correcteur()
{

};

Correcteur::~Correcteur()
{
	std::cout << "La correction est longue...\n";
};