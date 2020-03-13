/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:08:04 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/22 03:41:31 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H
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
  
	bool operator==(const Fixed& a);
	bool operator!=(const Fixed& a);
	bool operator>(const Fixed& a);
	bool operator<(const Fixed& a);
	bool operator<=(const Fixed& a);
	bool operator>=(const Fixed& a);
	Fixed operator-(const Fixed& a);
	Fixed operator*(const Fixed& a);
	Fixed operator+(const Fixed& a);
	Fixed operator/(const Fixed& a);
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	static Fixed max(const Fixed& a, const Fixed& b);
	static Fixed min(const Fixed& a, const Fixed& b);

  // Attributs
  
  private :
  	static const int bit = 8;
  	int value;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
Fixed max(const Fixed& a, const Fixed& b);
Fixed min(const Fixed& a, const Fixed& b);

#endif 
