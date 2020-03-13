/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/26 08:00:55 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SuperMutant_H
# define SuperMutant_H
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
