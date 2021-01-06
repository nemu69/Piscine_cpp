/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DeepCoreMiner_HPP
# define DeepCoreMiner_HPP
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
