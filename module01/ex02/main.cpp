#include "ZombieEvent.hpp"

void   randomChump()
{
    Zombie zombi;
    int i = 0;
    std::string yo = "abcdefghijklmnopqrstuvwxyz";
    std::string nam;
    while (i < 6)
    {
        nam[i] = yo[rand() % 26];
        i++;
    }
    zombi.name = nam.c_str();
    zombi.announce();
}

int main()
{
    srand(time(NULL));
    ZombieEvent hey;

	randomChump();
    randomChump();
	delete(hey.zombi);
  	return (0);
}
