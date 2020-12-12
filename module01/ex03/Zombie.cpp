#include "Zombie.hpp"

void	Zombie::namer()
{
 	int i = 0;
    std::string yo = "abcdefghijklmnopqrstuvwxyz";
    std::string nam;
    while (i < 6)
    {
        nam[i] = yo[rand() % 26];
        i++;
    }
	name = nam.c_str();
}
void    Zombie::announce()
{
	std::cout << "<" << name << " " << "(" << type << ")" << "> ";
    puts("Braiiiiiiinnnssss ...");
}

int     Zombie::get_Zombie()
{
  std::cout << "Your name kawaii is " << name << "\n";
  std::cout << "Your type kawaii is " << type << "\n";
  return (1);
}

int     Zombie::set_Zombie()
{
    std::string newname;
	std::string newtype;
	puts("\nNew name :");
  	std::cin >> newname;
  	puts("\nNew type :");
  	std::cin >> newtype;
  	name = newname;
  	type = newtype;
  	return (1);
}

Zombie::Zombie(std::string name, std::string type)
{
  this->name = name;
  this->type = type;
};

Zombie::Zombie()
{
  this->name = "default";
  this->type = "default";
};
