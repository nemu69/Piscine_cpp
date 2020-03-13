/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/02/26 08:38:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DeepCoreMiner_H
# define DeepCoreMiner_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <list>
#include <iterator>
#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class DeepCoreMiner : public IMiningLaser
{

  	public :

  	DeepCoreMiner();
  	~DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner &);
  	DeepCoreMiner&operator=(const DeepCoreMiner &) // Operator d'affectation
	{
		return (*this);
	};

	// getteurs
	
	// Setteurs

	// Methodes 
	void mine(IAsteroid* as);
};

#endif
