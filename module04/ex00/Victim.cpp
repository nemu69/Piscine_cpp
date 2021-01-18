/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/25 07:40:31 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

std::string Victim::getName() const 
{
	return (name);
}

int     Victim::set_Victim()
{
    std::string newname;

	puts("\nNew name :");
  	std::cin >> newname;

  	name = newname;

  	return (1);
}

void 	Victim::getPolymorphed() const
{
	std::cout << name << " has been turned into a cute little sheep! " << std::endl;
	
}

Victim::Victim(std::string name)
{
  this->name = name;
  std::cout << "Some random victim called " << name << " just appeared! " << std::endl;
	
};

Victim::Victim(const Victim &o)
{
	name = o.getName();
}

Victim::Victim()
{

};

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reasons! " << std::endl;
	
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters! " << std::endl;
	
	return o;
}
