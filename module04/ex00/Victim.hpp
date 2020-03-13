/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/25 07:40:10 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Victim_H
# define Victim_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>

class Victim
{

  public :
  
  Victim(std::string name);
  Victim();
  ~Victim();
  Victim(Victim &o);
  Victim&operator=(const Victim &o) // Operator d'affectation
	{
		name = o.getName();
		return (*this);
	};

  std::string getName() const;

  int set_Victim();
  
  virtual void getPolymorphed() const;

  protected :
  std::string name;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
