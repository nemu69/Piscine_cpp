/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Yami.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 07:32:28 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 01:56:34 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Yami_H
# define Yami_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Sorcerer.hpp"

class Yami : public Sorcerer
{

  public :

  Yami(std::string name, std::string titre);
  Yami();
  ~Yami();
  Yami(Yami &o);
  Yami&operator=(const Yami &o) // Operator d'affectation
	{
		titre = o.getTitre();
		name = o.getName();
		return (*this);
	};
	void polymorph(Victim const &) const;
};

#endif
