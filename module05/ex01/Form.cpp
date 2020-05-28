/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
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

Form::Form(std::string name, int signgrade, int exegrade)
{
	if (signgrade < 1 || exegrade < 1)
		throw GradeTooHighException();
	else if (signgrade < 1 || exegrade > 150)
		throw GradeTooLowException();
	else
	{
		this->name = name;
		this->sign = false;
		this->signgrade = signgrade;
		this->exegrade = exegrade;
	}
};

Form::Form(Form &o)
{
	name = o.getName();
	sign = o.getSigned();
	signgrade = o.getSignGrade();
	exegrade = o.getExeGrade();
}

Form::Form()
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

