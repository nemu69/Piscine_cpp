/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 08:03:53 by nepage            #+#    #+#             */
/*   Updated: 2020/03/09 05:10:41 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string const & Character::getName() const
{
	return (name);
}

int 			 	Character::getnbEquip() const
{
	return (nbEquip);
}

void Character::equip(AMateria* m)
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
			inventaire->i = 0;
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
			tail->i = 0;
		}
		nbEquip++;
	}
	else
		puts("FULL Materia !");
}

void Character::unequip(int idx)
{
	int i = 0;
	lst *temp = new lst;
	lst *prev = new lst;
	temp = inventaire;
	if (idx > -1 && nbEquip >= idx + 1 && temp)
	{
		if (idx == 0)
		{
			inventaire = temp->next;
			return;
		}
		while (temp && i < idx)
		{
			prev = temp;
			temp = temp->next;
			i++;
		}
		prev->next = temp->next;
		nbEquip--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	int i = 0;
	lst *temp = new lst;
	temp = inventaire;
	if (idx > -1 && nbEquip >= idx + 1 && temp)
	{
		while (temp && i < idx)
		{
			temp = temp->next;
			i++;
		}
		temp->m->use(target);
	}
}

Character::Character(std::string const & name) : ICharacter()
{
	this->name = name;
	inventaire = NULL;
	tail = NULL;
	nbEquip = 0;
};

Character::Character(const Character &o) : ICharacter()
{
	name = o.name;
	nbEquip = o.nbEquip;
	inventaire = new lst(*o.inventaire);
	lst *temp = new lst;
	lst *otemp = new lst;
	temp = inventaire;
	otemp = o.inventaire;
	while (otemp)
	{
		temp->m = otemp->m->clone();
		otemp->next ? temp->i = 1 : temp->i = 0;
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

Character::Character()
{

};

Character::~Character()
{
	lst *temp = new lst;

	while ((temp = inventaire))
	{	
		if (inventaire->i)
			delete inventaire->m;
		inventaire = inventaire->next;
   		delete temp;
	}

};
