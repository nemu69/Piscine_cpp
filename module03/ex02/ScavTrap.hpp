/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ScavTrap_HPP
# define  ScavTrap_HPP
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
	ScavTrap(const ScavTrap &o); // Constructeur de recopie
	virtual ~ScavTrap(); // Destructeur

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void challengeNewcomer(std::string const & target);

};

#endif 
