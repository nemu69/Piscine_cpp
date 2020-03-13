/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/02/26 08:38:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef KoalaSteroid_H
# define KoalaSteroid_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <list>
#include <iterator>
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"

class KoalaSteroid : public IAsteroid
{

  	public :

  	KoalaSteroid();
  	~KoalaSteroid();
	KoalaSteroid(KoalaSteroid &);
  	KoalaSteroid&operator=(const KoalaSteroid &o) // Operator d'affectation
	{
		name = o.getName();
		return (*this);
	};

	// getteurs
	
	// Setteurs

	// Methodes 
	std::string beMined(DeepCoreMiner *dpm) const;
	std::string beMined(StripMiner *sm) const;
	std::string getName() const;

	private :
		std::string name;
};

#endif
