/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/02/26 08:38:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AsteroKreog_HPP
# define AsteroKreog_HPP
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

class AsteroKreog : public IAsteroid
{

  	public :

  	AsteroKreog();
  	~AsteroKreog();
	AsteroKreog(const AsteroKreog &);
  	AsteroKreog&operator=(const AsteroKreog &o) // Operator d'affectation
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
