/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:48:55 by nepage-l          #+#    #+#             */
/*   Updated: 2021/01/06 10:30:36 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string.h>
#include <ctime>
#include <bitset>

class Fixed
{

  public :
  
  	Fixed (); // Constructeur par défaut
	Fixed(const Fixed &o); // Constructeur de recopie
	~Fixed(); // Destructeur éventuellement virtuel
	Fixed&operator=(const Fixed &o) // Operator d'affectation
	{
		puts("Assignation operator called");
		fixe = o.getRawBits();
		return (*this);

	};

  	// Geteurs
  	int getRawBits() const;
  	// Seteurs
  	void setRawBits(int const raw);
  

  // Attributs
  
  private :
  	static const int bit = 8;
  	int fixe;
};

#endif 
