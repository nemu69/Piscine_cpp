/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/02/26 08:38:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef TacticalMarine_H
# define TacticalMarine_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <list>
#include <iterator>
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

  	public :

  	TacticalMarine();
  	~TacticalMarine();
	TacticalMarine(TacticalMarine &);
  	TacticalMarine&operator=(const TacticalMarine &) // Operator d'affectation
	{
		return (*this);
	};

	// getteurs
	
	// Setteurs

	// Methodes 
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};

#endif
