/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:05:27 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 05:26:48 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	SuperTrap goku("Goku");
	FragTrap John("John");
	
	goku.stats();
	
	goku.ninjaShoebox(John);
	goku.vaulthunter_dot_exe("Coca");
	ScavTrap Jeje;
	ClapTrap hey(Jeje);
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
	Jeje.rangedAttack("Pit malefique");
	Jeje.takeDamage(30);
	std::cout << "Point de vie actuel " << hey.getHitPoints() << "\n\n";
	hey.takeDamage(30);
	std::cout << "Point de vie actuel " << hey.getHitPoints() << "\n\n";

	NinjaTrap naruto("Naruto");
	naruto.ninjaShoebox(John);


	return (0);
}
