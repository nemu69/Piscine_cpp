/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/12/05 11:47:04 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string const & Form::getName() const
{
	return (name);
}

int 			 	Form::getSignGrade() const
{
	return (signgrade);
}

int 			 	Form::getExeGrade() const
{
	return (exegrade);
}

bool 			 	Form::getSigned() const
{
	return (sign);
}

void 			 	Form::beSigned(Bureaucrat &bu)
{
	if (sign)
		puts("Form already signed");
	else if (signgrade < bu.getGrade())
		throw GradeTooLowException();
	else
		sign = true;
}

Form::Form(const std::string name, const int signgrade, const int exegrade) : name(name), sign(false), signgrade(signgrade), exegrade(exegrade)
{
	if (signgrade < 1 || exegrade < 1)
		throw GradeTooHighException();
	else if (signgrade < 1 || exegrade > 150)
		throw GradeTooLowException();
};

Form::Form(const Form &o) : name(o.getName()), sign(o.getSigned()), signgrade(o.getSignGrade()), exegrade(o.getExeGrade())
{
	
}

Form::Form() : name("ShrubberyCreationForm"), sign(false), signgrade(145), exegrade(137)
{

};

Form::~Form()
{

};

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << ", Form grade to sign " << rhs.getSignGrade() << " and grade to execute " << rhs.getExeGrade() << ".\n";
	return o;
}

