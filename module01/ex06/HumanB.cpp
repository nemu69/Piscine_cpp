/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:10:06 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:06:52 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

int		HumanB::setWeapon(Weapon& weap)
{
	weapon = &weap;
	return (1);
}

int		HumanB::attack()
{
	std::cout << name << " attacks with his " << weapon->type << "\n";
	return (1);
}

HumanB::HumanB(std::string str)
{
	name = str;
	//weapon = Weapon();
}

HumanB::HumanB()
{
	name = "John Doe";
	//weapon = Weapon();
}