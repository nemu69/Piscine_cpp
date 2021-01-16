/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Freezer.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Freezer_HPP
# define Freezer_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Enemy.hpp"

class Freezer : public Enemy
{

  	public :

  	Freezer(int hp, std::string const & type);
  	Freezer();
  	virtual ~Freezer();
	Freezer(Freezer &o);
  	Freezer&operator=(const Freezer &o) // Operator d'affectation
	{
		HP = o.getHP();
		type = o.getType();
		return (*this);
	};
};

#endif
