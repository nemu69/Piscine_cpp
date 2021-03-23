/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/27 00:06:01 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << Name << " attacks " << target << " à distance, causant " << getRangedDmg() << " points de dégâts !\n";
}
void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << Name << " attacks " << target << " au corps à corps, causant " << getMeeleDmg() << " points de dégâts !\n";
}

std::string   randomJoke()
{
    int i = (std::rand() % 5) + 1;
    std::string  Joke1 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke2 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke3 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke4 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";
    std::string  Joke5 = "Claptrap: \"Knock-knock.\" Summoned bot: \"Who's there?\" Claptrap: \"Tat.\" Summoned bot: \"Tat who?\" Claptrap: \"Not until you're older.\"\n";

    switch (i)
	{
	case 1:
		std::cout << "Attack one\n";
		return (Joke1);
		break;
	case 2:
		std::cout << "Attack two\n";
		return (Joke2);
		break;
	case 3:
		std::cout << "Attack three\n";
		return (Joke3);
		break;
	case 4:
		std::cout << "Attack four\n";
		return (Joke4);
		break;
	case 5:
		std::cout << "Attack five\n";
		return (Joke5);
		break;
	default:
		break;
	}
	return (Joke1);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (EnergyPoints < 25)
		std::cout << "Your energy is too low " << EnergyPoints << " (25 required)\n";
	else
	{
		EnergyPoints -= 25;
		EnergyPoints < 0 ? EnergyPoints = 0 : 0;
		std::cout << "Run vaulthunter_dot_exe... Analyzing... Done !\n" << randomJoke();
		std::cout << "FR4G-TP " << Name << " attacks " << target << "\n";
		if (EnergyPoints == 0)
			std::cout << "Your energy is at zero :( it's so BAAAAAD\n";
	}
}

FragTrap::FragTrap() : ClapTrap("N3mu" , 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << Name << " : Recompiling my combat code!\n";
};

FragTrap::FragTrap(std::string Name) : ClapTrap(Name , 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << Name << " : Recompiling my combat code!\n";
};

FragTrap::~FragTrap()
{
	std::cout << Name << " : Argh arghargh death gurgle gurglegurgle urgh... death.\n";
};
