/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

std::string const & PresidentialPardonForm::getTarget() const
{
	return (target);
}

void	PresidentialPardonForm::setTarget(std::string target)
{
	this->target = target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << target << " has been pardoned by Zafod Beeblebrox.\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5)
{
	this->target = target;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &o)
{
	target = o.getTarget();
}

PresidentialPardonForm::PresidentialPardonForm()
{

};

PresidentialPardonForm::~PresidentialPardonForm()
{

};
