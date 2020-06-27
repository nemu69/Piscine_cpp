/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_H
# define Span_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <stdexcept>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <list>
#include <map>
#include <algorithm>

class Span
{

  	public :

	Span(unsigned int n);
  	~Span();
	Span(const Span &o);
  	Span&operator=(const Span &o) // Operator d'affectation
	{
		lst = o.lst;
		nb = o.nb;
		return (*this);
	};

	// getteurs
	
	// Setteurs

	// Methodes
	void addNumber(int number);
	int	shortestSpan();
	int	longestSpan();
	void	print_lst();

	// Exceptions
	class LimitAdd : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Limit exceeded addNumber";
		};
	};

	class SpanNotFound : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Span not found (need 2 number)";
		};
	};

	private :

	std::list<int> lst;
	size_t nb;
};

#endif

