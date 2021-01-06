/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:08:04 by nepage-l          #+#    #+#             */
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
#include <cmath>

class Fixed
{

  public :
  
  	Fixed (); // Constructeur par défaut
  	Fixed(const int width); // Constructeur argument
  	Fixed(const float width);
	Fixed(const Fixed &o); // Constructeur de recopie
	~Fixed(); // Destructeur éventuellement virtuel
	Fixed&operator=(const Fixed &o) // Operator d'affectation
	{
		puts("Assignation operator called");
		value = o.getRawBits();
		return (*this);

	};

	float toFloat(void) const;
	int toInt(void) const;

  	// Geteurs
  	int getRawBits() const;
  	// Seteurs
  	void setRawBits(int const raw);
  

  // Attributs
  
  private :
  	static const int bit;
  	int value;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif 
