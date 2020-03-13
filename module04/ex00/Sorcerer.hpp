/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/25 07:41:29 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sorcerer_H
# define Sorcerer_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Victim.hpp"

class Sorcerer
{

  public :

  Sorcerer(std::string name, std::string titre);
  Sorcerer();
  ~Sorcerer();
  Sorcerer(Sorcerer &o);
  Sorcerer&operator=(const Sorcerer &o) // Operator d'affectation
	{
		titre = o.getTitre();
		name = o.getName();
		return (*this);
	};

  std::string getName() const;
  std::string getTitre() const;

  int set_Sorcerer();

  virtual void polymorph(Victim const &) const;

  std::string titre;
  std::string name;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
