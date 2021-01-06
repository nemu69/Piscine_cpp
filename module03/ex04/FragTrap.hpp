/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
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
	FragTrap(const FragTrap &o); // Constructeur de recopie
	~FragTrap(); // Destructeur éventuellement virtuel

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	void vaulthunter_dot_exe(std::string const & target);


};

#endif 
