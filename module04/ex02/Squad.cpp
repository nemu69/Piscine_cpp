/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/02/27 00:18:31 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

int 			Squad::getCount() const
{
	return(nbUnit);
}

ISpaceMarine* 	Squad::getUnit(int index) const
{
	lst *temp = new lst;
	temp = container;
	int i = 0;
	if (nbUnit - 1 >= index && index >= 0)
	{
		while (i < index)
		{
			temp = temp->next;
			i++;
		}
		return (temp->marine);
	}
	return (NULL);
}


void			Squad::setUnit(int nbUnit)
{
	this->nbUnit = nbUnit;
}

int 			Squad::push(ISpaceMarine* marine)
{
	lst *temp = new lst;
	lst *temp2 = new lst;
	temp2 = container;
	if (marine)
	{
		temp->marine = marine->clone();
		temp->next = NULL;
		if (container==NULL)
      	{
        	container=temp;
        	tail=temp;
      	}
		else
		{
			while (temp2)
			{
				if (temp2->marine == marine)
				{
					delete(temp2);
					return(getCount());
				}
				temp2 = temp2->next;
			}
			tail->next=temp;
        	tail=temp;
		}
		nbUnit += 1;
	}
	delete(temp2);
	return(getCount());
}

Squad::Squad(Squad &o)
{
	nbUnit = o.nbUnit;
	container = new lst(*o.container);
	lst *temp = new lst;
	lst *otemp = new lst;
	temp = container;
	otemp = o.container;
	while (otemp)
	{
		temp->marine = otemp->marine->clone();
		temp->next = new lst(*otemp);
		temp = temp->next;
		otemp = otemp->next;
	}
	temp->marine = temp->marine->clone();
	temp->next = NULL;
	tail = temp;
	delete(temp);
	delete(otemp);
}

Squad::Squad()
{
	nbUnit = 0;

	container = NULL;
	tail = NULL;
};

Squad::~Squad()
{
	lst *temp = new lst;

	while ((temp = container))
	{
		if (container->marine)
			delete container->marine;
		container = container->next;
   		delete temp;
	}
};
