/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 04:51:37 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{

  public :
  
  	FragTrap (); // Constructeur par défaut
	FragTrap(std::string Name);
	FragTrap(FragTrap &o); // Constructeur de recopie
	~FragTrap(); // Destructeur éventuellement virtuel

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void vaulthunter_dot_exe(std::string const & target);


};

#endif 
