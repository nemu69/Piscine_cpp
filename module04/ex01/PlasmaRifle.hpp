/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/25 07:45:39 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PlasmaRifle_H
# define PlasmaRifle_H
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
