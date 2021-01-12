/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Yami.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 07:32:28 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Yami_HPP
# define Yami_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Sorcerer.hpp"

class Yami : public Sorcerer
{
  private :
    Yami();
  public :

    Yami(std::string name, std::string titre);
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
