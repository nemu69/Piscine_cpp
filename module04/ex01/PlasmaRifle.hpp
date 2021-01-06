/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PlasmaRifle_HPP
# define PlasmaRifle_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

  	public :

  	PlasmaRifle();
  	virtual ~PlasmaRifle();
	PlasmaRifle(PlasmaRifle &o);
  	PlasmaRifle&operator=(const PlasmaRifle &o) // Operator d'affectation
		{
			AP = o.getAPCost();
			damage = o.getDamage();
			name = o.getName();
			return (*this);
		};

	virtual void attack() const;
};

#endif
