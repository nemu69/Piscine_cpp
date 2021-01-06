
#ifndef ZombieEvent_EVENT_HPP
# define ZombieEvent_EVENT_HPP
# include "Zombie.hpp"

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
