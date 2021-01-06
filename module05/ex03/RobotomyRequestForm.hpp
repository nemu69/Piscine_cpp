/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

  	public :

	RobotomyRequestForm(std::string target);
  	RobotomyRequestForm();
  	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &o);
  	RobotomyRequestForm&operator=(const RobotomyRequestForm &o) // Operator d'affectation
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
