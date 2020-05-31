#include "Array.hpp"

int	main()
{
	
	// Array<std::string> str(3);
	// str[0] = "hello";
	// str[1] = "there";
	// str[2] = "world";
	
	// std::cout << str[1] << std::endl;
	// std::cout << "Size str : " << str.size() << std::endl;

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