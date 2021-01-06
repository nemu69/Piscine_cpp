/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP
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
