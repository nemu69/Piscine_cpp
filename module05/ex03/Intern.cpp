/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form*	Intern::makeForm(std::string name, std::string target)
{
	list.index[0] = new RobotomyRequestForm(target);
	list.index[1] = new ShrubberyCreationForm(target);
	list.index[2] = new PresidentialPardonForm(target);
	int i = 0;
	int find = -1;
	while (i < 3)
	{
		if (list.index[i]->getName() == name)
			find = i;
		else
			delete list.index[i];
		i++;
	}
	if (find < 0)
		throw FormDontExist();
	std::cout << "Intern create " << name << std::endl;
	return (list.index[find]);
}

Intern::Intern(const Intern &o)
{

}

Intern::Intern()
{
	
};

Intern::~Intern()
{

};
