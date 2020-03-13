/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 18:10:06 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:06:44 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

int		HumanA::attack()
{
	std::cout << name << " attacks with his " << weapon->type << "\n";
	return (1);
}

HumanA::HumanA(std::string str, Weapon& weap)
{
	name = str;
	weapon = &weap;
}

HumanA::HumanA()
{
	name = "John Doe";
	weapon = new Weapon();
}
