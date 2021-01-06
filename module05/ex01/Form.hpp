/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:36 by nepage            #+#    #+#             */
/*   Updated: 2021/01/06 10:30:35 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP
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

	Form(const std::string name, const int signgrade, const int exegrade);
  	Form();
  	~Form();
	Form(const Form &o);

	// getteurs
	
	std::string const & getName() const;
	int getSignGrade() const;
	int getExeGrade() const;
	bool getSigned() const;
	
	// Setteurs

	// Methodes
	void beSigned(Bureaucrat &bu);

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

	private :

	const std::string name;
	bool sign;
	const int signgrade;
	const int exegrade;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif
