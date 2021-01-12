/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:58 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Victim_HPP
# define Victim_HPP
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
  virtual ~Victim();
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
