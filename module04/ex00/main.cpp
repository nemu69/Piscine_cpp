/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 07:10:39 by nepage            #+#    #+#             */
/*   Updated: 2021/01/16 13:01:22 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Correcteur.hpp"

int main()
{
	std::cout << "---- A new magic World -----" << std::endl << std::endl;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Correcteur Tu("Toi");
    Victim paul("Paul");

	std::cout << std::endl << "---- Talk about us -----"<< std::endl << std::endl;
    std::cout << robert << jim << joe << Tu << paul;

	std::cout << std::endl << "---- TRANSFORMATION- ----"<< std::endl << std::endl;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(Tu);
    robert.polymorph(paul);

    //Sorcerer test;  // Ne peut etre instantcie sans parametre

    return 0;
}