#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>



template<typename T>
void print(T print)
{
	std::cout << print << std::endl;
}

template<typename T>
void iter(T *tab, int size, void (*f)(T))
{
	int i = -1;
	while (++i < size)
		f(tab[i]);
}

int	main(int ac, char **argv)
{
	puts("--- STRING ---");
	std::string string[] = {"hello", "world", "this", "message"};
	iter(string, 4, print);
	puts("--- CHAR[] ---");
	char str[] = "HELLO"; 
	iter(str, 5, print);
	puts("--- INT[] ---");
	int tab[] = {0,1,2,3,4}; 
	iter(tab, 5, print);
	return(0);
}