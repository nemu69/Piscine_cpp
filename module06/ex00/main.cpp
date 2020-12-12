#include "ConvertSca.hpp"

int	main(int ac, char **argv)
{
	
	if (ac == 2)
	{
		ConvertSca sca(argv[1]);
		std::cout << "char: ";
		try{
			sca.convChar();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}
		std::cout << "int: ";
		try{
			sca.convInt();
		}
		catch(const std::exception& e){
			std::cerr << "impossible" << '\n';
		}
		std::cout << "float: ";
		try{
			sca.convFloat();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}
		std::cout << "double: ";
		try{
			sca.convDouble();
		}
		catch(const std::exception& e){
			std::cerr << e.what() << '\n';
		}	
	}
	return(0);
}