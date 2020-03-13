/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 20:07:49 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/22 03:41:37 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

// OPERATEURS

bool Fixed::operator==(const Fixed& a)
{
	return (a.toFloat() == this->toFloat());
}

bool Fixed::operator!=(const Fixed& a)
{
	return (a.toFloat() != this->toFloat());
}

bool Fixed::operator>(const Fixed& a)
{
	return (a.toFloat() > this->toFloat());
}

bool Fixed::operator<(const Fixed& a)
{
	return (a.toFloat() < this->toFloat());
}

bool Fixed::operator>=(const Fixed& a)
{
	return (a.toFloat() >= this->toFloat());
}

bool Fixed::operator<=(const Fixed& a)
{
	return (a.toFloat() <= this->toFloat());
}

Fixed Fixed::operator+(const Fixed& a)
{
	return (Fixed(a.toFloat() + this->toFloat()));
}

Fixed Fixed::operator-(const Fixed& a)
{
	return (Fixed(a.toFloat() - this->toFloat()));
}

Fixed Fixed::operator*(const Fixed& a)
{
	return (Fixed(a.toFloat() * this->toFloat()));
}

Fixed Fixed::operator/(const Fixed& a)
{
	return (Fixed(a.toFloat() / this->toFloat()));
}

Fixed &Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	value++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed Fixed::operator--(int) 
{
	Fixed tmp(*this);
	value--;
	return (tmp);
}

// MIN~MAX

Fixed Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a.toFloat() > b.toFloat() ? a : b);
}

Fixed min(const Fixed& a, const Fixed& b)
{
	return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed max(const Fixed& a, const Fixed& b)
{
	return (a.toFloat() > b.toFloat() ? a : b);
}
