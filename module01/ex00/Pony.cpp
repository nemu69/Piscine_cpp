#include "Pony.hpp"

void ponyOnTheStack(std::string color, std::string magic)
{
  int i;

  i = 1;
  Pony poney(color, magic);
  std::string cmd;
  	while (i)
  	{
        puts("Menu ponyOnTheStack");
        puts("Choose 'set' or 'get' or 'exit' : ");
        std::cin >> cmd;
        if (!cmd.compare("set"))
		  poney.set_pony();
  		else if (!cmd.compare("get"))
		  poney.get_pony();
  		else if (!cmd.compare("exit"))
		  i = 0;
    }
    puts("\n");
}

void ponyOnTheHeap(std::string color, std::string magic)
{
    int i;

    i = 1;
    Pony* poney =  new Pony(color, magic);
    std::string cmd;
  	while (i)
  	{
        puts("Menu ponyOnTheHeap");
        puts("Choose 'set' or 'get' or 'exit' : ");
        std::cin >> cmd;
        if (!cmd.compare("set"))
		  poney->set_pony();
  		else if (!cmd.compare("get"))
		  poney->get_pony();
  		else if (!cmd.compare("exit"))
		  i = 0;
    }
    delete(poney);
    puts("\n");
}

int  Pony::get_pony()
{
  std::cout << "Your color kawaii is " << color << std::endl;
  std::cout << "Your magic kawaii is " << magic << std::endl;
  return (1);
}

int  Pony::set_pony()
{
    std::string colo;
	std::string magi;
	puts("\nNew Color :");
  	std::cin >> colo;   // mail
  	puts("\nNew magic kawaii :");
  	std::cin >> magi;   // Phone
  	color = colo;
  	magic = magi;
  	return (1);
}

Pony::Pony(std::string color, std::string magic)
{
  this->color = color;
  this->magic = magic;
};

Pony::~Pony()
{
	std::cout << "Destructor" << std::endl;;
}