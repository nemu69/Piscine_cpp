/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 01:39:06 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

void SuperTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << Name << " attacks " << target << " à distance, causant " << getRangedDmg() << " points de dégâts !\n";
}

void SuperTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << Name << " attacks " << target << " au corps à corps, causant " << getMeeleDmg() << " points de dégâts !\n";
}


SuperTrap::SuperTrap() : NinjaTrap("J3r0me")
{
	std::cout << Name << " : Je suis ni goku ni vegeta... Mais je n'ai pas besoin d'avoir un nom pour t'éliminer !!\n";
};

SuperTrap::SuperTrap(std::string Name) : ClapTrap(Name, 100, 100, 120, 120, 1, 60 ,20 ,5), NinjaTrap(Name), FragTrap(Name)
{
	std::cout << Name << " : Je suis ni goku ni vegeta... Mais je n'ai pas besoin d'avoir un nom pour t'éliminer !!\n";
};

SuperTrap::~SuperTrap()
{
	std::cout << Name << " : Oops la fusion est terminé\n";
};
