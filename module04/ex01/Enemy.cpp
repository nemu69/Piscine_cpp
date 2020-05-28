/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage <nepage-l@student.le-101.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 08:49:12 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/25 05:34:56 by nepage           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

std::string Enemy::getType() const
{
	return (type);
}

int 		Enemy::getHP() const
{
	return (HP);
}

void 		Enemy::setHP(int HP)
{
	this->HP = HP;
}

void 		Enemy::takeDamage(int damage)
{
	if (damage > 0)
		HP -= damage;
}

Enemy::Enemy(int hp, std::string const & type)
{
  this->type = type;
  this->HP = hp;
};

Enemy::Enemy(Enemy &o)
{
	HP = o.getHP();
	type = o.getType();
}

Enemy::Enemy()
{

};

Enemy::~Enemy()
{

};
