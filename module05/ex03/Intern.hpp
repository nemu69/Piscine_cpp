/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_H
# define Intern_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

struct allForm
{
	Form *index[3];
};	

class Intern
{

  	public :

  	Intern();
  	~Intern();
	Intern(const Intern &o);
  	Intern&operator=(const Intern &o) // Operator d'affectation
	{
		return (*this);
	};

	// getteurs

	// Setteurs

	// Methodes
	Form *makeForm(std::string name, std::string target);	
	
	// Exceptions
	class FormDontExist : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Error form dont exist";
		};
	};

	private :

	allForm list;
};

#endif
