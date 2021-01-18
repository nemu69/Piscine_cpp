/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/14 11:48:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << Name << " attacks " << target << " à distance, causant " << getRangedDmg() << " points de dégâts !\n";
}
void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << Name << " attacks " << target << " au corps à corps, causant " << getMeeleDmg() << " points de dégâts !\n";
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5] = {
	"Hello, newcomer! Find me a lemon, and this door shall be yours.\n",
	"Je donne 10% de vos Kamas no arnak\n",
	"Tell me a joke, and maybe I'll consider opening. Wait, that's a great joke!\n",
	"I'm SC4V-TP. I won't let you go through, unless you solve my riddle.\n",
	"Fetch me a mojito, and I'll call quits on this one.\n"
	};
	std::cout << "Run challengeNewcomer... Analyzing... Done !\n" << challenges[rand() % 5];
	std::cout << target << " is challenged\n";
}

ScavTrap::ScavTrap() : ClapTrap("J3r0me" , 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << Name << " : Walk through the door and you won't come back...!\n";
};

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name , 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << Name << " : Walk through the door and you won't come back...!\n";
};

ScavTrap::~ScavTrap()
{
	std::cout << Name << " : Guarding gate is fun ... was fun...\n";
};
