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

#include "ZombieHorde.hpp"

int main()
{
	int i;
	std::srand(std::time(nullptr));
	std::cout << "How many Z's do you want ?\n";
	std::cin >> i;
	ZombieHorde* hey;
	hey = new ZombieHorde(i);
	hey->announce();
	delete(hey);
  	return (0);
}
