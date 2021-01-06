#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{

	public :
	std::string identify();
	const Brain brain;
	Human();
	const Brain& getBrain() const;
};

#endif