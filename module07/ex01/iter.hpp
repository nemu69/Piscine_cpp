#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <exception>
#include <string.h>
#include <ctime>
#include <cmath>
#include <cstdlib>

template<typename T>
void iter(const T *tab, int size, void (&f)(T &))
{
	int i = -1;
	while (++i < size)
		f((const_cast<T&>(tab[i])));
}

template<typename T>
void iter(T *tab, int size, void (*f)(T const&))
{
	int i = -1;
	while (++i < size)
		f(tab[i]);
}