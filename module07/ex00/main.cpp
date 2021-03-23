/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nepage-l <nepage-l@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 11:19:15 by nepage-l          #+#    #+#             */
/*   Updated: 2021/03/23 14:23:59 by nepage-l         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
# include <iostream>
# include <string>
# include <iomanip>

 class Awesome {

 	public:

 		Awesome( int n ) : _n( n ) {}

 		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
 		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
 		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
 		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
 		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
 		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
 		int getn() const {return (_n);}

 	private:

 		int _n;
 };

 std::ostream &	operator<<( std::ostream & o, Awesome const & i )
 {
 	o << i.getn();
 	return o;
 }

 int main(void) {
 	Awesome test1(1);
 	Awesome test2(2);
 	const Awesome ctest1(10);
 	const Awesome ctest2(20);
 	int i1 = 2;
 	int i2 = 3;
 	double d1(-5.2), d2(5.2);
 	const int ci1(2), ci2(-5);
 	const double cd1(-2.5), cd2(-5.6);
 	const std::string cc1("chaine2"), cc2("chaine1");
 	std::string c1("chaine2"), c2("chaine1");

 	std::cout << "--- INT ---" << std::endl;
 	std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
 	::swap( i1, i2 );
 	std::cout << "after swap i2 = " << i1 << ", i2 = " << i2 << std::endl;
 	std::cout << "min( i1, i2 ) = " << ::min( i1, i2 ) << std::endl;
 	std::cout << "max( i1, i2 ) = " << ::max( i1, i2 ) << std::endl << std::endl;

 	std::cout << "--- STRING ---" << std::endl;
 	std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
 	::swap(c1, c2);
 	std::cout << "after swap c1 = " << c1 << ", c2 = " << c2 << std::endl;
 	std::cout << "min( c1, c2 ) = " << ::min( c1, c2 ) << std::endl;
 	std::cout << "max( c1, c2 ) = " << ::max( c1, c2 ) << std::endl << std::endl;

 	std::cout << "--- DOUBLE ---" << std::endl;
 	std::cout << "d1 = " << d1 << ", d2 = " << d2 << std::endl;
 	::swap(d1, d2);
 	std::cout << "after swap d1 = " << d1 << ", d2 = " << d2 << std::endl;
 	std::cout << "min( d1, d2 ) = " << min( d1, d2 ) << std::endl;
 	std::cout << "max( d1, d2 ) = " << max( d1, d2 ) << std::endl << std::endl;


 	try
 	{
 		std::cout << "--- CONST DOUBLE ---" << std::endl;
 		std::cout << "cd1 = " << cd1 << ", cd2 = " << cd2 << std::endl;
 		::swap(cd1, cd2);
 	}
 	catch(const std::exception& e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 	std::cout << "cd1 = " << cd1 << ", cd2 = " << cd2 << std::endl;
 	std::cout << "min( cd1, cd2 ) = " << ::min( cd1, cd2 ) << std::endl;
 	std::cout << "max( cd1, cd2 ) = " << ::max( cd1, cd2 ) << std::endl << std::endl;

 	try
 	{
 		std::cout << "--- CONST STRING ---" << std::endl;
 		std::cout << "cc1 = " << cc1 << ", cc2 = " << cc2 << std::endl;
 		::swap(cc1, cc2);
 	}
 	catch(const std::exception& e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 	std::cout << "after swap cc1 = " << cc1 << ", cc2 = " << cc2 << std::endl;
 	std::cout << "min( cc1, cc2 ) = " << ::min( cc1, cc2 ) << std::endl;
 	std::cout << "max( cc1, cc2 ) = " << ::max( cc1, cc2 ) << std::endl << std::endl;

 	try
 	{
 		std::cout << "--- CONST INT ---" << std::endl;
 		std::cout << "ci1 = " << ci1 << ", ci2 = " << ci2 << std::endl;
 		::swap(ci1, ci2);
 	}
 	catch(const std::exception& e)
 	{
 		std::cout << e.what() << std::endl;
 	}
 	std::cout << "after swap ci1 = " << ci1 << ", ci2 = " << ci2 << std::endl;
 	std::cout << "min( ci1, ci2 ) = " << ::min( ci1, ci2 ) << std::endl;
 	std::cout << "max( ci1, ci2 ) = " << ::max( ci1, ci2 ) << std::endl;
	
 	std::cout << std::endl << "--- AWESOME ---" << std::endl;
 	std::cout << "test1 = " << test1 << ", test2 = " << test2 << std::endl;
 	::swap(test1, test2);
 	std::cout << "after swap test1 = " << test1 << ", test2 = " << test2 << std::endl;
 	std::cout << "min( test1, test2 ) = " << min( test1, test2 ) << std::endl;
 	std::cout << "max( test1, test2 ) = " << max( test1, test2 ) << std::endl;

 	try
 	{
 		std::cout << std::endl << "--- CONST AWESOME ---" << std::endl;
 		std::cout << "ctest1 = " << ctest1 << ", ctest2 = " << ctest2 << std::endl;
 		::swap(ctest1, ctest2);
 	}
 	catch(const std::exception& e)
 	{
 		std::cout << e.what() << std::endl;
 	}

 	std::cout << "after swap ctest1 = " << ctest1 << ", ctest2 = " << ctest2 << std::endl;
 	std::cout << "min( ctest1, ctest2 ) = " << ::min( ctest1, ctest2 ) << std::endl;
 	std::cout << "max( tcest1, ctest2 ) = " << ::max( ctest1, ctest2 ) << std::endl;

 	std::cout << std::endl << "--- AWESOME WITH CONST AWESOME ---" << std::endl;
 	std::cout << "min( ctest1(10), test2(1) ) = " << ::min( ctest1, test2 ) << std::endl;
 	std::cout << "max( cest1(2), ctest2(20) ) = " << ::max( test1, ctest2 ) << std::endl;

 	std::cout << std::endl << "--- INT WITH CONST INT ---" << std::endl;
 	std::cout << "min( ci1(2), i1(3) ) = " << ::min( ci1, i1 ) << std::endl;
 	std::cout << "max( ci1(2), i1(3) ) = " << ::max( ci1, i1 ) << std::endl;

 	return 0;
 }

//int	main()
//{
//	{
//		int a = 4;
//		int b = 6;
//		puts("---- INT ----");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		swap(a, b);
//		puts("Swap a et b");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		std::cout << "valeur max : " << max(a,b) << std::endl;
//		std::cout << "valeur min : " << min(a,b) << std::endl;
//	}
//	{
//		const int a = 4;
//		const int b = 6;
//		puts("---- CONST INT ----");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		swap(a, b);
//		puts("Swap a et b");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		std::cout << "valeur max : " << max(a,b) << std::endl;
//		std::cout << "valeur min : " << min(a,b) << std::endl;
//		puts("Pas de Swap car const.............. logique :)");
//	}
//	{
//		static int a = 4;
//		static int b = 6;
//		puts("---- STATIC INT ----");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		swap(a, b);
//		puts("Swap a et b");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		std::cout << "valeur max : " << max(a,b) << std::endl;
//		std::cout << "valeur min : " << min(a,b) << std::endl;
//	}
//	{
//		float a = 2.252;
//		float b = 6.252;
//		puts("---- FLOAT ----");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		swap(a, b);
//		puts("Swap a et b");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		std::cout << "valeur max : " << max(a,b) << std::endl;
//		std::cout << "valeur min : " << min(a,b) << std::endl;
//	}
	
//	{
//		std::string a = "abcde";
//		std::string b = "ABCDE";
//		puts("---- STRING ----");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		swap(a, b);
//		puts("Swap a et b");
//		std::cout << "valeur a : " << a << "\nvaleur b : " << b << std::endl;
//		std::cout << "valeur max : " << max(a,b) << std::endl;
//		std::cout << "valeur min : " << min(a,b) << std::endl;
//	}

//	return(0);
//}