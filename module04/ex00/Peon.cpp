/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                         	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 07:00:34 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

void 	Peon::getPolymorphed() const
{
	std::cout << name << " has been turned into a pink pony! " << std::endl;
	
}

Peon::Peon(std::string name) : Victim(name)
{
  std::cout << "Zog zog.\n";
};

Peon::Peon(const Peon &o) : Victim(o)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon()
{

};

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
};