/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MiningBarge_HPP
# define MiningBarge_HPP
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
