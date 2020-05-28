/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_H
# define Bureaucrat_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class Form;
class Bureaucrat
{

  	public :

	Bureaucrat(std::string name, int grade);
  	Bureaucrat();
  	~Bureaucrat();
	Bureaucrat(Bureaucrat &o);
  	Bureaucrat&operator=(const Bureaucrat &o) // Operator d'affectation
	{
		name = o.getName();
		grade = o.getGrade();
		return (*this);
	};

	// getteurs
	
	std::string const & getName() const;
	int getGrade() const;
	
	// Setteurs

	// Methodes
	void inc();
	void dec();
	void signForm(Form &form);
	void executeForm(Form &form);

	// Exceptions
	class GradeTooHighException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Grade is too high";
		};
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Grade is too low";
		};
	};

	protected :

	std::string name;
	int grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
