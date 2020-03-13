/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 07:32:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ScavTrap_H
# define  ScavTrap_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>
#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{

  public :
  
  	ScavTrap (); // Constructeur par défaut
	ScavTrap(std::string Name);
	ScavTrap( ScavTrap &o); // Constructeur de recopie
	~ScavTrap(); // Destructeur éventuellement virtuel

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void challengeNewcomer(std::string const & target);

};

#endif 
