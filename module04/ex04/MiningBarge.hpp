/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 07:25:59 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MiningBarge_H
# define MiningBarge_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"



struct lst
{
  IMiningLaser *m;
  lst *next;
};	

class MiningBarge
{

  	public :

	MiningBarge(std::string const & name);
  	MiningBarge();
  	~MiningBarge();
	MiningBarge(MiningBarge &o);

	// getteurs
	
	
	// Setteurs

	// Methodes 
	void equip(IMiningLaser* m);
	void mine(IAsteroid* as) const;

	protected :

  	lst *inventaire;
	lst *tail;
	int nbEquip;
};

#endif
