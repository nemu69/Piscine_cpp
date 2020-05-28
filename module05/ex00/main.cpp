
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat paul("Paul", 1);
	Bureaucrat polo("Polo", 150);
	Bureaucrat paolo("Paolo", 100);
	try
	{
		paul.inc();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		polo.dec();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Grade paolo :" << paolo.getGrade() << std::endl;
	try
	{
		while (paolo.getGrade() > 0)
			paolo.inc();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Grade paolo : " << paolo.getGrade() << std::endl;
	try
	{
		Bureaucrat problem("problem", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat probleme("probleme", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}