/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RadScorpion_HPP
# define RadScorpion_HPP
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
