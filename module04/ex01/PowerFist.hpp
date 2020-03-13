/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/25 07:44:42 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PowerFist_H
# define PowerFist_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

  	public :
	  
  	PowerFist();
  	virtual ~PowerFist();
	PowerFist(PowerFist &o);
  	PowerFist&operator=(const PowerFist &o) // Operator d'affectation
		{
			AP = o.getAPCost();
			damage = o.getDamage();
			name = o.getName();
			return (*this);
		};

	void attack() const;
};

#endif
