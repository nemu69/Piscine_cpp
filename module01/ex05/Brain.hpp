#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <stdio.h>
# include <iomanip>
# include <string.h>
# include <ctime>
# include <cstdlib>
# include <sstream>

class Brain
{
  public :
	const void *id;
	std::string identify() const;
	Brain();
};

#endif