/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP
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
	long int	shortestSpan();
	long int	longestSpan();
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

