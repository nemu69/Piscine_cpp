/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/23 22:15:42 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef  NinjaTrap_H
# define  NinjaTrap_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class  NinjaTrap : public ClapTrap
{

  public :
  
  	NinjaTrap (); // Constructeur par défaut
	NinjaTrap(std::string Name);
	NinjaTrap( NinjaTrap &o); // Constructeur de recopie
	~NinjaTrap(); // Destructeur éventuellement virtuel

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void ninjaShoebox(ScavTrap &SC4V);
	void ninjaShoebox(FragTrap &FR4G);
	void ninjaShoebox(ClapTrap &CL4P);

};

#endif 
