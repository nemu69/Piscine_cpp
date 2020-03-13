/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 22:05:27 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/23 23:30:15 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::srand(std::time(nullptr));
	FragTrap John("Jhon");
	John.rangedAttack("Pikachu");
	John.takeDamage(10530);
	std::cout << "Point de vie actuel " << John.getHitPoints() << "\n";
	John.beRepaired(50);
	std::cout << "Point de vie actuel " << John.getHitPoints() << "\n";
	John.vaulthunter_dot_exe("Entraineuse Wii fit");
	John.vaulthunter_dot_exe("FDP");
	return (0);
}
