/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2020/03/03 00:21:05 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>

void ponyOnTheStack(std::string color, std::string magic);
void ponyOnTheHeap(std::string color, std::string magic);

class Pony
{


  public :

  Pony(std::string color, std::string magic);
  static int stat;
  // Geteurs
  int get_pony();
  // Seteurs
  int set_pony();



  private :

  std::string color;
  std::string magic;
};

#endif
