#include "Span.hpp"

int main()
{
	srand(time(NULL));
    Span sp = Span(5);
	std::cout << "---- TEST ----" << std::endl;
    sp.addNumber(5);
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sp.addNumber(3);
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    sp.addNumber(17);
    sp.addNumber(17);
    sp.addNumber(22);
    sp.print_lst();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl << std::endl;
    try
    {
        sp.addNumber(36);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	std::cout << std::endl << "---- TEST max min ----" << std::endl << std::endl;
	Span sp2 = Span(2);
    sp2.addNumber(-2147483648);
    sp2.addNumber(2147483647);
	sp2.print_lst();
	std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

	std::cout << std::endl << "---- TEST multi rand() ----" << std::endl;
	{
		Span sp3 = Span(1000);
		std::list<int> list;
    	std::cout << list.size() << std::endl;
		for (size_t i = 0; i < 1000; i++)
		{
			list.push_front(rand());

		}
		std::cout << list.size() << std::endl;
		try
		{
			sp3.addMultiple(list.begin(), list.end());
			std::cout << sp3.shortestSpan() << std::endl;
   			std::cout << sp3.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << std::endl << "---- TEST multi 2 ----" << std::endl;
	{
		Span sp3 = Span(20);
		std::list<int> list;
    	std::cout << list.size() << std::endl;
		for (size_t i = 0; i < 20; i++)
		{
			list.push_front(i);

		}
		std::cout << list.size() << std::endl;
		try
		{
			sp3.addMultiple(list.begin(), list.end());
			std::cout << sp3.shortestSpan() << std::endl;
   			std::cout << sp3.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
    return (0);
}