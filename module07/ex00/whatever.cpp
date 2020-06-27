#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>

template<typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T	max(T &a, T &b)
{
	return (a > b ? a : b);
}

template<typename T>
T	min(T &a, T &b)
{
	return (a < b ? a : b);
}

int	main()
{
	{
		int a = 4;
		int b = 6;
		puts("---- INT ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
	}
	
	{
		float a = 2.252;
		float b = 6.252;
		puts("---- FLOAT ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
	}
	
	{
		std::string a = "abcde";
		std::string b = "ABCDE";
		puts("---- STRING ----");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		swap(a, b);
		puts("Swap a et b");
		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
		std::cout << "valeur max : " << max(a,b) << std::endl;
		std::cout << "valeur min : " << min(a,b) << std::endl;
	}

	return(0);
}