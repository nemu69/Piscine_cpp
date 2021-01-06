/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/02/26 08:38:18 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef AssaultTerminator_HPP
# define AssaultTerminator_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <list>
#include <iterator>
#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

  	public :

  	AssaultTerminator();
  	~AssaultTerminator();
	AssaultTerminator(AssaultTerminator &);
  	AssaultTerminator&operator=(const AssaultTerminator &) // Operator d'affectation
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
