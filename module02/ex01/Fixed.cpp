/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:07:49 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:07:56 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::bit = 8;

float Fixed::toFloat(void) const
{
	return ((float)(value / roundf((1 << Fixed::bit))));
}

int Fixed::toInt(void) const
{
	return (value >> Fixed::bit);
}

int  Fixed::getRawBits() const
{
	return (value);
}

void  Fixed::setRawBits(int const raw)
{
  	value = raw;
}

Fixed::Fixed(int const value)
{
	std::cout << "Int constructor called" << std::endl;

	this->value = value << Fixed::bit;
}

Fixed::Fixed(float const value)
{
	std::cout << "Float constructor called" << std::endl;

	this->value = (int)roundf(value * (1 << Fixed::bit));
}

Fixed::Fixed(const Fixed &o)
{
	puts("Copy constructor called");
	value = o.getRawBits();

};


Fixed::Fixed()
{
	puts("Default constructor called");
	value = 0;
};

Fixed::~Fixed()
{
	puts("Destructor called");
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}
