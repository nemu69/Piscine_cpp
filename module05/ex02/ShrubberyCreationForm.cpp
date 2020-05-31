/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const & ShrubberyCreationForm::getTarget() const
{
	return (target);
}

void	ShrubberyCreationForm::setTarget(std::string target)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubberycCreation", 145, 137)
{
	this->target = target;
};

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	// Create and open a text file
	std::string filename;
	filename = target + "_shrubbery";
  	std::ofstream myfile;
 	myfile.open(filename.c_str());
 	// Write to the file
 	myfile << "         v \n\
        >X<\n\
         A\n\
        d$b\n\
      .d\\$$b.\n\
    .d$i$$\\$$b.\n\
       d$$@b\n\
      d\\$$$ib\n\
    .d$$$\\$$$b\n\
  .d$$@$$$$\\$$ib.\n\
      d$$i$$b\n\
     d\\$$$$@$b\n\
  .d$@$$\\$$$$$@b.\n\
.d$$$$i$$$\\$$$$$$b.\n\
        ###\n\
        ###\n\
        ###";

 	// Close the file
 	myfile.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o)
{
	target = o.getTarget();
}

ShrubberyCreationForm::ShrubberyCreationForm()
{

};

ShrubberyCreationForm::~ShrubberyCreationForm()
{

};
