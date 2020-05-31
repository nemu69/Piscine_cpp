/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_H
# define ShrubberyCreationForm_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <fstream>
#include <exception>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

  	public :

	ShrubberyCreationForm(std::string target);
  	ShrubberyCreationForm();
  	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &o);
  	ShrubberyCreationForm&operator=(const ShrubberyCreationForm &o) // Operator d'affectation
	{
		target = o.getTarget();
		return (*this);
	};

	// getteurs
	std::string const & getTarget() const;

	// Setteurs
	void setTarget(std::string target);
	// Methodes
	void execute(Bureaucrat const & executor) const;	
	
	// Exceptions

	private :

	std::string target;
};

#endif
