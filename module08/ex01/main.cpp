#include "Span.hpp"

int main()
{
    Span sp = Span(5);
	std::cout << "---- TEST FACILE ----" << std::endl;
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
    sp.print_lst();
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    try
    {
        sp.addNumber(22);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	Span sp2 = Span(5);
	// sp2.addNumber(-5);
    // sp2.addNumber(-4);
    sp2.addNumber(-2147483647);
    sp2.addNumber(2147483647);
	std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
    return (0);
}