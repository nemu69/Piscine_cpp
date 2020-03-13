/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:05:27 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 00:24:04 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	FragTrap John("Jhon");
	ScavTrap Jeje;
	John.rangedAttack("Pikachu");
	John.takeDamage(10530);
	std::cout << "Point de vie actuel " << John.getHitPoints() << "\n\n";
	John.beRepaired(50);
	std::cout << "Point de vie actuel " << John.getHitPoints() << "\n\n";
	
	John.vaulthunter_dot_exe("Entraineuse Wii fit");
	John.vaulthunter_dot_exe("FDP");
	John.vaulthunter_dot_exe("Entraineuse Wii fit");
	John.vaulthunter_dot_exe("FDP");

	Jeje.challengeNewcomer("Little Mac");
	return (0);
}
