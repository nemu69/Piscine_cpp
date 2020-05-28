/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 01:39:06 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

void NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << Name << " attacks " << target << " à distance, causant " << getRangedDmg() << " points de dégâts !\n";
}

void NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "NINJ4-TP " << Name << " attacks " << target << " au corps à corps, causant " << getMeeleDmg() << " points de dégâts !\n";
}

void NinjaTrap::ninjaShoebox(ScavTrap & SC4V)
{
	char answer;
	int count = 3;
	puts("Only me will become Hogake DATABAYO");
	SC4V.takeDamage(9999999);
	do
	{
		puts("Evil is not good, let's become friends ? (TAP y or n)");
		std::cin >> answer;
		count--;
		if (std::cin.fail())
  		{
      		std::cin.clear(); // reset failbit
      		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (answer == 'y' || answer == 'n')
			count = 0;
		else
		{
			answer = 0;
			count == 2 ? puts("Second chance bro") :
				puts("Last chance good choice or consequence :)");
		}
	} while (count);
	if (answer == 0 || answer == 'n')
	{
		puts("Pffff Omae wa mou shindeiru");
		SC4V.takeDamage(9999999);
	}
	else
	{
		puts("<3");
		SC4V.beRepaired(999999);
	}
}

void NinjaTrap::ninjaShoebox(FragTrap & FR4G)
{
	char answer;
	int count = 3;
	puts("Only me will become Hogake DATABAYO");
	FR4G.takeDamage(9999999);
	do
	{
		puts("Evil is not good, let's become friends ? (TAP y or n)");
		std::cin >> answer;
		count--;
		if (std::cin.fail())
  		{
      		std::cin.clear(); // reset failbit
      		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (answer == 'y' || answer == 'n')
			count = 0;
		else
		{
			answer = 0;
			count == 2 ? puts("Second chance bro") :
				puts("Last chance good choice or consequence :)");
		}
	} while (count);
	if (answer == 0 || answer == 'n')
	{
		puts("Pffff Omae wa mou shindeiru");
		FR4G.takeDamage(9999999);
	}
	else
	{
		puts("<3");
		FR4G.beRepaired(999999);
	}
}

void NinjaTrap::ninjaShoebox(ClapTrap & CL4P)
{
	char answer;
	int count = 3;
	puts("Only me will become Hogake DATABAYO");
	CL4P.takeDamage(9999999);
	do
	{
		puts("Evil is not good, let's become friends ? (TAP y or n)");
		std::cin >> answer;
		count--;
		if (std::cin.fail())
  		{
      		std::cin.clear(); // reset failbit
      		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		if (answer == 'y' || answer == 'n')
			count = 0;
		else
		{
			answer = 0;
			count == 2 ? puts("Second chance bro") :
				puts("Last chance good choice or consequence :)");
		}
	} while (count);
	if (answer == 0 || answer == 'n')
	{
		puts("Pffff Omae wa mou shindeiru");
		CL4P.takeDamage(9999999);
	}
	else
	{
		puts("<3");
		CL4P.beRepaired(999999);
	}
}

NinjaTrap::NinjaTrap() : ClapTrap("4dri3n" , 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << Name << " : Watashi wa Hokage ni naru !\n";
};

NinjaTrap::NinjaTrap(std::string Name) : ClapTrap(Name , 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << Name << " : Watashi wa Hokage ni naru !\n";
};

NinjaTrap::~NinjaTrap()
{
	std::cout << Name << " : Sasuke nande ... Datebayo...\n";
};
