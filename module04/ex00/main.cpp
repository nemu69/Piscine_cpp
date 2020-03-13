/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 07:10:39 by nepage            #+#    #+#             */
/*   Updated: 2020/02/25 07:37:54 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Yami.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
Sorcerer robert("Robert", "the Magnificent");
Victim jim("Jimmy");
Peon joe("Joe");
std::cout << robert << jim << joe;
robert.polymorph(jim);
robert.polymorph(joe);
Yami Yugi("Yugi", "The duellist");
std::cout << Yugi;
Victim paul("Paul");
Yugi.polymorph(paul);
Yugi.set_Sorcerer();
std::cout << Yugi;
Yami salut;
salut = Yugi;
return 0;
}