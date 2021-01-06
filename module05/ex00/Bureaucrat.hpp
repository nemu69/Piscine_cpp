/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cstdlib>

class Bureaucrat
{

  	public :

	Bureaucrat(std::string name, int grade);
  	Bureaucrat();
  	~Bureaucrat();
	Bureaucrat(const Bureaucrat &o);
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
