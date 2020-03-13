/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:27:14 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:04:57 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void   randomChump()
{
    Zombie zombi;
    int i = 0;
    std::string yo = "abcdefghijklmnopqrstuvwxyz";
    std::string nam;
    while (i < 6)
    {
        nam[i] = yo[std::rand() % 24];
        i++;
    }
    zombi.name = nam.c_str();
    zombi.announce();
}

int main()
{
    std::srand(std::time(nullptr));
    ZombieEvent hey;

	randomChump();
    randomChump();
	delete(hey.zombi);
  	return (0);
}
