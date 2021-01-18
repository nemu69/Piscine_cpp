/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                         	:+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/24 07:00:21 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Peon_HPP
# define Peon_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Victim.hpp"

class Peon : public Victim
{

  public :
  
  Peon(std::string name);
  Peon();
  virtual ~Peon();
  Peon(const Peon &o);
  Peon&operator=(const Peon &o) // Operator d'affectation
	{
		name = o.getName();
		return (*this);
	};
	void getPolymorphed() const;
};

#endif
