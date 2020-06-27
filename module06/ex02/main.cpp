#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p)
{
	A* a = dynamic_cast<A*>(p);
	B* b = dynamic_cast<B*>(p);
	C* c = dynamic_cast<C*>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	if (b != NULL)
		std::cout << "B" << std::endl;
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify_from_reference(Base & p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception& e)
	{

	}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception& e)
	{

	}

}

int	main()
{
	Base *find = new B();
	identify_from_pointer(find);
	identify_from_reference(*find);
	Base *fin = new A();
	identify_from_pointer(fin);
	identify_from_reference(*fin);
	delete (find);
	delete (fin);
	return (0);
}