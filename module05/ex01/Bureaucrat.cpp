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

void 			 	Bureaucrat::signForm(Form &form)
{
	if (form.getSigned())
		puts("Form already signed");
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << name << " signs " << form.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << name << " can't sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
	{
		this->grade = grade;
	}
};

Bureaucrat::Bureaucrat(const Bureaucrat &o) : name(o.name)
{
	grade = o.grade;
};

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

