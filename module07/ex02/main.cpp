#include "Array.hpp"
#include "array"

int	main()
{
	Array<char *> str(3);
	str[0] = (char *)"dgvdv";
	str[1] = (char *)"there";
	str[2] = (char *)"world";

	Array<int> *str2 = new Array<int>();
	std::cout << "a = " << *str2 << std::endl; 
	
	std::cout << str[1] << std::endl;
	std::cout << "Size str : " << str.size() << std::endl;

	std::cout << "Exemple INT" << std::endl;
	Array<int> num(5);
	std::cout << "Size int : " << num.size() << std::endl;
	num[0] = 0;
	num[1] = 1;
	num[2] = 2;
	num[3] = 3;
	num[4] = 4;
	try
	{
		for (unsigned int i = 0;i < num.size() + 1;i++)
			std::cout << num[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return(0);
}