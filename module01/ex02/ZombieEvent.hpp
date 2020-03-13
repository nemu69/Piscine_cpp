/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 14:26:45 by nepage-l          #+#    #+#             */
/*   Updated: 2020/02/21 20:04:57 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZombieEvent_EVENT_H
# define ZombieEvent_EVENT_H
#include "Zombie.hpp"

class ZombieEvent
{

  public :

  Zombie* newZombie(std::string name);
  ZombieEvent();
  int get_ZombieEvent();
  int setZombieType();

  std::string type;
  Zombie *zombi;
};

#endif
