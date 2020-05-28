/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2020/03/07 05:53:33 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_H
# define Form_H
#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{

  	public :

	Form(std::string name, int signgrade, int exegrade);
  	Form();
  	~Form();
	Form(Form &o);
  	Form&operator=(const Form &o) // Operator d'affectation
	{
		name = o.getName();
		sign = o.getSigned();
		signgrade = o.getSignGrade();
		exegrade = o.getExeGrade();
		return (*this);
	};

	// getteurs
	
	std::string const & getName() const;
	int getSignGrade() const;
	int getExeGrade() const;
	bool getSigned() const;
	
	// Setteurs

	// Methodes
	void beSigned(Bureaucrat &bu);
	virtual void execute(Bureaucrat const &executor) const;

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

	class NotSigned : public std::exception
	{
		virtual const char* what() const throw()
		{
			return "Form is not signed";
		};
	};

	private :

	std::string name;
	bool sign;
	int signgrade;
	int exegrade;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
