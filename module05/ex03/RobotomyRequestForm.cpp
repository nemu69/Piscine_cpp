/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::string const & RobotomyRequestForm::getTarget() const
{
	return (target);
}

void	RobotomyRequestForm::setTarget(std::string target)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45)
{
	this->target = target;
};

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	puts("* CRITCH-CRITCH CRATCH *");
	if (rand() % 2 && rand() % 2)
	{
		std::cout << target << " was successfully robotomized\n";
	}
	else
		std::cout << "FAILUUUUUUUUURE\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &o)
{
	target = o.getTarget();
}

RobotomyRequestForm::RobotomyRequestForm()
{

};

RobotomyRequestForm::~RobotomyRequestForm()
{

};
