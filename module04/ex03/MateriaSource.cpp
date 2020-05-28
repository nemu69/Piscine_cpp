/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 00:11:13 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void 			MateriaSource::learnMateria(AMateria* m)
{
	lst *temp = new lst;
	lst *temp2 = new lst;
	temp2 = source;
	if (m && nbEquip < 4)
	{
		temp->m = m->clone();
		temp->next = NULL;
		if (source==NULL)
      	{
        	source=temp;
        	tail=temp;
        	temp=NULL;
      	}
		else
		{
			while (temp2)
			{
				temp2 = temp2->next;
			}
			tail->next=temp;
        	tail=temp;
		}
		nbEquip++;
	}
	else
		puts("FULL Materia !");
}

AMateria* 		MateriaSource::createMateria(std::string const & type)
{
	lst *temp = new lst;
	temp = source;
	while (temp)
	{
		if (temp->m->getType() == type)
		{
			return (temp->m);
		}
		temp = temp->next;
	}
	return (0);
}


MateriaSource::MateriaSource(MateriaSource &o)
{
	nbEquip = o.nbEquip;
	source = new lst(*o.source);
	lst *temp = new lst;
	lst *otemp = new lst;
	temp = source;
	otemp = o.source;
	while (otemp)
	{
		temp->m = otemp->m->clone();
		delete otemp->m;
		temp->next = new lst(*otemp);
		tail = temp;
		temp = temp->next;
		otemp = otemp->next;
	}
	temp = NULL;
	delete(temp);
	delete(otemp);
}

MateriaSource::MateriaSource()
{
	source = NULL;
	tail = NULL;
	nbEquip = 0;
};

MateriaSource::~MateriaSource()
{
	lst *temp = new lst;

	while ((temp = source))
	{
		delete source->m;
		source = source->next;
   		delete temp;
	}
};
