/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 06:46:30 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

void				 MiningBarge::mine(IAsteroid* as) const
{
	lst *temp = new lst;
	temp = inventaire;
	while (temp)
	{	
   		temp->m->mine(as);
		temp = temp->next;
	}
}

void MiningBarge::equip(IMiningLaser* m)
{
	lst *temp = new lst;
	lst *temp2 = new lst;
	temp2 = inventaire;
	if (m && nbEquip < 4)
	{
		temp->m = m;
		temp->next = NULL;
		if (inventaire==NULL)
      	{
        	inventaire=temp;
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
}

MiningBarge::MiningBarge()
{
	inventaire = NULL;
	tail = NULL;
	nbEquip = 0;
};

MiningBarge::~MiningBarge()
{
	lst *temp = new lst;

	while ((temp = inventaire))
	{	
		inventaire = inventaire->next;
   		delete temp;
	}
};
