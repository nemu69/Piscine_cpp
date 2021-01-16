/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Correcteur.hpp                                         	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 07:00:21 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Correcteur_HPP
# define Correcteur_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Victim.hpp"

class Correcteur : public Victim
{

  public :
  
  Correcteur(std::string name);
  Correcteur();
  virtual ~Correcteur();
  Correcteur(Correcteur &o);
  Correcteur&operator=(const Correcteur &o) // Operator d'affectation
	{
		name = o.getName();
		return (*this);
	};
	void getPolymorphed() const;
};

#endif
