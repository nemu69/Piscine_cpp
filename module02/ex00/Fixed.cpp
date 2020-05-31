/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 19:59:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:25:17 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int  Fixed::getRawBits()
{
	puts("getRawBits member function called");
	return (fixe);
}

void  Fixed::setRawBits(int const raw)
{
	puts("setRawBits member function called");
  	fixe = raw;
}

Fixed::Fixed(const Fixed &o)
{
	puts("Copy constructor called");
	fixe = o.getRawBits();

};


Fixed::Fixed()
{
	puts("Default constructor called");
	fixe = 0;
};

Fixed::~Fixed()
{
	puts("Destructor called");
};
