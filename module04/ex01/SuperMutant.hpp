/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperMutant_HPP
# define SuperMutant_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{

  	public :

  	SuperMutant(int hp, std::string const & type);
  	SuperMutant();
  	virtual ~SuperMutant();
	SuperMutant(SuperMutant &o);
  	SuperMutant&operator=(const SuperMutant &o) // Operator d'affectation
		{
			HP = o.getHP();
			type = o.getType();
			return (*this);
		};
	void	takeDamage(int damage);
};

#endif
