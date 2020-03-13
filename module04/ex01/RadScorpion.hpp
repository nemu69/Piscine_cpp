/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/26 08:05:00 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RadScorpion_H
# define RadScorpion_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{

  	public :

  	RadScorpion(int hp, std::string const & type);
  	RadScorpion();
  	virtual ~RadScorpion();
	RadScorpion(RadScorpion &o);
  	RadScorpion&operator=(const RadScorpion &o) // Operator d'affectation
	{
		HP = o.getHP();
		type = o.getType();
		return (*this);
	};
};

#endif
