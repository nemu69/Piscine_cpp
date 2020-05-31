/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertSca.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ConvertSca_H
# define ConvertSca_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>

class ConvertSca
{

  	public :

	ConvertSca(std::string conv);
  	ConvertSca();
  	~ConvertSca();
	ConvertSca(const ConvertSca &o);
  	ConvertSca&operator=(const ConvertSca &o) // Operator d'affectation
	{
		conv = o.getConv();
		return (*this);
	};

	// getteurs
	
	std::string const & getConv() const;

	// Setteurs

	// Methodes
	void convChar();
	void convInt();
	void convFloat();
	void convDouble();

	// Exceptions
	class NonDisplayable : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Non displayable";
		};
	};

	class ImpossibleConvert : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "impossible";
		};
	};

	private :

	std::string conv;
};

#endif
