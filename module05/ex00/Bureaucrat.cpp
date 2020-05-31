/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

std::string const & Bureaucrat::getName() const
{
	return (name);
}

int 			 	Bureaucrat::getGrade() const
{
	return (grade);
}

void 			 	Bureaucrat::inc()
{
	if (grade - 1 < 1)
		throw GradeTooHighException();
	else
		grade--;
}

void 			 	Bureaucrat::dec()
{
	if (grade + 1 > 150)
		throw GradeTooLowException();
	else
		grade++;
}

Bureaucrat::Bureaucrat(std::string name, int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
	{
		this->name = name;
		this->grade = grade;
	}
};

Bureaucrat::Bureaucrat(const Bureaucrat &o)
{
	name = o.name;
	grade = o.grade;
}

Bureaucrat::Bureaucrat()
{

};

Bureaucrat::~Bureaucrat()
{

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".\n";
	return o;
}

