/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/11/30 13:50:30 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

std::string Sorcerer::getName() const
{
	return (name);
}
std::string Sorcerer::getTitre() const
{
	return (titre);
}

int     Sorcerer::set_Sorcerer()
{
    std::string newname;
	std::string newtitre;
	puts("\nNew name :");
  	std::cin >> newname;
  	puts("\nNew type :");
  	std::cin >> newtitre;
  	name = newname;
  	titre = newtitre;
  	return (1);
}

void 	Sorcerer::polymorph(Victim const &po) const
{
	po.getPolymorphed();
}

Sorcerer::Sorcerer(std::string name, std::string titre)
{
  this->name = name;
  this->titre = titre;
  std::cout << name << ", " << titre << ", is born!" << std::endl;
};

Sorcerer::Sorcerer()
{

};

Sorcerer::Sorcerer(Sorcerer &o)
{
	titre = o.getTitre();
	name = o.getName();
}

Sorcerer::~Sorcerer()
{
	std::cout << name << ", " << titre << ", is dead. Consequences will never be the same! " << std::endl;
	
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitre() << ", and i like ponies! " << std::endl;
	
	return o;
}
